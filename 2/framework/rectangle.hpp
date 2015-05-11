# ifndef BUW_RECTANGLE_HPP
# define BUW_RECTANGLE_HPP
#include <point2d.hpp>
#include <color.hpp>
#include <window.hpp>

class Rectangle
{
public:
	Rectangle(Point2d const& m, double a, double b);
	Rectangle(Point2d const& m, double a, double b, Color const& c);
	~Rectangle();

	void draw (Window const&);
	double x()const;
	double y()const;
	double a()const;
	double b()const;
	double Circumference()const;
private:
	Color color_;
	Point2d mid_;
	double a_;
	double b_;
};

#endif