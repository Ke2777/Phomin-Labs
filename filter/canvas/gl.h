
// fomin alexander; 21 feb, 2020

#ifndef _virtdisp_gl_h_
#define _virtdisp_gl_h_

enum
{
	GL_POINTS = 1, // for glBegin()
	GL_LINES = 2
};

enum
{
  GL_MODELVIEW = 1, // for glMatrixMode()
	GL_PROJECTION = 2
};

enum
{
	GL_COLOR_BUFFER_BIT = 1 // for glClear()
};


extern void glClear(int m);

extern void glBegin(int m);
extern void glEnd();

extern void glColor3f(float r, float g, float b);
extern void glVertex3f(float x, float y, float z);

extern void glMatrixMode(int m);

extern void glLoadIdentity();
extern void glMultMatrixf(float m[16]);
extern void glTranslatef(float x, float y, float z);
extern void glRotatef(float a, float x, float y, float z);

extern void glViewport(int x, int y, int w, int h);

extern void glPointSize(float s);

extern void gluLookAt(float ex, float ey, float ez, float cx, float cy, float cz, float ux, float uy, float uz);
extern void gluPerspective(float fy, float asp, float zn, float zf);


#endif
