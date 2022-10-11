#include "C:/MinGW/include/GUI/Graph.h"
#include "C:/MinGW/include/GUI/Simple_window.h"
#include "C:/MinGW/include/GUI/GUI.h"


// 12.7.2 An almost blank window
/*
int main()
try
{

	using namespace Graph_lib;
	Point tl(0,0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.3 Axis
/*
int main()
try
{

	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.4 Graphin a function
/*
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.5 Polygons
/*
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	Graph_lib::Polygon poly;
	poly.add(Point(300, 200));
	poly.add(Point(350, 100));
	poly.add(Point(400, 200));
	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/ 

// 12.7.6 Rectangles
/*
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	Graph_lib::Polygon poly;
	poly.add(Point(300, 200));
	poly.add(Point(350, 100));
	poly.add(Point(400, 200));
	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");
	
	Graph_lib::Rectangle r(Point(200, 200), 100, 50);	// top left corner width, height
	r.set_color(Color::dark_magenta);
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point(100, 50));
	poly_rect.add(Point(200, 50));
	poly_rect.add(Point(200, 100));
	poly_rect.add(Point(100, 100));
	poly_rect.add(Point(50, 75));
	poly_rect.set_color(Color::dark_cyan);
	win.attach(poly_rect);
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.7 Fill
/*
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	Graph_lib::Polygon poly;
	poly.add(Point(300, 200));
	poly.add(Point(350, 100));
	poly.add(Point(400, 200));
	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");

	Graph_lib::Rectangle r(Point(200, 200), 100, 50);	// top left corner width, height
	r.set_color(Color::dark_magenta);
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point(100, 50));
	poly_rect.add(Point(200, 50));
	poly_rect.add(Point(200, 100));
	poly_rect.add(Point(100, 100));
	poly_rect.add(Point(50, 75));
	poly_rect.set_color(Color::dark_cyan);
	win.attach(poly_rect);
	r.set_fill_color(Color::yellow);			// color the inside of the rectangel
	poly.set_style(Line_style(Line_style::dash, 4));
	poly_rect.set_style(Line_style(Line_style::dash, 2));
	win.set_label("Canvas #7");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.8
/*
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	Graph_lib::Polygon poly;
	poly.add(Point(300, 200));
	poly.add(Point(350, 100));
	poly.add(Point(400, 200));
	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");

	Graph_lib::Rectangle r(Point(200, 200), 100, 50);	// top left corner width, height
	r.set_color(Color::dark_magenta);
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point(100, 50));
	poly_rect.add(Point(200, 50));
	poly_rect.add(Point(200, 100));
	poly_rect.add(Point(100, 100));
	poly_rect.add(Point(50, 75));
	poly_rect.set_color(Color::dark_cyan);
	win.attach(poly_rect);
	r.set_fill_color(Color::yellow);			// color the inside of the rectangel
	poly.set_style(Line_style(Line_style::dash, 4));
	poly_rect.set_style(Line_style(Line_style::dash, 2));
	win.set_label("Canvas #7");
	Text t(Point(150, 150), "Hello, graphical world! ");
	t.set_color(Color::black);
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.set_label("Canvas #9");
	win.attach(t);
	win.set_label("Canvas #8");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.9 Images
/*
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	Graph_lib::Polygon poly;
	poly.add(Point(300, 200));
	poly.add(Point(350, 100));
	poly.add(Point(400, 200));
	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");

	Graph_lib::Rectangle r(Point(200, 200), 100, 50);	// top left corner width, height
	r.set_color(Color::dark_magenta);
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point(100, 50));
	poly_rect.add(Point(200, 50));
	poly_rect.add(Point(200, 100));
	poly_rect.add(Point(100, 100));
	poly_rect.add(Point(50, 75));
	poly_rect.set_color(Color::dark_cyan);
	win.attach(poly_rect);
	r.set_fill_color(Color::yellow);			// color the inside of the rectangel
	poly.set_style(Line_style(Line_style::dash, 4));
	poly_rect.set_style(Line_style(Line_style::dash, 2));
	win.set_label("Canvas #7");
	Text t(Point(150, 150), "Hello, graphical world! ");
	t.set_color(Color::black);
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.set_label("Canvas #9");
	win.attach(t);
	win.set_label("Canvas #8");
	Image ii(Point(100, 50), "water.jpg");
	win.attach(ii);
	win.set_label("Canvas #10");
	ii.move(100, 200);
	win.set_label("Canvas 11");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
*/

