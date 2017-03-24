#pragma once
#include <math.h>

const float PI = 3.14159265359f;

class Vector3
{
public:
	float X;
	float Y;
	float Z;

	Vector3(float x = 0.0f, float y = 0.0f, float z = 0.0f) : X(x), Y(y), Z(z) {}
	Vector3(float coordinates[3]) : X(coordinates[0]), Y(coordinates[1]), Z(coordinates[2]) {}

	float LengthSqr() const { return X * X + Y * Y + Z * Z; }
	float LengthSqr(const Vector3& v) const { return (*this - v).LengthSqr(); }
	float Length() const { return sqrtf(LengthSqr()); }
	float Length(const Vector3& v) const { return (*this - v).Length(); }
	Vector3 Normalize() const { float length = Length(); return Vector3(X / length, Y / length, Z / length); }
	float Angle(const Vector3& v) const { return acosf(*this * v / Length() * v.Length()); }
	float AngleDeg(const Vector3& v) const { return Angle(v) * 180 / PI; }
	Vector3 Angles() const { return Vector3(Angle(Vector3(1, 0, 0)), Angle(Vector3(0, 1, 0)), Angle(Vector3(0, 0, 1))); }
	Vector3 AnglesDeg() const { return Angles() * 180 / PI; }

	Vector3 operator-() const { return Vector3(-X, -Y, -Z); }
	operator float*() const	{ float coords[3] = { X, Y, Z }; return coords; }

	friend bool operator== (const Vector3& v1, const Vector3& v2) { return v1.X == v2.X && v1.Y == v2.Y && v1.Z == v2.Z; }
	friend bool operator!= (const Vector3& v1, const Vector3& v2) { return !(v1 == v2); }
	friend Vector3 operator+ (const Vector3& v1, const Vector3& v2) { return Vector3(v1.X + v2.X, v1.Y + v2.Y, v1.Z + v2.Z); }
	friend Vector3 operator- (const Vector3& v1, const Vector3& v2) { return Vector3(v1.X - v2.X, v1.Y - v2.Y, v1.Z - v2.Z); }
	friend Vector3 operator/ (const Vector3& v, float scalar) { return Vector3(v.X / scalar, v.Y / scalar, v.Z / scalar); }
	//dot product
	friend float operator* (const Vector3& v1, const Vector3& v2) { return (v1.X * v2.X + v1.Y * v2.Y + v1.Z * v2.Z); }
	friend Vector3 operator* (const Vector3& v, float scalar) { return Vector3(v.X * scalar, v.Y * scalar, v.Z * scalar); }
	friend Vector3 operator* (float scalar, const Vector3& v) { return v * scalar; }
	//cross product
	friend Vector3 operator% (const Vector3& v1, const Vector3& v2) { return Vector3(v1.Y * v2.Z - v1.Z * v2.Y, v1.Z * v2.X - v1.X * v2.Z, v1.X * v2.Y - v1.Y * v2.X); }
};