#ifndef Vector3D_inl_h
#define Vector3D_inl_h

Vector3D Vector3D::operator+=(const Vector3D& right)
{
    x += right.x;
    y += right.y;
    z += right.z;
    
    return * this;
}

Vector3D Vector3D::operator-=(const Vector3D& right)
{
    x -= right.x;
    y -= right.y;
    z -= right.z;
    
    return * this;
}

Vector3D operator*(float scalar, const Vector3D& right)
{
    return Vector3D(right.x * scalar, right.y * scalar, right.z * scalar);
}

Vector3D operator*(const Vector3D& right, float scalar)
{
    return scalar * right;
}

Vector3D operator+(const Vector3D& left, const Vector3D& right)
{
    return Vector3D(left.x + right.x, left.y + right.y, left.z + right.z);
}

#endif /* Vector3D_inl_h */
