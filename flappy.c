#include<stdio.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include <stdlib.h>
#define SPEED 10.0 
float i=0.0;    // 
float m=0.0;    //                
float n=0.0;    //
float o=0.0;    //                
int j=1;        //
int t=0;        //
int s=0;
int id1;
float a=0;
float x=0,y=0;

void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}

void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}
//Draw the objects 
void draw_object()
{
int l;
if(t==0)
{

//sky
glColor3f(0.0,0.9,0.9);
glBegin(GL_POLYGON);
glVertex2f(0,0);
glVertex2f(0,700);
glVertex2f(1100,700);
glVertex2f(1100,0);
glEnd();

//Pipe1
glColor3f(0.0,1.0,0.0);
glPointSize(15);
glBegin(GL_POLYGON);
glVertex2f(100.0,150.0);
glVertex2f(100.0,300.0);
glVertex2f(150.0,300.0);
glVertex2f(150.0,150.0);
glEnd();
//Pipe above1
glColor3f(0.0,1.0,0.0);
glPointSize(15);
glBegin(GL_POLYGON);
glVertex2f(100.0,400.0);
glVertex2f(100.0,575.0);
glVertex2f(150.0,575.0);
glVertex2f(150.0,400.0);
glEnd();
//Pipe2
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(200.0,450.0);
glVertex2f(200.0,575.0);
glVertex2f(250.0,575.0);
glVertex2f(250.0,450.0);
glEnd();
//Pipe2 above2
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(200.0,150.0);
glVertex2f(200.0,350.0);
glVertex2f(250.0,350.0);
glVertex2f(250.0,150.0);
glEnd();
//Pipe3
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(350.0,150.0);
glVertex2f(350.0,250.0);
glVertex2f(400.0,250.0);
glVertex2f(400.0,150.0);
glEnd();
//Pipe3 above 3
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(350.0,350.0);
glVertex2f(350.0,550.0);
glVertex2f(400.0,550.0);
glVertex2f(400.0,350.0);
glEnd();
//Pipe4
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(450.0,150.0);
glVertex2f(450.0,300.0);
glVertex2f(500.0,300.0);
glVertex2f(500.0,150.0);
glEnd();
//Pipe4 above 4
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(450.0,400.0);
glVertex2f(450.0,550.0);
glVertex2f(500.0,550.0);
glVertex2f(500.0,400.0);
glEnd();
//Pipe5
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(600.0,150.0);
glVertex2f(600.0,400.0);
glVertex2f(650.0,400.0);
glVertex2f(650.0,150.0);
glEnd();
//Pipe5 above 5
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(600.0,500.0);
glVertex2f(600.0,575.0);
glVertex2f(650.0,575.0);
glVertex2f(650.0,500.0);
glEnd();
//Pipe6
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(700.0,150.0);
glVertex2f(700.0,300.0);
glVertex2f(750.0,300.0);
glVertex2f(750.0,150.0);
glEnd();
//Pipe6 above 6
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(700.0,400.0);
glVertex2f(700.0,550.0);
glVertex2f(750.0,550.0);
glVertex2f(750.0,400.0);
glEnd();
//Pipe7
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(800.0,150.0);
glVertex2f(800.0,300.0);
glVertex2f(850.0,300.0);
glVertex2f(850.0,150.0);
glEnd();
//Pipe7 above 7
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(800.0,400.0);
glVertex2f(800.0,550.0);
glVertex2f(850.0,550.0);
glVertex2f(850.0,400.0);
glEnd();
 //Pipe8
glColor3f(0.0,1.0,0.0);
(GL_POLYGON);
glVertex2f(900.0,150.0);
glVertex2f(900.0,250.0);
glVertex2f(950.0,250.0);
glVertex2f(950.0,150.0);
glEnd();
//Pipe8 above 8
glColor3f(0.0,1.0,0.0);
(GL_POLYGON);
glVertex2f(900.0,350.0);
glVertex2f(900.0,550.0);
glVertex2f(950.0,550.0);
glVertex2f(950.0,350.0);
glEnd();
//Pipe9
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(970.0,150.0);
glVertex2f(970.0,350.0);
glVertex2f(1020.0,350.0);
glVertex2f(1020.0,150.0);
glEnd();
//Pipe9 above 9
glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(970.0,450.0);
glVertex2f(970.0,570.0);
glVertex2f(1020.0,570.0);
glVertex2f(1020.0,450.0);
glEnd();
//cloud1


	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(160+m,625,l);
	}




	for(l=0;l<=35;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(200+m,625,l);
		draw_circle(225+m,625,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(265+m,625,l);
	}
//sun
for(l=0;l<=35;l++)
	{
		glColor3f(1.0,0.5,0.0);
		draw_circle(100,650,l);
	}

//cloud2


	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(380+m,615,l);
	}




	for(l=0;l<=35;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(410+m,615,l);
		draw_circle(435+m,615,l);
		draw_circle(470+m,615,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(500+m,615,l);
	}

//cloud3
for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(580+m,605,l);
	}




	for(l=0;l<=35;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(620+m,605,l);
		draw_circle(645+m,605,l);
		draw_circle(680+m,605,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(710+m,605,l);
	}

//cloud4
for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(790+m,580,l);
	}




	for(l=0;l<=35;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(830+m,580,l);
		draw_circle(855+m,580,l);
		draw_circle(890+m,580,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(1.0,1.0,1.0);
		draw_circle(920+m,580,l);
	}

//ground
glColor3f(0.5,0.35,0.05);
glBegin(GL_POLYGON);
glVertex2f(0.0,0.0);
glVertex2f(0.0,150.0);
glVertex2f(1100.0,150.0);
glVertex2f(1100.0,0.0);
glEnd();
//mud
glPointSize(10);
glColor3f(0.5,0.35,0.09);
glBegin(GL_POINTS);
glVertex2f(20.0,20.0);
glEnd();
//grass
int i,j;
glColor3f(0.0,1.0,0.0);
glBegin(GL_LINE_LOOP);
for(i=0;i<1060;i+=10)
{
for(j=0;j<130;j+=10)
{
glVertex2f(15.0+i,25.0+j);
glVertex2f(20.0+i,20.0+j);

}
}
glEnd();
}
}
void idle()
{
   glClearColor(1.0,1.0,1.0,1.0);
 if(j==0)
 {
	 i=1;
	 ++m;
	 n-=2;
	 o+=0.2;

 }
 else
 {

     i+=SPEED;
     ++m;
	 n-=2;
	 o+=0.2;
	 glutPostRedisplay();
 }
 if(i>1100)
	 i=0.0;
 if(m>1100)
	 m=0.0;
 if( o>75)
 {
	s=0;

 }
}

