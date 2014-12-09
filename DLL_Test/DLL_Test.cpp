// DLL_Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>

#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include "Basic Functions.h"

// This header file defines the public API for Google Test.
//It should be included by any test program that uses Google Test.
#include "gtest/gtest.h"



TEST(Vector2, testEquivalency) {
//	Vector2 testa = Vector2(2, 2);
	//Vector2 testa;
	//Vector2 testb = Vector2(2, 2);
	//Vector2 testc = Vector2(3, 3);
	//EXPECT_TRUE(operator==(testa, testb));
	//EXPECT_FALSE(operator==(testa, testc));
}
//TEST(Vector2, testAddition) {
//	Vector2 testa = Vector2(2, 2);
//	Vector2 testb = Vector2(2, 2);
//	Vector2 testc = Vector2(4, 4);
//	EXPECT_EQ(testc, (testa + testb));
//}
//TEST(Vector2, testSubtraction) {
//	Vector2 testa = Vector2(2, 2);
//	Vector2 testb = Vector2(2, 2);
//	Vector2 testc = Vector2(0, 0);
//	EXPECT_EQ(testc, (testa - testb));
//}
//TEST(Vector2, testMultiplication) {
//	Vector2 testa = Vector2(2, 3);
//	Vector2 testb = Vector2(2, 2);
//	Vector2 testc = Vector2(4, 6);
//	EXPECT_EQ(testc, (testa * testb));
//}
//TEST(Vector2, testDivision) {
//	Vector2 testa = Vector2(2, 2);
//	Vector2 testb = Vector2(2, 2);
//	Vector2 testc = Vector2(1, 1);
//	EXPECT_EQ(testc, (testa / testb));
//}
//TEST(Vector2, testMagnitude) {
//	Vector2 testa = Vector2(5, 0);
//	EXPECT_EQ(5, testa.getMagnitude());
//}
//TEST(Vector2, testUnitvector) {
//	Vector2 testa = Vector2(5, 0);
//	Vector2 testb = Vector2(1, 0);
//	EXPECT_EQ(testb, testa.getUnitVector());
//}
//TEST(Vector2, testDotproduct) {
//	Vector2 testa = Vector2(2, 2);
//	Vector2 testb = Vector2(2, 2);
//	EXPECT_EQ(8, testa.dotProduct(testb));
//}
//TEST(Vector2, testAngle) {
//	Vector2 testa = Vector2(2, 0);
//	Vector2 testb = Vector2(0, 2);
//	EXPECT_NEAR(1.5708, testa.angle(testb), 0.00001);
//}
//TEST(Vector2, testInterpolate) {
//	Vector2 testa = Vector2(1, 1);
//	Vector2 testb = Vector2(3, 3);
//	Vector2 testc = Vector2(2, 2);
//	EXPECT_EQ(testc, testa.Interpolate(testb, 0.5));
//}
//
//TEST(Vector3, testEquivalency) {
//	Vector3 testa = Vector3(2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	Vector3 testc = Vector3(3, 3, 3);
//	EXPECT_TRUE(operator==(testa, testb));
//	EXPECT_FALSE(operator==(testa, testc));
//}
//TEST(Vector3, testAddition) {
//	Vector3 testa = Vector3(2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	Vector3 testc = Vector3(4, 4, 4);
//	EXPECT_EQ(testc, testa + testb);
//}
//TEST(Vector3, testSubtraction) {
//	Vector3 testa = Vector3(2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	Vector3 testc = Vector3(0, 0, 0);
//	EXPECT_EQ(testc, testa - testb);
//}
//TEST(Vector3, testMultiplication) {
//	Vector3 testa = Vector3(2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	Vector3 testc = Vector3(4, 4, 4);
//	EXPECT_EQ(testc, testa * testb);
//}
//TEST(Vector3, testDivision) {
//	Vector3 testa = Vector3(2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	Vector3 testc = Vector3(1, 1, 1);
//	EXPECT_EQ(testc, testa / testb);
//}
//TEST(Vector3, testMagnitude) {
//	Vector3 testa = Vector3(5, 0, 0);
//	EXPECT_EQ(5, testa.getMagnitude());
//}
//TEST(Vector3, testUnitvector) {
//	Vector3 testa = Vector3(5, 0, 0);
//	Vector3 testb = Vector3(1, 0, 0);
//	EXPECT_EQ(testb, testa.getUnitVector());
//}
//TEST(Vector3, testDotproduct) {
//	Vector3 testa = Vector3(2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	EXPECT_EQ(12, testa.dotProduct(testb));
//}
//TEST(Vector3, testCrossproduct) {
//	Vector3 testa = Vector3(1, 2, 3);
//	Vector3 testb = Vector3(3, 4, 5);
//	Vector3 testc = Vector3(-2, 4, -2);
//	EXPECT_EQ(testc, testa.crossProduct(testb));
//}
//TEST(Vector3, testInterpolate) {
//	Vector3 testa = Vector3(1, 1, 1);
//	Vector3 testb = Vector3(3, 3, 3);
//	Vector3 testc = Vector3(2, 2, 2);
//	EXPECT_EQ(testc, testa.Interpolate(testb, 0.5));
//}
//
//TEST(Vector4, testEquivalency) {
//	Vector4 testa = Vector4(2, 2, 2, 2);
//	Vector4 testb = Vector4(2, 2, 2, 2);
//	Vector4 testc = Vector4(3, 3, 3, 3);
//	EXPECT_TRUE(operator==(testa, testb));
//	EXPECT_FALSE(operator==(testa, testc));
//}
//TEST(Vector4, testMagnitude) {
//	Vector4 testa = Vector4(5, 0, 0, 0);
//	EXPECT_EQ(5, testa.getMagnitude());
//}
//TEST(Vector4, testUnitvector) {
//	Vector4 testa = Vector4(5, 0, 0, 0);
//	Vector4 testb = Vector4(1, 0, 0, 0);
//	EXPECT_EQ(testb, testa.getUnitVector());
//}
//TEST(Vector4, testDotproduct) {
//	Vector4 testa = Vector4(2, 2, 2, 2);
//	Vector4 testb = Vector4(2, 2, 2, 2);
//	EXPECT_EQ(16, testa.dotProduct(testb));
//}
//
//TEST(Matrix3, testEquality) {
//	Matrix3 testa = Matrix3(2, 2, 2, 2, 2, 2, 2, 2, 2);
//	Matrix3 testb = Matrix3(2, 2, 2, 2, 2, 2, 2, 2, 2);
//	EXPECT_TRUE(testa == testb);
//}
//TEST(Matrix3, testMultiplication) {
//	Matrix3 testa = Matrix3(1, 2, 3, 3, 2, 1, 2, 1, 3);
//	Matrix3 testb = Matrix3(4, 5, 6, 6, 5, 4, 4, 6, 5);
//	Matrix3 testc = Matrix3(28, 33, 29, 28, 31, 31, 26, 33, 31);
//	EXPECT_EQ(testc, testa*testb);
//}
//TEST(Matrix3, testMultiplicationVector) {
//	Matrix3 testa = Matrix3(2, 2, 2, 2, 2, 2, 2, 2, 2);
//	Vector3 testb = Vector3(2, 2, 2);
//	Vector3 testc = Vector3(12, 12, 12);
//	EXPECT_EQ(testc, testa.MultiplyVector(testb));
//}
//TEST(Matrix3, testScale) {
//	Matrix3 testa = Matrix3(2, 0, 0, 0, 2, 0, 0, 0, 1);
//	Matrix3 testc = Matrix3();
//	testc = testc.CreateScaleM3(2, 2);
//	EXPECT_EQ(testa, testc);
//}
//TEST(Matrix3, testTranslation) {
//	Matrix3 testa = Matrix3(1, 0, 2, 0, 1, 2, 0, 0, 1);
//	Matrix3 testc = Matrix3();
//	testc = testc.CreateTranslationM3(2, 2);
//	EXPECT_EQ(testa, testc);
//}
//
//
//TEST(Matrix4, testEquality) {
//	Matrix4 testa = Matrix4(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
//	Matrix4 testb = Matrix4(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
//	EXPECT_TRUE(testa == testb);
//}
//TEST(Matrix4, testMultiply) {
//	Matrix4 testa = Matrix4(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
//	Matrix4 testb = Matrix4(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
//	Matrix4 testc = Matrix4(16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16);
//	EXPECT_EQ(testc, testa*testb);
//}
//TEST(Matrix4, testMultiplicationVector) {
//	Matrix4 testa = Matrix4(2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2);
//	Vector4 testb = Vector4(2, 2, 2, 2);
//	Vector4 testc = Vector4(16, 16, 16, 16);
//	EXPECT_EQ(testc, testa.MultiplyVector(testb));
//}
//TEST(Matrix4, testScale) {
//	Matrix4 testa = Matrix4(2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1);
//	Matrix4 testc = Matrix4();
//	testc = testc.CreateScaleM4(2, 2, 2);
//	EXPECT_EQ(testa, testc);
//}
//TEST(Matrix4, testTranslation) {
//	Matrix4 testa = Matrix4(1, 0, 0, 2, 0, 1, 0, 2, 0, 0, 1, 2, 0, 0, 0, 1);
//	Matrix4 testc = Matrix4();
//	testc = testc.CreateTranslationM4(2, 2, 2);
//	EXPECT_EQ(testa, testc);
//}
//TEST(Matrix4, testOrthographic) {
//	Matrix4 testa = Matrix4(-1, 0, 0, 1, 0, 1, 0, -1, 0, 0, 1, -1, 0, 0, 0, 1);
//	Matrix4 testc = Matrix4();
//	testc = testc.CreateOrthographicProjection(2, 0, 2, 0, 2, 0);
//	EXPECT_EQ(testa, testc);
//}
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	/*The method is initializes the Google framework and must be called before RUN_ALL_TESTS */
//	::testing::InitGoogleTest(&argc, argv);
//
//	/*RUN_ALL_TESTS automatically detects and runs all the tests defined using the TEST macro.
//	It's must be called only once in the code because multiple calls lead to conflicts and,
//	therefore, are not supported.
//	*/
//	int final = RUN_ALL_TESTS();
//	system("pause");
//
//	return final;
//}
//
