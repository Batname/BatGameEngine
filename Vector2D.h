#ifndef Vector2D_h
#define Vector2D_h

namespace Math {
    
    struct Vector2D
    {
        float x;
        float y;
        Vector2D(float x, float y) : x(x), y(y) {}
    };

    Vector2D operator+(const Vector2D& left, const Vector2D& right)
    {
        return Vector2D(left.x + right.x, left.y + right.y);
    }
    
    Vector2D operator*(float scalar, const Vector2D& vector)
    {
        return Vector2D(scalar * vector.x, scalar * vector.y);
    }

    Vector2D operator*(const Vector2D& vector, float scalar)
    {
        return Vector2D(vector.x * scalar, vector.y * scalar);
    }
    
}

#endif /* Vector2D_h */
