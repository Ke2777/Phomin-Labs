
// fomin alexander; 21 feb, 2020

#ifndef _canvas_h_
#define _canvas_h_

//#include "backward-gen2.h" // 2nd generation vdsp-cli api compatibility


extern int cn_connect(char *host, int port);
extern void cn_disconnect();

extern int cn_auth(char *user, char *pass);
extern int cn_select(char *name);

extern int cn_sync();

extern int cn_size(int w, int h);
extern int cn_clear();

extern int set_stroke(int r, int g, int b, int a);
extern int set_fill(int r, int g, int b, int a);
extern int no_stroke();
extern int no_fill();

extern int draw_line(float x0, float y0, float x1, float y1);
extern int draw_rect(float x, float y, float w, float h);
extern int draw_circle(float x, float y, float r);

extern int draw_text(float x, float y, char *txt);

extern int cn_cursor(); // update mouse status


extern int cn_mx; // mouse position
extern int cn_my;
extern int cn_mbtn; // button state


// comment following line out to expose unprefixed functions
//#define PREFIX_ONLY


#ifndef PREFIX_ONLY
	#define size(w, h)		cn_size(w, h)
	#define clear			cn_clear
	#define stroke(r, g, b, a)	set_stroke(r, g, b, a)
	#define fill(r, g, b, a)	set_fill(r, g, b, a)
	#define nostroke		no_stroke
	#define nofill			no_fill
	#define line(x0, y0, x1, y1)	draw_line(x0, y0, x1, y1)
	#define rect(x, y, w, h)	draw_rect(x, y, w, h)
	#define circle(x, y, r)		draw_circle(x, y, r)
	#define text(x, y, t)		draw_text(x, y, t)
#endif


#endif

