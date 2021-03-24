#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 1280;
    int max_height = 720;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 8

    Image img {Point{100,100}, "badge.jpg"};

    Text title {Point{120,120}, "Badge"};

    win.attach(img);
    win.set_label("just a badge");
    win.attach(title);



    win.wait_for_button();

}

