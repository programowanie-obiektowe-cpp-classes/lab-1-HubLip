class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D() : x(0), y(0) {}

    Wektor2D (double xVal, double yVal) : x(xVal), y(yVal) {}

    void setX (double xVal)
    {
        x = xVal;
    }

    void setY (double yVal)
    {
        y = yVal;
    }

    double getX ()
    {
        return x;
    }

    double getY ()
    {
        return y;
    }

    Wektor2D operator+ (Wektor2D& A)
    {
        return Wektor2D(x + A.x, y + A.y);
    }

    double operator* (Wektor2D& A)
    {
        return x * A.x + y * A.y;
    }

};
