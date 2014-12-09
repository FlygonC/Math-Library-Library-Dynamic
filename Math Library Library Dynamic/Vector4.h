#ifdef DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

#pragma once
#include <cmath>

class DLLEXPORT Vector4 {
public:
	float x, y, z, a;

	Vector4();
	Vector4(float fx, float fy, float fz, float fa);
	//construct a vector from hexadecimal value
	Vector4(unsigned int hex);

	//returns the magnitude of this vector
	float getMagnitude();
	//return the unit vector of this vector
	Vector4 getUnitVector();
	//normalizes this vector making it into a unitvector
	void Normalise();
	//returns the dot product of this and another vector
	float dotProduct(Vector4 &other);

	//equivalency
	DLLEXPORT friend bool operator==(const Vector4 &me, const Vector4 &other);
};