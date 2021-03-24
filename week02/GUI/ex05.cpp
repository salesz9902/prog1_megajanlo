#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 1200;
    int max_height = 720;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 5

     Rectangle r {Point{200,100}, 2*max_width/3, 3*max_height/4};
    win.attach(r);
    Rectangle outofr {Point{190,90}, 2*max_width/3+30, 3*max_height/4+30};
    outofr.set_color(Color::red);
    win.attach(outofr);

    win.wait_for_button();

}