void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
     exit(0);
}
void disp1()
{
	 glClear(GL_COLOR_BUFFER_BIT);
	 glFlush();
}

void keyboardFunc( unsigned char key, int x, int y )
{
    switch( key )
    {


    case 'r':
    case 'R':
        j=0 ;
        break;

	case 'g':
	case 'G':
		j=1;
		 break;

    case 'd':
	case 'D':
		t=0;
		break;

	case 'n':
    case 'N':
		t=1;
		break;
	//case 'h':
	//case 'H': glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
		//		glutInitWindowSize(300,300);
			//	glutInitWindowPosition(300,300);
				//id1=glutCreateWindow("HELP");
				//glutSetWindow(id1);
				//glutDisplayFunc(disp1);

		   


};

}






void main_menu(int index)
{
	if(index==1)
	{
		s=1;
		o=n=0.0;
	}
}





void init()
{
 glClearColor(1.0,1.0,1.0,1.0);
 glColor3f(0.0,0.0,1.0);
 glPointSize(2.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0.0,1100.0,0.0,700.0);
}



  void display()
{

 glClear(GL_COLOR_BUFFER_BIT);
 draw_object();
 //traffic_light();
 glFlush();
}






int main(int argc,char** argv)
{
    int c_menu;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1100.0,700.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Flappy Bird");
	glutDisplayFunc(display);
    	glutIdleFunc(idle);
	glutKeyboardFunc(keyboardFunc);
	glutMouseFunc(mouse);
	init();

/*
	c_menu=glutCreateMenu(main_menu);
	glutAddMenuEntry("",1);
	glutAddMenuEntry("",2);
	glutAddMenuEntry("",3);
	glutAddMenuEntry("",4);
	glutAddMenuEntry("",5);


	glutAttachMenu(GLUT_RIGHT_BUTTON);

*/
	glutMainLoop();
	return 0;
}
