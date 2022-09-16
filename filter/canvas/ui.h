
// fomin alexander; 24 feb, 2020

#ifndef _virtdisp_ui_h_
#define _virtdisp_ui_h_


typedef struct
{
  int x; // position
  int y;
  int width; // size
  int height;

  char name[20]; // text

	int guard[3]; // guard padding
} ui_button;

extern void set_button(ui_button *btn, int x, int y, int width, int height, char *text); // intialize button structure
extern int draw_button(ui_button *btn, int lock); // draw and update button state
extern int button_clicked(ui_button *btn); // check if button clicked


#endif

