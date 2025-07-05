#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point * result = new Point;
    result->xpos = p1.xpos + p2.xpos;
    result->ypos = p1.ypos + p2.ypos;
    return *result;
}

int main(void)
{
    Point * p1 = new Point;
    p1->xpos = 5;
    p1->ypos = 5;

    Point * p2 = new Point;
    p2->xpos = 10;
    p2->ypos = 10;

    Point &result = PntAdder(*p1, *p2);

    std::cout << "x: " << result.xpos << ", y: " << result.ypos << std::endl;
    return 0;
}