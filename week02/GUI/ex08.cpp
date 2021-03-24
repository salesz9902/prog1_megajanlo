#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 1280;
    int max_height = 720;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 8

    Circle topfirst(Point{100,100}, 50);
    topfirst.set_color(Color::blue);
    topfirst.set_style(Line_style(Line_style::solid, 3));
    Circle topsecond(Point{210,100}, 50);
    topsecond.set_color(Color::black);
    topsecond.set_style(Line_style(Line_style::solid, 3));
    Circle topthird(Point{320,100}, 50);
    topthird.set_color(Color::red);
    topthird.set_style(Line_style(Line_style::solid, 3));

    Circle bottomfirst(Point{155,150}, 50);
    bottomfirst.set_color(Color::yellow);
    bottomfirst.set_style(Line_style(Line_style::solid, 3));
    Circle bottomsecond(Point{265,150}, 50);
    bottomsecond.set_color(Color::green);
    bottomsecond.set_style(Line_style(Line_style::solid, 3));
    
    win.attach(topfirst);
    win.attach(topsecond);
    win.attach(topthird);
    win.attach(bottomfirst);
    win.attach(bottomsecond);



    win.wait_for_button();

}

