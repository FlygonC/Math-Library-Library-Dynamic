#pragma once
#include "Vector4.h"

Vector4::Vector4() {}

Vector4::Vector4(float fx, float fy, float fz, float fa) {
	x = fx;
	y = fy;
	z = fz;
	a = fa;
}

Vector4::Vector4(unsigned int hex) {
	x = (hex & 0xff000000) >> 24;
	y = (hex & 0x00ff0000) >> 16;
	z = (hex & 0x0000ff00) >> 8;
	a = (hex & 0x000000ff) >> 0;
}

float Vector4::getMagnitude() {
	return (sqrtf((x*x) + (y*y) + (z*z) + (a*a)));
}
Vector4 Vector4::getUnitVector() {
	Vector4 temp;
	float tempMag = getMagnitude();
	temp.x = x / tempMag;
	temp.y = y / tempMag;
	temp.z = z / tempMag;
	temp.a = a / tempMag;
	return temp;
}
void Vector4::Normalise() {
	float tempMag = getMagnitude();
	x = x / tempMag;
	y = y / tempMag;
	z = z / tempMag;
	a = a / tempMag;
}
float Vector4::dotProduct(Vector4 &other) {
	return (x*other.x) + (y*other.y) + (z*other.z) + (a*other.a);
}
bool operator==(const Vector4 &me, const Vector4 &other) {
	if (me.x != other.x || me.y != other.y || me.z != other.z || me.a != other.a) {
		return false;
	}
	else {
		return true;
	}
}
