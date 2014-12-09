#ifdef DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

#pragma once
#include <cmath>

class DLLEXPORT Vector3 {
public:
	float x, y, z;

	Vector3();
	Vector3(float fx, float fy, float fz);

	//returns the magnitude of the vector
	float getMagnitude();
	//returns the unit vector of this vector
	Vector3 getUnitVector();
	//normalizes this vector making it into a Unit vector
	void Normalize();
	//returns the dot product of this and another vector
	float dotProduct(Vector3 &other);
	//returns the cross product of this and another vector
	Vector3 crossProduct(Vector3 &other);
	//Returns a vector T distance between this and another vector
	Vector3 Interpolate(Vector3 &other, float T);

	//math operators and equivalency
	Vector3 operator * (float &scalar);
	void operator *= (float &scalar);
	Vector3 operator / (float &scalar);
	void operator /= (float &scalar);
	Vector3 operator * (Vector3 &other);
	void operator *= (Vector3 &other);
	Vector3 operator / (Vector3 &other);
	void operator /= (Vector3 &other);
	Vector3 operator + (Vector3 &other);
	void operator += (Vector3 &other);
	Vector3 operator - (Vector3 &other);
	void operator -= (Vector3 &other);
	void operator = (Vector3 &other);
	bool operator == (Vector3 &other);
	DLLEXPORT friend bool operator==(const Vector3 &me, const Vector3 &other);
};