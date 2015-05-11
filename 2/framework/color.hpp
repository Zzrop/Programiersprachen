# ifndef BUW_COLOR_HPP
# define BUW_COLOR_HPP

struct Color
{
	double r;
	double g;
	double b;
	
	Color(double r,double g, double b) :
	r{r}, g{g}, b{b}{}
	Color(double r) :
	r{r}, g{r}, b{r}{}
	Color():
	r{0.0}, g{0.0}, b{0.0}{}

	/*Color_black(0.0) : r{0}, g{0}, b{0}{}
	Color_red(1.0,0.0,0.0) : r{1.0}, g{0}, b{9}{}
	*/

};
#endif