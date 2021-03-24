#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 600;
    int max_height = 400;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 1
    Rectangle r {Point{200,200}, 100, 50};
    r.set_color(Color::blue);

    Polygon poly;

    poly.add(Point{300,300});
    poly.add(Point{350,400}); 
    poly.add(Point{450,350});
    poly.add(Point{400,300});

    poly.set_color(Color::red);


    win.attach(r);
    win.attach(poly);

    win.wait_for_button();

}

