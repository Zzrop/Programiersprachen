#define _USE_MATH_DEFINES
#include <cmath>
#include <circle.hpp>
#include <color.hpp>
#include <window.hpp>
#include <point2d.hpp>

Circle::Circle(Point2d const& m, double r, Color const& c) :
	mid_{m}, r_{r}, color_{c}{}

Circle::Circle(double r) :
	mid_{}, r_{r}, color_{0.0}{} 

Circle::~Circle(){}

	void Circle::draw(Window const& win)
	{
		

		Point2d p1(mid_.x(), mid_.y()+r_);
		Point2d p2(mid_.x(), mid_.y()+r_);
		p2.translate(mid_.x()*r_*cos(1), mid_.y()*r_*sin(1));

			for (int i = 2; i < 360; ++i)
			{	
			win.drawLine(p1.x(), p1.y(),p2.x(),p2.y(),color_.r, color_.g, color_.b);
			/*p2.rotate(2*M_PI/steps);
			p1.rotate(2*M_PI/steps);*/
			p1.translate(mid_.x()*r_*cos(i), mid_.y()*r_*sin(i));
			p2.translate(mid_.x()*r_*cos(i), mid_.y()*r_*sin(i));
			}
			
	}
	double Circle::x()const
	{
		return mid_.x();
	}
	double Circle::y()const
	{
		return mid_.y();
	}
	double Circle::r()const
	{
		return r_;
	}
	double Circle::Circumference()const
	{
		return 2*M_PI*r_;
	}