#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <point2d.hpp>
#define _USE_MATH_DEFINES
#include <cmath>
#include <color.hpp>
#include <circle.hpp>
#include <rectangle.hpp>
#include <iostream>


TEST_CASE("describe_point2d", "[point2d]")
{
	Point2d p{};
	REQUIRE(p.x() == 0);
	REQUIRE(p.y() == 0);

	Point2d p2{1,1};
	REQUIRE(p2.x() == 1);
	REQUIRE(p2.y() == 1);
}
TEST_CASE("describe_translate", "[translate)")
{	
	Point2d p3{};
	p3.translate(4,6);
	REQUIRE(p3.x() == 4);
	REQUIRE(p3.y() == 6);
}
TEST_CASE("describe_rotate", "[rotate]")
{
	Point2d p4{4,6};
	p4.rotate(M_PI);
	REQUIRE(p4.x() == Approx(-4.0));
	REQUIRE(p4.y() == Approx(-6.0));

	Point2d p5{1,1};
	p5.rotate(M_PI/2);
		REQUIRE(p5.x() == Approx(1));
		REQUIRE(p5.y() == Approx(-1));
}	

TEST_CASE("describe_color_red", "[color]")
{
	Color red(1.0,0.0,0.0);
	REQUIRE(red.r == Approx(1.0));
	REQUIRE(red.g == Approx(0.0));
	REQUIRE(red.b == Approx(0.0));


}
TEST_CASE("describe_color_black", "[color]")
{
	Color black(0.0);
	REQUIRE(black.r == Approx(0.0));
	REQUIRE(black.g == Approx(0.0));
	REQUIRE(black.b == Approx(0.0));


}
TEST_CASE("describe_circle", "[circle]")
{	

	Circle c1(Point2d{},2.0,Color{});
	REQUIRE(c1.x() == Approx(0.0));
	REQUIRE(c1.y() == Approx(0.0));
	REQUIRE(c1.r() == Approx(2.0));


}
TEST_CASE("describe_rectangle", "[rectangle]")
{
	Rectangle r1(Point2d{},2.0,4.0,Color{});
	REQUIRE(r1.x() == Approx(0.0));
	REQUIRE(r1.y() == Approx(0.0));
	REQUIRE(r1.a() == Approx(2.0));
	REQUIRE(r1.b() == Approx(4.0));


}
TEST_CASE("describe_circumference_rectangle", "[rectangle]")
{
	Rectangle r2(Point2d{},2.0,4.0,Color{});
	REQUIRE(r2.Circumference() == Approx(12.00));
}
TEST_CASE("describe_circumference_circle", "[circle]")
{
	Circle c2(2.0);
	REQUIRE(c2.Circumference() == Approx(12.5663706144));
}

int main(int argc, char *argv[])
{
	Point2d p2 {0.5,0.5};
    Rectangle rect(p2,2.0,4.0,0.5);
	Window win(glm::ivec2(800,800));
	while (!win.shouldClose()) {
    if (win.isKeyPressed(GLFW_KEY_ESCAPE)) {
      win.stop();
    }

   
   
    rect.draw(win);
	win.update();
	}

  return Catch::Session().run(argc, argv);
}
