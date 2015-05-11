# ifndef BUW_CIRCLE_HPP
# define BUW_CIRCLE_HPP
#define _USE_MATH_DEFINES
#include <cmath>
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

class Circle
{
public:
	Circle(Point2d const& m, double r);
	Circle(Point2d const& m, double r,Color const& c);

	Circle(double r);
	~Circle();
	
	void draw (Window const&);
	double x()const;
	double y()const;
	double r()const;
	double Circumference()const;
private:
	Point2d mid_;
	Color color_;
	double r_;

};

#endif