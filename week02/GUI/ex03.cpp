#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 600;
    int max_height = 400;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 3
     Text t {Point{0,150}, "S"};
    t.set_color(Color::blue);
    t.set_font(Font::times_bold);
    t.set_font_size(150);

     Text tt {Point{200,150}, "Zs"};
    tt.set_color(Color::red);
    tt.set_font(Font::times_bold);
    tt.set_font_size(150);

    win.attach(t);
    win.attach(tt);

    win.wait_for_button();

}

