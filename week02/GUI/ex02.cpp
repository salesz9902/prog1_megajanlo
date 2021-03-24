#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 600;
    int max_height = 400;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 2
    Rectangle r {Point{100,30}, 100, 50};
    r.set_color(Color::blue);

    Text t {Point{120,70}, "Howdy!"};

    win.attach(r);
    win.attach(t);

    win.wait_for_button();

}

