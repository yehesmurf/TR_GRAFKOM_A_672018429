#include <Windows.h>
#include <glut.h>
#include <lodepng.h>
#include <iostream>
#include "LoadImageBMP.h"

GLuint _textureID1;
GLuint _textureID2;
GLuint _textureID3;

int is_depth;

void init(void) {
	glClearColor(0.72, 0.93, 0.96, 1.0);
	glEnable(GL_BLEND);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	_textureID1 = loadBMP_custom("I:/Tugas Grafkom/Gambar Tugas 4 Dosen/Bmp File Asdos/1.bmp");
	_textureID2 = loadBMP_custom("I:/Tugas Grafkom/Gambar Tugas 4 Dosen/Bmp File Asdos/2.bmp");
	_textureID3 = loadBMP_custom("I:/Tugas Grafkom/Gambar Tugas 4 Dosen/Bmp File Asdos/3.bmp");
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}
void sisidepan() {
	//Depan 
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(0.0, -10.0, 30.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(0.0, 30.0, 30.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, 30.0, -10.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(0.0, -10.0, -10.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);
}
void sisibelakang() {
	//Belakang
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, -10.0, 30.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(10.0, 30.0, 30.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(10.0, 30.0, -10.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(10.0, -10.0, -10.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);
}
void sisisamping1() {
	//Depan 
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, -10.0, 30.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(10.0, 30.0, 30.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, 30.0, 30.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(0.0, -10.0, 30.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);
}
void sisisamping2() {
	//Depan 
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, -10.0, -10.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(10.0, 30.0, -10.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, 30.0, -10.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(0.0, -10.0, -10.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);
}
void sisiatas() {
	//Atas 
	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glVertex3f(10.0, 30.0, 30.0);	//A
	glVertex3f(10.0, 30.0, -10.0);	//B
	glVertex3f(0.0, 30.0, -10.0);	//C
	glVertex3f(0.0, 30.0, 30.0);	//D
	glEnd();
}
void sisibawah() {
	//Bawah 
	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glVertex3f(10.0, -10.0, 30.0);	//A
	glVertex3f(0.0, -10.0, 30.0);	//B
	glVertex3f(0.0, -10.0, -10.0);	//C
	glVertex3f(10.0, -10.0, -10.0);	//D
	glEnd();
}
void bangunanutama() {
	sisidepan();
	sisibelakang();
	sisisamping1();
	sisisamping2();
	sisiatas();
	sisibawah();
}

void bidang1() {
	//Depan 
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(-25.0, 0.0, 27.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(0.0, 0.0, 27.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, -10.0, 27.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(-25, -10.0, 27.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Belakang
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(-25.0, 0.0, 20.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(0.0, 0.0, 20.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, -10.0, 20.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(-25, -10.0, 20.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Samping1
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(-25.0, 0.0, 27.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(-25.0, 0.0, 20.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(-25.0, -10.0, 20.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(-25.0, -10.0, 27.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Atas
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(-25.0, 0.0, 27.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(-25.0, 0.0, 20.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, 0.0, 20.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(0.0, 0.0, 27.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Bawah
	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glVertex3f(-25.0, -10.0, 27.0);	//A
	glVertex3f(-25.0, -10.0, 20.0);	//B
	glVertex3f(0.0, -10.0, 20.0);	//C
	glVertex3f(0.0, -10.0, 27.0);	//D
	glEnd();
}
void bidang2() {
	//Belakang
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(-25.0, -4.0, -7.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(0.0, -4.0, -7.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(0.0, -10.0, -7.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(-25, -10.0, -7.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Samping1
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(-25.0, -4.0, 20.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(-25.0, -4.0, -7.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(-25.0, -10.0, -7.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(-25.0, -10.0, 20.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Atas
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(-25.0, -4.0, 20.0);	//A
	glVertex3f(0.0, -4.0, 20.0);	//B
	glVertex3f(0.0, -4.0, -7.0);	//C
	glVertex3f(-25.0, -4.0, -7.0);	//D
	glEnd();

	//Bawah
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(-25.0, -10.0, 20.0);	//A
	glVertex3f(0.0, -10.0, 20.0);	//B
	glVertex3f(0.0, -10.0, -7.0);	//C
	glVertex3f(-25.0, -10.0, -7.0);	//D
	glEnd();
}
void bidang3() {
	//Samping1
	glBegin(GL_QUADS);
	glColor3f(1.00, 0.51, 0.05);
	glVertex3f(-5.0, -2.0, 20.0);	//A
	glVertex3f(-5.0, -2.0, 15.0);	//B
	glVertex3f(-5.0, -4.0, 15.0);	//C
	glVertex3f(-5.0, -4.0, 20.0);	//D
	glEnd();

	//Atas
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(-5.0, -2.0, 20.0);	//A
	glVertex3f(-5.0, -2.0, 15.0);	//B
	glVertex3f(0.0, -2.0, 15.0);	//C
	glVertex3f(0.0, -2.0, 20.0);	//D
	glEnd();
}
void bidang4() {
	//Depan
	glBegin(GL_QUADS);
	glColor3f(0.12, 0.13, 0.13);
	glVertex3f(-10.0, -2.0, 15.0);	//A
	glVertex3f(0.0, -2.0, 15.0);	//B
	glVertex3f(0.0, -4.0, 15.0);	//C
	glVertex3f(-10, -4.0, 15.0);	//D
	glEnd();

	//Belakang
	glBegin(GL_QUADS);
	glColor3f(0.12, 0.13, 0.13);
	glVertex3f(-10.0, -2.0, 5.0);	//A
	glVertex3f(0.0, -2.0, 5.0);	//B
	glVertex3f(0.0, -4.0, 5.0);	//C
	glVertex3f(-10, -4.0, 5.0);	//D
	glEnd();

	//Samping1
	glBegin(GL_QUADS);
	glColor3f(1.00, 0.51, 0.05);
	glVertex3f(-10.0, -2.0, 15.0);	//A
	glVertex3f(-10.0, -2.0, 5.0);	//B
	glVertex3f(-10.0, -4.0, 5.0);	//C
	glVertex3f(-10.0, -4.0, 15.0);	//D
	glEnd();

	//Atas
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(-10.0, -2.0, 15.0);	//A
	glVertex3f(0.0, -2.0, 15.0);	//B
	glVertex3f(0.0, -2.0, 5.0);	//C
	glVertex3f(-10.0, -2.0, 5.0);	//D
	glEnd();
}
void bangunanpendamping1() {
	bidang1();
	bidang2();
	bidang3();
	bidang4();
}

void bidang5() {
	//Depan 
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, 0.0, 27.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(20.0, 0.0, 27.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(20.0, -10.0, 27.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(10, -10.0, 27.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Belakang
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, 0.0, 20.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(20.0, 0.0, 20.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(20.0, -10.0, 20.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(10, -10.0, 20.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	//Samping1
	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(20.0, 0.0, 27.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(20.0, 0.0, 20.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(20.0, -10.0, 20.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(20.0, -10.0, 27.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Atas
	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glVertex3f(10.0, 0.0, 20.0);	//A
	glVertex3f(20.0, 0.0, 20.0);	//B
	glVertex3f(20.0, 0.0, 27.0);	//C
	glVertex3f(10.0, 0.0, 27.0);	//D
	glEnd();

	//Bawah
	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glVertex3f(10.0, -10.0, 20.0);	//A
	glVertex3f(20.0, -10.0, 20.0);	//B
	glVertex3f(20.0, -10.0, 27.0);	//C
	glVertex3f(10.0, -10.0, 27.0);	//D
	glEnd();
}
void bidang6() {

	//Belakang
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, -4.0, -7.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(20.0, -4.0, -7.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(20.0, -10.0, -7.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(-10, -10.0, -7.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Samping1
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(20.0, -4.0, -7.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(20.0, -10.0, -7.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(20.0, -10.0, 20.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(20.0, -4.0, 20.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Atas
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureID3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glBegin(GL_QUADS);
	glColor3f(0.89, 0.82, 0.74);
	glTexCoord2f(0, 1);
	glVertex3f(10.0, -4.0, 20.0);	//A
	glTexCoord2f(1, 1);
	glVertex3f(20.0, -4.0, 20.0);	//B
	glTexCoord2f(1, 0);
	glVertex3f(20.0, -4.0, -7.0);	//C
	glTexCoord2f(0, 0);
	glVertex3f(10.0, -4.0, -7.0);	//D
	glEnd();

	glDisable(GL_TEXTURE_2D);

	//Bawah
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(10.0, -10.0, 20.0);	//A
	glVertex3f(20.0, -10.0, 20.0);	//B
	glVertex3f(20.0, -10.0, -7.0);	//C
	glVertex3f(10.0, -10.0, -7.0);	//D
	glEnd();
}
void bangunanpendamping2() {
	bidang5();
	bidang6();
}

void alas() {
	//Depan 
	glBegin(GL_QUADS);
	glColor3f(0.10, 0.10, 0.10);
	glVertex3f(-40.0, -10.0, 40.0);	//A
	glVertex3f(-40.0, -11.0, 40.0);	//B
	glVertex3f(40.0, -11.0, 40.0);	//C
	glVertex3f(40, -10.0, 40.0);	//D
	glEnd();

	//Belakang
	glBegin(GL_QUADS);
	glColor3f(0.10, 0.10, 0.10);
	glVertex3f(-40.0, -10.0, -20.0);	//A
	glVertex3f(-40.0, -11.0, -20.0);	//B
	glVertex3f(40.0, -11.0, -20.0);	//C
	glVertex3f(40, -10.0, -20.0);	//D
	glEnd();

	//Samping1
	glBegin(GL_QUADS);
	glColor3f(0.10, 0.10, 0.10);
	glVertex3f(-40.0, -10.0, 40.0);		//A
	glVertex3f(-40.0, -11.0, 40.0);		//B
	glVertex3f(-40.0, -11.0, -20.0);	//C
	glVertex3f(-40.0, -10.0, -20.0);	//D
	glEnd();

	//Samping2
	glBegin(GL_QUADS);
	glColor3f(0.10, 0.10, 0.10);
	glVertex3f(40.0, -10.0, 40.0);		//A
	glVertex3f(40.0, -11.0, 40.0);		//B
	glVertex3f(40.0, -11.0, -20.0);	//C
	glVertex3f(40.0, -10.0, -20.0);	//D
	glEnd();

	//Atas
	glBegin(GL_QUADS);
	glColor3f(0.31, 0.31, 0.31);
	glVertex3f(-40.0, -10.0, 40.0);		//A
	glVertex3f(-40.0, -10.0, -20.0);	//B
	glVertex3f(40.0, -10.0, -20.0);	//C
	glVertex3f(40.0, -10.0, 40.0);	//D
	glEnd();

	//Bawah
	glBegin(GL_QUADS);
	glColor3f(0.31, 0.31, 0.31);
	glVertex3f(-40.0, -11.0, 40.0);		//A
	glVertex3f(-40.0, -11.0, -20.0);	//B
	glVertex3f(40.0, -11.0, -20.0);	//C
	glVertex3f(40.0, -11.0, 40.0);	//D
	glEnd();
}

void tanah() {
	//Depan 
	glBegin(GL_QUADS);
	glColor3f(0.53, 0.26, 0.19);
	glVertex3f(-80.0, -11.0, 60.0);	//A
	glVertex3f(-80.0, -12.0, 60.0);	//B
	glVertex3f(80.0, -12.0, 60.0);	//C
	glVertex3f(80, -11.0, 60.0);	//D
	glEnd();

	//Belakang
	glBegin(GL_QUADS);
	glColor3f(0.53, 0.26, 0.19);
	glVertex3f(-80.0, -11.0, -50.0);	//A
	glVertex3f(-80.0, -12.0, -50.0);	//B
	glVertex3f(80.0, -12.0, -50.0);	//C
	glVertex3f(80, -11.0, -50.0);	//D
	glEnd();

	//Samping1
	glBegin(GL_QUADS);
	glColor3f(0.53, 0.26, 0.19);
	glVertex3f(-80.0, -11.0, 60.0);		//A
	glVertex3f(-80.0, -12.0, 60.0);		//B
	glVertex3f(-80.0, -12.0, -50.0);	//C
	glVertex3f(-80.0, -11.0, -50.0);	//D
	glEnd();

	//Samping2
	glBegin(GL_QUADS);
	glColor3f(0.53, 0.26, 0.19);
	glVertex3f(80.0, -11.0, 60.0);		//A
	glVertex3f(80.0, -12.0, 60.0);		//B
	glVertex3f(80.0, -12.0, -50.0);	//C
	glVertex3f(80.0, -11.0, -50.0);	//D
	glEnd();

	//Atas
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(-80.0, -11.0, 60.0);		//A
	glVertex3f(-80.0, -11.0, -50.0);	//B
	glVertex3f(80.0, -11.0, -50.0);	//C
	glVertex3f(80.0, -11.0, 60.0);	//D
	glEnd();

	//Bawah
	glBegin(GL_QUADS);
	glColor3f(0.65, 0.88, 0.34);
	glVertex3f(-80.0, -12.0, 60.0);		//A
	glVertex3f(-80.0, -12.0, -50.0);	//B
	glVertex3f(80.0, -12.0, -50.0);	//C
	glVertex3f(80.0, -12.0, 60.0);	//D
	glEnd();
}

void universitas() {
	bangunanutama();
	bangunanpendamping1();
	bangunanpendamping2();
	alas();
	tanah();
}

void tampil(void) {
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	universitas();

	glPushMatrix();
	glPopMatrix();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 3.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(3.0, 0.0, 0.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -3.0);
		break;
	case 'a':
	case 'A':
		glTranslatef(-3.0, 0.0, 0.0);
		break;
	case '7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case '9':
		glTranslatef(0.0, -3.0, 0.0);
		break;
	case '2':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;
	case '8':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case '6':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case '4':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case '1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case '3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	case'5':
		if (is_depth) {
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else {
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	tampil();
}

void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0, lebar / tinggi, 5.0, 1000.0);
	glTranslatef(0.0, -5.0, -100.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Belanda (DuoPushConqu)");
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}

