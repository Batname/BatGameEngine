#ifndef Matrix3D_inl_h
#define Matrix3D_inl_h

#include "Vector3D.h"

Matrix3D::Matrix3D(
   float r0c0, float r0c1, float r0c2,
   float r1c0, float r1c1, float r1c2,
   float r2c0, float r2c1, float r2c2
) :
    r0c0(r0c0), r0c1(r0c1), r0c2(r0c2),
    r1c0(r1c0), r1c1(r1c1), r1c2(r1c2),
    r2c0(r2c0), r2c1(r2c1), r2c2(r2c2)
{
}


Vector3D operator*(const Matrix3D& matrix, const Math::Vector3D& vector)
{
    return Vector3D(
        matrix.r0c0 * vector.x + matrix.r0c1 * vector.y + matrix.r0c2 * vector.z,
        matrix.r1c0 * vector.x + matrix.r1c1 * vector.y + matrix.r1c2 * vector.z,
        matrix.r2c0 * vector.x + matrix.r2c1 * vector.y + matrix.r2c2 * vector.z
    );
}

Matrix3D Matrix3D::rotateZ(float angleInRadians)
{
    float cosResult = cosf(angleInRadians);
    float sinResult = sinf(angleInRadians);
    return Matrix3D(
        cosResult, -sinResult, 0.0f,
        sinResult, cosResult,  0.0f,
        0.0f,       0.0f,      1.0f
    );
}

#endif /* Matrix3D_inl_h */
