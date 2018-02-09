#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = 0;
  c.blue = MAX_COLOR;

  clear_screen(s);

  //lines between roof and bottom
  draw_line(125, 250, 250, 250, s, c);
  draw_line(250, 250, 350, 300, s, c);
  //vertical lines connecting roof and ground
  draw_line(125, 250, 125, 100, s, c);
  draw_line(250, 250, 250, 100, s, c);
  draw_line(350, 300, 350, 165, s, c);
  //lines for ground
  c.red = 160;
  c.green = 100;
  c.blue = 30;
  draw_line(110, 100, 270, 100, s, c);
  draw_line(250, 100, 350, 165, s, c);
  draw_line(350, 165, 370, 165, s, c);
  //lines for roof
  c.red = MAX_COLOR;
  c.blue = 0;
  c.green = 0;
  draw_line(125, 250, 190, 350, s, c);
  draw_line(250, 250, 190, 350, s, c);
  draw_line(190, 350, 290, 370, s, c);
  draw_line(350, 300, 290, 370, s, c);
  //fence
  c.blue = MAX_COLOR;
  c.green = MAX_COLOR;
  int x; 
  for (x = 255; x < 400; x += 10) {
    c.blue = 0; c.red = 0;
    draw_line(x+5, 100, x+5, 110, s, c);
    c.blue = MAX_COLOR; c.red = MAX_COLOR;
    draw_line(x, 100, x, 150, s, c);
  }
  //door
  draw_line(170, 100, 170, 175, s, c);
  draw_line(210, 100, 210, 175, s, c);
  draw_line(170, 175, 210, 175, s, c);
  draw_line(170, 100, 210, 100, s, c);
  //windows; verticals
  draw_line(270, 190, 270, 230, s, c);
  draw_line(300, 205, 300, 245, s, c);
  draw_line(315, 212, 315, 252, s, c);
  draw_line(340, 227, 340, 267, s, c);
  //windows; horizontals
  draw_line(270, 190, 300, 205, s, c);
  draw_line(315, 212, 340, 227, s, c);
  draw_line(270, 230, 300, 245, s, c);
  draw_line(315, 252, 340, 267, s, c);
    
  display(s);
  save_extension(s, "lines.png");
}
