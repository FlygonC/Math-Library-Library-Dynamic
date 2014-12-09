#ifdef DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

#pragma once
#include <cmath>
#include "Vector4.h"
class Vector4;

class DLLEXPORT Matrix4 {
public:
	float values[4][4];

	Matrix4();
	Matrix4(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float z1, float z2, float z3, float z4, float a1, float a2, float a3, float a4);

	//create vectors from the seperate rows and colums of the matrix
	Vector4 getColumn1();
	Vector4 getColumn2();
	Vector4 getColumn3();
	Vector4 getColumn4();
	Vector4 getRow1();
	Vector4 getRow2();
	Vector4 getRow3();
	Vector4 getRow4();

	//Transpose the matrix, changing its major
	void Transpose();
	//multiply a vector by the matrix
	Vector4 MultiplyVector(Vector4 &vector);

	//Math operators and equivalency
	Matrix4 operator * (Matrix4 &other);
	void operator *= (Matrix4 &other);
	void operator = (Matrix4 &other);
	bool operator == (Matrix4 &other);
	DLLEXPORT friend bool operator==(const Matrix4 &me, const Matrix4 &other);

	//Create 4x4 transformation matrices for scale, rotation on all axis and translation
	static Matrix4 CreateScaleM4(float X, float Y, float Z);
	static Matrix4 CreateXRotationM4(float Xradians);
	static Matrix4 CreateYRotationM4(float Yradians);
	static Matrix4 CreateZRotationM4(float Zradians);
	static Matrix4 CreateTranslationM4(float X, float Y, float Z);
	//Create a matrice for Orthographic projection
	static Matrix4 CreateOrthographicProjection(float left, float right, float top, float bottom, float near, float far);
};