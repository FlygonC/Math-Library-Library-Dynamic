#ifdef DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

#pragma once
#include <cmath>

class DLLEXPORT Vector2 {
public:
	float x, y;

	Vector2();
	Vector2(float fx, float fy);

	//returns the magnitude of the vector
	float getMagnitude();
	//returns the unit vector of this vector
	Vector2 getUnitVector();
	//normalizes this vector making it into a Unit vector
	void Normalize();
	//returns the dot product of this and another vector
	float dotProduct(Vector2 &other);
	//Finds the angle between this vector and another
	float angle(Vector2 &other);
	//Returns a vector T distance between this and another vector
	Vector2 Interpolate(Vector2 &other, float T);

	//Math operators equivalency
	Vector2 operator * (float &scalar);
	void operator *= (float &scalar);
	Vector2 operator / (float &scalar);
	void operator /= (float &scalar);
	Vector2 operator * (Vector2 &other);
	void operator *= (Vector2 &other);
	Vector2 operator / (Vector2 &other);
	void operator /= (Vector2 &other);
	Vector2 operator + (Vector2 &other);
	void operator += (Vector2 &other);
	Vector2 operator - (Vector2 &other);
	void operator -= (Vector2 &other);
	void operator = (Vector2 &other);
	bool operator == (Vector2 &other);
	DLLEXPORT friend bool operator==(const Vector2 &me, const Vector2 &other);
};