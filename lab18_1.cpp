#include <iostream>
#include <cmath>
using namespace std;

struct Rect
{
	double x, y, w, h;
};

double overlap(Rect r1, Rect r2)
{
	double width = max(0.0, min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x));
	double height = max(0.0, min(r1.y, r2.y) - max(r1.y - r1.h, r2.y - r2.h));
	return width * height;
}