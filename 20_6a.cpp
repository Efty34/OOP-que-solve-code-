#include <iostream>
#include <cmath>

using namespace std;

class Point2D {
protected:
    float a, b;
    
public:
    Point2D(float x = 0.0, float y = 0.0) : a(x), b(y) {}

    virtual void cal_dis_distance(Point2D &point2) {
        float distance = sqrt(pow((point2.a - a), 2) + pow((point2.b - b), 2));
        cout << "Distance between (" << a << ", " << b << ") and (" << point2.a << ", " << point2.b << ") = " << distance << endl;
    }
};

class Point3D : public Point2D {
    float c;
    
public:
    Point3D(float x = 0.0, float y = 0.0, float z = 0.0) : Point2D(x, y), c(z) {}

    void cal_dis_distance(Point3D &point2) {
        //Point2D::cal_dis_distance(Point2D point2);
        float distance = sqrt(pow((point2.a - a), 2) + pow((point2.b - b), 2) + pow((point2.c - c), 2));
        cout << "Distance between (" << a << ", " << b << ", " << c << ") and (" << point2.a << ", " << point2.b << ", " << point2.c << ") = " << distance << endl;
    }
};

int main() {
    Point2D point2D_1(1.0, 2.0);
    Point2D point2D_2(3.0, 4.0);

    Point3D point3D_1(1.0, 2.0, 3.0);
    Point3D point3D_2(4.0, 5.0, 6.0);

    Point2D* basePtr1 = &point2D_1;
    Point2D* basePtr2 = &point2D_2;

    Point3D* derivedPtr1 = &point3D_1;
    Point3D* derivedPtr2 = &point3D_2;

    basePtr1->cal_dis_distance(*basePtr2);
    derivedPtr1->cal_dis_distance(*derivedPtr2);

   

    return 0;
}
