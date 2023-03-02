#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    
    Point(): x(0), y(0) {} // Default Constructor
    Point(int x, int y): x(x), y(y) {} // Parameterized Constructor.
    Point operator + (const Point &point) {
        Point res;
        res.x = this->x + point.x;
        res.y = this->y + point.y;
        return res;
    }
    
    friend ostream& operator<<(ostream &s, const Point &point) {
        return s << "(" << point.x << ", " << point.y << ")";
    }

    void print() {
        cout << "result adding x points: "  << x << endl << "result adding y points: " << y << endl;
    }  

};
 


 
int main()
{
    Point point(1, 2), point2(2, 3);
    cout << point << endl;
    // Point p3 = point + point2;
    // p3.print();
    
    return 0;
}