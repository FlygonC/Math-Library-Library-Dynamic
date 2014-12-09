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
	Vector4(unsigned int hex);

	float getMagnitude();
	Vector4 getUnitVector();
	void Normalise();
	float dotProduct(Vector4 &other);

	friend bool operator==(const Vector4 &me, const Vector4 &other);
};