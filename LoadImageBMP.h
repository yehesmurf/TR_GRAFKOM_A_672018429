#pragma once

#include <stdio.h>

GLuint loadBMP_custom(const char* imagepath) {
	unsigned char header[54];
	unsigned int dataPos;
	unsigned int width, height;
	unsigned int imageSize;
	unsigned char* data;

	FILE* file;
	fopen_s(&file, imagepath, "rb");
	if (!file) { printf("Gambar Tidak Bisa Ditemukan\n"); return 0; }

	if (fread(header, 1, 54, file) != 54) { printf("Bukan BMP File\n"); fclose(file); return 0; }

	if (header[0] != 'B' || header[1] != 'M') { printf("Bukan BMP File\n"); fclose(file); return 0; }

	if (*(int*)&(header[0x1E]) != 0) { printf("Bukan BMP File\n"); return 0; }
	if (*(int*)&(header[0x1C]) != 24) { printf("Bukan BMP File\n"); return 0; }
	if (header[0] != 'B' || header[1] != 'M') { printf("Bukan BMP File\n"); fclose(file); }

	dataPos = *(int*)&(header[0x0A]);
	imageSize = *(int*)&(header[0x22]);
	width = *(int*)&(header[0x12]);
	height = *(int*)&(header[0x16]);

	if (imageSize == 0) imageSize = width * height * 3;
	if (dataPos == 0) dataPos = 54;

	data = new unsigned char[imageSize];
	fread(data, 1, imageSize, file);
	fclose(file); //Menghindari Memory Leak

	//
	GLuint textureID1;

	glGenTextures(1, &textureID1);
	glBindTexture(GL_TEXTURE_2D, textureID1);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	GLuint textureID2;

	glGenTextures(1, &textureID2);
	glBindTexture(GL_TEXTURE_2D, textureID2);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	GLuint textureID3;

	glGenTextures(1, &textureID3);
	glBindTexture(GL_TEXTURE_2D, textureID3);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	GLuint textureID4;

	glGenTextures(1, &textureID4);
	glBindTexture(GL_TEXTURE_2D, textureID4);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	GLuint textureID5;

	glGenTextures(1, &textureID5);
	glBindTexture(GL_TEXTURE_2D, textureID5);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	GLuint textureID6;

	glGenTextures(1, &textureID6);
	glBindTexture(GL_TEXTURE_2D, textureID6);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);

	delete[] data; //Menghindari Memory Leak

	return textureID1, textureID2, textureID3, textureID4, textureID5, textureID6;
}