#ifndef Matrix2D_inl_h
#define Matrix2D_inl_h

Matrix2D::Matrix2D(float r0c0, float r0c1, float r1c0, float r1c1) :
    r0c0(r0c0), r0c1(r0c1), r1c0(r1c0), r1c1(r1c1)
{

}

Vector2D operator*(const Matrix2D& matrix, const Vector2D& vector)
{
    return Vector2D(
       matrix.r0c0 * vector.x + matrix.r0c1 * vector.y,
       matrix.r1c0 * vector.x + matrix.r1c1 * vector.y
    );
}

Matrix2D Matrix2D::rotate(float angleInRadians)
{
    float cosResult = cosf(angleInRadians);
    float sinResult = sinf(angleInRadians);
    return Matrix2D(
        cosResult, -sinResult,
        sinResult, cosResult
    );
}


#endif /* Matrix2D_inl_h */
