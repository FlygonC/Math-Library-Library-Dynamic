#ifdef DLL_BUILD
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllimport)
#endif

const double Pi = 3.14159265359;

template<typename A>
A static Sum(A a, A b) {
	return a + b;
}

template<typename A>
A static Difference(A a, A b) {
	return a - b;
}

template<typename A>
A static Product(A a, A b) {
	return a * b;
}

template<typename A>
A static Quotient(A a, A b) {
	return a / b;
}

//Radians and Degrees -----------------------------
//Convert radian float to degrees
float static radianToDegree(float radian) {
	return (radian * 180) / Pi;
}
//convert dergees to radians
float static degreeToRadian(float degree) {
	return (degree * Pi) / 180;
}

// Interpolate
float static InterpolateScalar(float A, float B, float T) {
	return A + T * (B - A);
}
// Finds the nearest power of two to the input number
float static testPower2(float number) {
	if (1 >= number) {
		return 1;
	}
	int i = 1;
	while (true) {
		i = i * 2;
		if (i >= number) {
			return i;
		}
	}
}