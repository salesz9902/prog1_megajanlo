#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 1280;
    int max_height = 720;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 7

    Polygon housetop;
    housetop.add(Point{100,100});
    housetop.add(Point{500,100});
    housetop.add(Point{300,0});
    housetop.set_fill_color(Color::blue);

    Polygon chimney;
    chimney.add(Point{130,30});
    chimney.add(Point{130,100});
    chimney.add(Point{150,100});
    chimney.add(Point{150,30});
    chimney.set_fill_color(Color::yellow);

    Rectangle housedown {Point{100,100}, 400, 400};
    housedown.set_fill_color(Color::yellow);
    Rectangle window1 {Point{150,150}, 100,100};
    window1.set_fill_color(Color::white);
    Rectangle window2 {Point{350,150}, 100,100};
    window2.set_fill_color(Color::white);
    Rectangle door {Point{100,300}, 100, 200};
    door.set_fill_color(Color::blue);
    
    win.attach(housedown);
    win.attach(chimney);
    win.attach(housetop);
    win.attach(window1);
    win.attach(window2);
    win.attach(door);



    win.wait_for_button();

}

