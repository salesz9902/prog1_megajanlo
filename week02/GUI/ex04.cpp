#include "Simple_window.h"
#include "Graph.h"

int main() {
    int max_width = 1200;
    int max_height = 720;

    Simple_window win {Point{100,100},
        max_width, max_height, "Graphics classes"};

// exercise 4
     Polygon squares [9];

     int x = 100;
     int y = 100;

     for(int i = 0; i < 9; i++){
         if(i < 3) {
            squares[i].add(Point{x,y});
            squares[i].add(Point{x+100,y});
            squares[i].add(Point{x+100,y+100});
            squares[i].add(Point{x,y+100});
            x += 100;
         } else if(i < 6) {
             if(i == 3) x = 100; y = 200;
            squares[i].add(Point{x,y});
            squares[i].add(Point{x+100,y});
            squares[i].add(Point{x+100,y+100});
            squares[i].add(Point{x,y+100});
            x += 100;
         } else {
             if(i == 6) x=100; y = 300;
            squares[i].add(Point{x,y});
            squares[i].add(Point{x+100,y});
            squares[i].add(Point{x+100,y+100});
            squares[i].add(Point{x,y+100});
            x += 100;
         }
         if(i % 2 == 1) squares[i].set_fill_color(Color::white);
         else squares[i].set_fill_color(Color::red);
         
         win.attach(squares[i]);
     }

    win.wait_for_button();

}