// 12.7.10 And much more
int main()
try
{
	using namespace Graph_lib;
	Point tl(0, 0);								// top left corner
	Simple_window win(tl, 600, 400, "Canvas");
	// screen coordinate tl for top left corner
	// window size(600*400)
	// title: Canvas
	Axis xa(Axis::x, Point(20, 300), 280, 10, "x axis");	// make an Axis
	// an Axis is a kind of Shape
	// Axis::x means horizontal
	// starting at (20,300)
	// 280 pixels long
	// 10 "notches"
	// label the axis "x axis"
	xa.set_color(Color::black);
	win.attach(xa);						// attach xa to the window, win
	win.set_label("Canvas #2");				// relabel the window

	Axis ya(Axis::y, Point(20, 300), 280, 10, "y axis");	// make an Axis
	ya.set_color(Color::black);
	win.attach(ya);						// attach xa to the window, win
	win.set_label("Canvas #3");				// relabel the window

	Graph_lib::Function sine(sin, 0, 28, Point(20, 150), 1000, 10, 10);
	sine.set_color(Color::blue);
	win.attach(sine);
	win.set_label("Canvas #4");
	Graph_lib::Polygon poly;
	poly.add(Point(300, 200));
	poly.add(Point(350, 100));
	poly.add(Point(400, 200));
	poly.set_color(Color::green);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");

	Graph_lib::Rectangle r(Point(200, 200), 100, 50);	// top left corner width, height
	r.set_color(Color::dark_magenta);
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point(100, 50));
	poly_rect.add(Point(200, 50));
	poly_rect.add(Point(200, 100));
	poly_rect.add(Point(100, 100));
	poly_rect.add(Point(50, 75));
	poly_rect.set_color(Color::dark_cyan);
	win.attach(poly_rect);
	r.set_fill_color(Color::yellow);			// color the inside of the rectangel
	poly.set_style(Line_style(Line_style::dash, 4));
	poly_rect.set_style(Line_style(Line_style::dash, 2));
	win.set_label("Canvas #7");
	Text t(Point(150, 150), "Hello, graphical world! ");
	t.set_color(Color::black);
	t.set_font(Font::times_bold);
	t.set_font_size(20);
	win.set_label("Canvas #9");
	win.attach(t);
	win.set_label("Canvas #8");
	Image ii(Point(100, 50), "water.jpg");
	win.attach(ii);
	win.set_label("Canvas #10");
	ii.move(100, 200);
	win.set_label("Canvas 11");
	Circle c(Point(100, 200), 50);
	Graph_lib::Ellipse e(Point(100, 200), 50, 25);
	e.set_color(Color::dark_red);
	Mark m(Point(100, 200), 'x');

	ostringstream oss;
	oss << "screen size: " << x_max() << "*" << y_max()
		<< "; window size: " << win.x_max() << "*" << win.y_max();
	Text sizes(Point(100, 20), oss.str());
	sizes.set_color(Color::black);
	
	Image cal(Point(225, 225), "matrix.gif");
	cal.set_mask(Point(40, 40), 200, 150);

	c.set_color(Color::magenta);
	win.attach(c);
	win.attach(e);
	win.attach(m);

	win.attach(sizes);
	win.attach(cal);
	win.set_label("Canvas #14");
	win.wait_for_button();							// display!
}
catch (exception& e) {
	// some error reporting
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	// some more error reporting
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
