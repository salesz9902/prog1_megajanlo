#include "Simple_window.h"
#include "Graph.h"

int main() {
    // smaller screen, bigger shape
    int max_width = 1000;
    int max_height = 600;
    // bigger window than my screen
    // int max_width = 2500;
    // int max_height = 5000;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 6
     Rectangle r {Point{100,100}, 2500, 3000};
    win.attach(r);



    win.wait_for_button();

}

