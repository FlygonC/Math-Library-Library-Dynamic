#ifdef DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

#pragma once
#include <cmath>
#include "Vector3.h"
class Vector3;

class DLLEXPORT Matrix3 {
public:
	float values[3][3];

	Matrix3();
	Matrix3(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3);

	//create vectors of the seperate rows and colums of the matrix
	Vector3 getColumn1();
	Vector3 getColumn2();
	Vector3 getColumn3();
	Vector3 getRow1();
	Vector3 getRow2();
	Vector3 getRow3();

	//Transpose the matrix, changing its major
	void Transpose();
	//multiply a vector by the matrix
	Vector3 MultiplyVector(Vector3 &vector);

	//Math operators and equivalency
	Matrix3 operator * (Matrix3 &other);
	void operator *= (Matrix3 &other);
	void operator = (Matrix3 &other);
	bool operator == (Matrix3 &other);
	DLLEXPORT friend bool operator==(const Matrix3 &me, const Matrix3 &other);

	//Create 3x3 transformation matrices for scale, rotation and translation
	static Matrix3 CreateScaleM3(float X, float Y);
	static Matrix3 CreateRotationM3(float radians);
	static Matrix3 CreateTranslationM3(float X, float Y);
};
