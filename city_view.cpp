#include <GL/glut.h>
#include <cmath>
float t=0,m=0,n=0 ,c=0;
void draw() {
    // metro movement
     t += -0.5;
   if(t <-2100)
   {
    t = 2100;
   }

   // car 1 movement
    m += 0.2;
   if(m > 900)
   {
    m = -900;
   }

  // car 2 movement
  n += 0.2;
 if(n > 900)
 {
    n = -900;
 }
 // cloud  movement
  c += 0.1;
 if(c > 900)
 {
    c = -900;
 }
     glClear(GL_COLOR_BUFFER_BIT);
     glLineWidth(3);
     //building1
     glColor3f(0.20, 0.55, 0.65);//1
     glBegin(GL_QUADS);{
     glVertex2i(-40,300);
     glVertex2i(40,300);
     glVertex2i(40,0);
     glVertex2i(-40,0);
     glEnd();
     }
     glColor3f(0.85, 0.88, 0.90);//detailed
      glBegin(GL_LINES);{
     glVertex2i(-40,250);
     glVertex2i(40,250);

     glVertex2i(-40,200);
     glVertex2i(40,200);

     glVertex2i(-40,150);
     glVertex2i(40,150);

     glVertex2i(-40,100);
     glVertex2i(40,100);

     glVertex2i(-40,50);
     glVertex2i(40, 50);

     glEnd();
     }
     glColor3f(0.85, 0.88, 0.90);//back
     glBegin(GL_QUADS);{
     glVertex2i(70,275);
     glVertex2i(130,275);
     glVertex2i(130,0);
     glVertex2i(70,0);
     glEnd();
     }
     glColor3f(0.8, 1, 1);
     glLineWidth(4);
     glBegin(GL_LINES);{
     glVertex2i(70,255);
     glVertex2i(130,255);

     glVertex2i(70,235);
     glVertex2i(130,235);


     glVertex2i(70,215);
     glVertex2i(130,215);

    glVertex2i(70,195);
     glVertex2i(130,195);
     glVertex2i(70,175);
     glVertex2i(130,175);
     glVertex2i(70,155);
     glVertex2i(130,155);
     glVertex2i(70,135);
     glVertex2i(130,135);
     glVertex2i(70,115);
     glVertex2i(130,115);
     glEnd();
     }

    glColor3f(0.85, 0.88, 0.90);
     glBegin(GL_QUADS);{
     glVertex2i(135,325);
     glVertex2i(230,325);
     glVertex2i(230,0);
     glVertex2i(135,0);
     glEnd();
     }
     glColor3f(0.8, 1, 1);
     glLineWidth(4);
     glBegin(GL_LINES);{
     glVertex2i(154,0);
     glVertex2i(154,325);

     glVertex2i(173,0);
     glVertex2i(173,325);


     glVertex2i(192,0);
     glVertex2i(192,325);

     glVertex2i(211,0);
     glVertex2i(211,325);
     glEnd();
     }

    glColor3f(0.85, 0.88, 0.90);
    glBegin(GL_QUADS);{
     glVertex2i(235,220);
     glVertex2i(240,220);
     glVertex2i(240,0);
     glVertex2i(235,0);
     glEnd();
     }
      glBegin(GL_QUADS);{
     glVertex2i(245,218);
     glVertex2i(250,218);
     glVertex2i(250,0);
     glVertex2i(245,0);
     glEnd();
     }
     glBegin(GL_QUADS);{
     glVertex2i(255,216);
     glVertex2i(260,216);
     glVertex2i(260,0);
     glVertex2i(255,0);
     glEnd();
     }
     glBegin(GL_QUADS);{
     glVertex2i(265,214);
     glVertex2i(270,214);
     glVertex2i(270,0);
     glVertex2i(265,0);
     glEnd();
     }
     glColor3f(0.85, 0.88, 0.90);//back n
     glBegin(GL_QUADS);{
     glVertex2i(-70,275);
     glVertex2i(-130,275);
     glVertex2i(-130,0);
     glVertex2i(-70,0);
     glEnd();
     }
     glColor3f(0.8, 1, 1);
     glLineWidth(4);
     glBegin(GL_LINES);{
     glVertex2i(-70,255);
     glVertex2i(-130,255);

     glVertex2i(-70,235);
     glVertex2i(-130,235);


     glVertex2i(-70,215);
     glVertex2i(-130,215);

    glVertex2i(-70,195);
     glVertex2i(-130,195);
     glVertex2i(-70,175);
     glVertex2i(-130,175);
     glVertex2i(-70,155);
     glVertex2i(-130,155);
     glVertex2i(-70,135);
     glVertex2i(-130,135);
     glVertex2i(-70,115);
     glVertex2i(-130,115);
     glEnd();
     }

    glColor3f(0.85, 0.88, 0.90);
     glBegin(GL_QUADS);{
     glVertex2i(-135,325);
     glVertex2i(-230,325);
     glVertex2i(-230,0);
     glVertex2i(-135,0);
     glEnd();
     }
     glColor3f(0.8, 1, 1);
     glLineWidth(4);
     glBegin(GL_LINES);{
     glVertex2i(-154,0);
     glVertex2i(-154,325);

     glVertex2i(-173,0);
     glVertex2i(-173,325);


     glVertex2i(-192,0);
     glVertex2i(-192,325);

     glVertex2i(-211,0);
     glVertex2i(-211,325);
     glEnd();
     }

    glColor3f(0.85, 0.88, 0.90);
    glBegin(GL_QUADS);{
     glVertex2i(-235,220);
     glVertex2i(-240,220);
     glVertex2i(-240,0);
     glVertex2i(-235,0);
     glEnd();
     }
      glBegin(GL_QUADS);{
     glVertex2i(-240,220);
     glVertex2i(-240,220);
     glVertex2i(-240,0);
     glVertex2i(-240,0);
     glEnd();
     }
      glBegin(GL_QUADS);{
     glVertex2i(-245,218);
     glVertex2i(-250,218);
     glVertex2i(-250,0);
     glVertex2i(-245,0);
     glEnd();
     }
     glBegin(GL_QUADS);{
     glVertex2i(-255,216);
     glVertex2i(-260,216);
     glVertex2i(-260,0);
     glVertex2i(-255,0);
     glEnd();
     }
     glBegin(GL_QUADS);{
     glVertex2i(-265,214);
     glVertex2i(-270,214);
     glVertex2i(-270,0);
     glVertex2i(-265,0);
     glEnd();
     }

     glColor3f(0.20, 0.55, 0.65);//2
     glBegin(GL_QUADS);{
     glVertex2i(40,250);
     glVertex2i(100,250);
     glVertex2i(100,0);
     glVertex2i(40,0);
     glEnd();
     }

     glColor3f(0.12, 0.40, 0.50);//shadow
     glBegin(GL_TRIANGLES);{
     glVertex2i(40,250);
     glVertex2i(40,0);
     glVertex2i(55,0);
     glEnd();
     }

      glColor3f(0.85, 0.88, 0.90);//detailed 2
     glBegin(GL_LINES);{
     glVertex2i(40,225);
     glVertex2i(100,225);

     glVertex2i(40,175);
     glVertex2i(100,175);

     glVertex2i(40,125);
     glVertex2i(100,125);

     glVertex2i(40,75);
     glVertex2i(100,75);

     glVertex2i(40,25);
     glVertex2i(100,25);
     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);//2
     glBegin(GL_QUADS);{
     glVertex2i(-40,250);
     glVertex2i(-100,250);
     glVertex2i(-100,0);
     glVertex2i(-40,0);
     glEnd();
     }
     glColor3f(0.12, 0.40, 0.50);//shadow
     glBegin(GL_TRIANGLES);{
     glVertex2i(-40,250);
     glVertex2i(-40,0);
     glVertex2i(-55,0);
     glEnd();
     }
     glColor3f(0.85, 0.88, 0.90);//detailed 2
     glBegin(GL_LINES);{
     glVertex2i(-40,225);
     glVertex2i(-100,225);

     glVertex2i(-40,175);
     glVertex2i(-100,175);

     glVertex2i(-40,125);
     glVertex2i(-100,125);

     glVertex2i(-40,75);
     glVertex2i(-100,75);

     glVertex2i(-40,25);
     glVertex2i(-100,25);


     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);//7
     glBegin(GL_QUADS);{
     glVertex2i(500,200);
     glVertex2i(400,200);
     glVertex2i(400,0);
     glVertex2i(500,0);
     glEnd();
     }
     glColor3f(0.8, 1, 1);//detailed
     glLineWidth(8);
     glBegin(GL_LINES);{
     glVertex2i(425,200);
     glVertex2i(425,0);

     glVertex2i(450,200);
     glVertex2i(450,0);

     glVertex2i(475,200);
     glVertex2i(475,0);
     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);//7
     glBegin(GL_QUADS);{
     glVertex2i(-500,200);
     glVertex2i(-400,200);
     glVertex2i(-400,0);
     glVertex2i(-500,0);
     glEnd();
     }
     glColor3f(0.8, 1, 1);//detailed
     glLineWidth(8);
     glBegin(GL_LINES);{
     glVertex2i(-425,200);
     glVertex2i(-425,0);

     glVertex2i(-450,200);
     glVertex2i(-450,0);

     glVertex2i(-475,200);
     glVertex2i(-475,0);
     glEnd();
     }
      glColor3f(0.08, 0.30, 0.38);//6
     glBegin(GL_QUADS);{
     glVertex2i(320,280);
     glVertex2i(400,280);
     glVertex2i(400,0);
     glVertex2i(320,0);
     glEnd();
     }
     glColor3f(1, 1, 1);
     glLineWidth(2);
     glBegin(GL_LINES);{
     glVertex2i(330,0);
     glVertex2i(330,280);
     glVertex2i(340,0);
     glVertex2i(340,280);
     glVertex2i(350,0);
     glVertex2i(350,280);
     glVertex2i(360,0);
     glVertex2i(360,280);
     glVertex2i(370,0);
     glVertex2i(370,280);
     glVertex2i(380,0);
     glVertex2i(380,280);
     glVertex2i(390,0);
     glVertex2i(390,280);
     glVertex2i(400,0);
     glVertex2i(400,280);

     glVertex2i(330,260);
     glVertex2i(390,260);
     glVertex2i(330,240);
     glVertex2i(390,240);
     glVertex2i(330,220);
     glVertex2i(390,220);
     glVertex2i(330,200);
     glVertex2i(390,200);
     glVertex2i(330,180);
     glVertex2i(390,180);
     glVertex2i(330,180);
     glVertex2i(390,180);
     glVertex2i(330,160);
     glVertex2i(390,160);
     glVertex2i(330,140);
     glVertex2i(390,140);
     glVertex2i(330,120);
     glVertex2i(390,120);
     glVertex2i(330,100);
     glVertex2i(390,100);
     glVertex2i(330,80);
     glVertex2i(390,80);
     glVertex2i(330,60);
     glVertex2i(390,60);
     glVertex2i(330,40);
     glVertex2i(390,40);
     glVertex2i(330,20);
     glVertex2i(390,20);

     glEnd();
     }
     glColor3f(0.08, 0.30, 0.38);//6
     glBegin(GL_QUADS);{
     glVertex2i(-320,280);
     glVertex2i(-400,280);
     glVertex2i(-400,0);
     glVertex2i(-320,0);
     glEnd();
     }
     glColor3f(1, 1, 1);
     glBegin(GL_LINES);{
     glVertex2i(-330,0);
     glVertex2i(-330,280);
     glVertex2i(-340,0);
     glVertex2i(-340,280);
     glVertex2i(-350,0);
     glVertex2i(-350,280);
     glVertex2i(-360,0);
     glVertex2i(-360,280);
     glVertex2i(-370,0);
     glVertex2i(-370,280);
     glVertex2i(-380,0);
     glVertex2i(-380,280);
     glVertex2i(-390,0);
     glVertex2i(-390,280);
     glVertex2i(-400,0);
     glVertex2i(-400,280);

     glVertex2i(-330,260);
     glVertex2i(-390,260);
     glVertex2i(-330,240);
     glVertex2i(-390,240);
     glVertex2i(-330,220);
     glVertex2i(-390,220);
     glVertex2i(-330,200);
     glVertex2i(-390,200);
     glVertex2i(-330,180);
     glVertex2i(-390,180);
     glVertex2i(-330,180);
     glVertex2i(-390,180);
     glVertex2i(-330,160);
     glVertex2i(-390,160);
     glVertex2i(-330,140);
     glVertex2i(-390,140);
     glVertex2i(-330,120);
     glVertex2i(-390,120);
     glVertex2i(-330,100);
     glVertex2i(-390,100);
      glVertex2i(-330,80);
     glVertex2i(-390,80);
     glVertex2i(-330,60);
     glVertex2i(-390,60);
     glVertex2i(-330,40);
     glVertex2i(-390,40);
     glVertex2i(-330,20);
     glVertex2i(-390,20);
     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);//5
     glBegin(GL_QUADS);{
     glVertex2i(270,210);
     glVertex2i(370,210);
     glVertex2i(370,0);
     glVertex2i(270,0);
     glEnd();
     }
     glColor3f(1, 1, 1);//border5
     glBegin(GL_LINE_LOOP);{
     glVertex2i(270,210);
     glVertex2i(370,210);
     glVertex2i(370,0);
     glVertex2i(270,0);
     glEnd();
     }
     glColor3f(0.85, 0.88, 0.90);
     glLineWidth(10);
     glBegin(GL_LINES);{
     glVertex2i(370,180);
     glVertex2i(270,180);

     glVertex2i(370,150);
     glVertex2i(270,150);

     glVertex2i(370,120);
     glVertex2i(270,120);

     glVertex2i(370,90);
     glVertex2i(270,90);

     glVertex2i(370,60);
     glVertex2i(270,60);

     glVertex2i(370,30);
     glVertex2i(270,30);

     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);//5n
     glBegin(GL_QUADS);{
     glVertex2i(-270,210);
     glVertex2i(-370,210);
     glVertex2i(-370,0);
     glVertex2i(-270,0);
     glEnd();
     }
     glColor3f(1, 1, 1);//border5
     glLineWidth(3);
     glBegin(GL_LINE_LOOP);{
     glVertex2i(-270,210);
     glVertex2i(-370,210);
     glVertex2i(-370,0);
     glVertex2i(-270,0);
     glEnd();
     }
     glColor3f(0.85, 0.88, 0.90);
     glLineWidth(10);
     glBegin(GL_LINES);{
     glVertex2i(-370,180);
     glVertex2i(-270,180);

     glVertex2i(-370,150);
     glVertex2i(-270,150);

     glVertex2i(-370,120);
     glVertex2i(-270,120);

     glVertex2i(-370,90);
     glVertex2i(-270,90);

     glVertex2i(-370,60);
     glVertex2i(-270,60);

     glVertex2i(-370,30);
     glVertex2i(-270,30);

     glEnd();
     }

     glColor3f(0.20, 0.55, 0.65);//4
     glBegin(GL_QUADS);{
     glVertex2i(215,180);
     glVertex2i(290,180);
     glVertex2i(290,0);
     glVertex2i(215,0);
     glEnd();
     }
     glColor3f(1,1,1);//border4
     glBegin(GL_LINE_LOOP);{
     glVertex2i(215,180);
     glVertex2i(290,180);
     glVertex2i(290,0);
     glVertex2i(215,0);
     glEnd();
     }
     glBegin(GL_LINES);{
     glVertex2i(271,0);
     glVertex2i(271,180);

     glVertex2i(252,0);
     glVertex2i(252,180);

     glVertex2i(233,0);
     glVertex2i(233,180);

     glVertex2i(215,150);
     glVertex2i(290,150);

     glVertex2i(215,120);
     glVertex2i(290,120);

     glVertex2i(215,90);
     glVertex2i(290,90);

     glVertex2i(215,60);
     glVertex2i(290,60);

      glVertex2i(215,30);
     glVertex2i(290,30);

     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);//4n
     glBegin(GL_QUADS);{
     glVertex2i(-215,180);
     glVertex2i(-290,180);
     glVertex2i(-290,0);
     glVertex2i(-215,0);
     glEnd();
     }
     glColor3f(1,1,1);//border4
     glBegin(GL_LINE_LOOP);{
     glVertex2i(-215,180);
     glVertex2i(-290,180);
     glVertex2i(-290,0);
     glVertex2i(-215,0);
     glEnd();
     }
     glBegin(GL_LINES);{
     glVertex2i(-271,0);
     glVertex2i(-271,180);

     glVertex2i(-252,0);
     glVertex2i(-252,180);

     glVertex2i(-233,0);
     glVertex2i(-233,180);

     glVertex2i(-215,150);
     glVertex2i(-290,150);

     glVertex2i(-215,120);
     glVertex2i(-290,120);

     glVertex2i(-215,90);
     glVertex2i(-290,90);

     glVertex2i(-215,60);
     glVertex2i(-290,60);

      glVertex2i(-215,30);
     glVertex2i(-290,30);

     glEnd();
     }
     glColor3f(0.8, 1, 1);//3
     glBegin(GL_QUADS);{
     glVertex2i(80,100);
     glVertex2i(250,100);
     glVertex2i(250,0);
     glVertex2i(80,0);
     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);
     glLineWidth(5);
     glBegin(GL_LINES);{
     glVertex2i(97,0);
     glVertex2i(97,100);

     glVertex2i(114,0);
     glVertex2i(114,100);

     glVertex2i(131,0);
     glVertex2i(131,100);

     glVertex2i(148,0);
     glVertex2i(148,100);

     glVertex2i(165,0);
     glVertex2i(165,100);

     glVertex2i(182,0);
     glVertex2i(182,100);

     glVertex2i(199,0);
     glVertex2i(199,100);

      glVertex2i(216,0);
     glVertex2i(216,100);

     glVertex2i(233,0);
     glVertex2i(233,100);

     glVertex2i(80,20);
     glVertex2i(250,20);

     glVertex2i(80,40);
     glVertex2i(250,40);

     glVertex2i(80,60);
     glVertex2i(250,60);

     glVertex2i(80,80);
     glVertex2i(250,80);

     glEnd();
     }
     glColor3f(0.12, 0.40, 0.50);//border3
     glLineWidth(5);
     glBegin(GL_LINE_LOOP);{
     glVertex2i(80,100);
     glVertex2i(250,100);
     glVertex2i(250,0);
     glVertex2i(80,0);
     glEnd();
     }


     glColor3f(0.8, 1, 1);//3
     glBegin(GL_QUADS);{
     glVertex2i(-80,100);
     glVertex2i(-250,100);
     glVertex2i(-250,0);
     glVertex2i(-80,0);
     glEnd();
     }
     glColor3f(0.20, 0.55, 0.65);
     glLineWidth(5);
     glBegin(GL_LINES);{
     glVertex2i(-97,0);
     glVertex2i(-97,100);

     glVertex2i(-114,0);
     glVertex2i(-114,100);

     glVertex2i(-131,0);
     glVertex2i(-131,100);

     glVertex2i(-148,0);
     glVertex2i(-148,100);

     glVertex2i(-165,0);
     glVertex2i(-165,100);

     glVertex2i(-182,0);
     glVertex2i(-182,100);

     glVertex2i(-199,0);
     glVertex2i(-199,100);

      glVertex2i(-216,0);
     glVertex2i(-216,100);

     glVertex2i(-233,0);
     glVertex2i(-233,100);

     glVertex2i(-80,20);
     glVertex2i(-250,20);

     glVertex2i(-80,40);
     glVertex2i(-250,40);

     glVertex2i(-80,60);
     glVertex2i(-250,60);

     glVertex2i(-80,80);
     glVertex2i(-250,80);

     glEnd();
     }
      glColor3f(0.12, 0.40, 0.50);//border3
     glBegin(GL_LINE_LOOP);{
     glVertex2i(-80,100);
     glVertex2i(-250,100);
     glVertex2i(-250,0);
     glVertex2i(-80,0);
     glEnd();
     }
     //sun
     int r, x, y, p;
    r=25;
    x = 0;
    y = r;
    p = 1-r;
    while(x<=y){
    if(p<0)
    {
    glColor3f(1,0,0);
    glPointSize(1);
    glBegin(GL_POINTS);
        glVertex2i( -300 + x, 350 + y);
        glVertex2i(-300 +(-x), 350 + y);
        glVertex2i(-300 +x, 350 + (-y));
        glVertex2i(-300 + (-x),350+ (-y ));
        glVertex2i(-300 +y ,350 + x);
        glVertex2i(-300 + (-y ),350 + x);
        glVertex2i(-300 +y ,350 +(-x));
        glVertex2i(-300 + (-y) ,350 +(-x));
    glEnd();
        x = x + 1;
        y = y;
        p = p + 2*x + 1;
    }
    else{
        {
    glColor3f(1,0,0);
    glPointSize(1);
    glBegin(GL_POINTS);
       glVertex2i( -300 + x, 350 + y);
        glVertex2i(-300 +(-x), 350 + y);
        glVertex2i(-300 +x, 350 + (-y));
        glVertex2i(-300 + (-x),350+ (-y ));
        glVertex2i(-300 +y ,350 + x);
        glVertex2i(-300 + (-y ),350 + x);
        glVertex2i(-300 +y ,350 +(-x));
        glVertex2i(-300 + (-y) ,350 +(-x));
    glEnd();
        x = x+1;
        y = y-1;
        p = p + 2*x - 2*y + 1;
    }

    }

}
     glColor3f(1,0.54,0);
     glBegin(GL_POLYGON);
     float theta;
     for(int i=0; i<=360; i++){
        theta = i *(3.1416/180);
        x =25*cos(theta);
        y=25*sin(theta);
        glVertex2i(x-300,y+350);
     }
     glEnd();
     glColor3f(1, 0.6, 0);

glLineWidth(4);
glBegin(GL_LINES);

// top
glVertex2i(-300, 390);
glVertex2i(-300, 420);

// bottom
glVertex2i(-300, 300);
glVertex2i(-300, 270);

// left
glVertex2i(-340, 350);
glVertex2i(-370, 350);

// right
glVertex2i(-250, 350);
glVertex2i(-220, 350);

// diagonal
glVertex2i(-330, 380);
glVertex2i(-350, 400);

glVertex2i(-260, 380);
glVertex2i(-240, 400);

glVertex2i(-330, 310);
glVertex2i(-350, 290);

glVertex2i(-270, 310);
glVertex2i(-240, 290);

glEnd();

    // cloud 1
glColor3f(0.8, 1, 1);

for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glBegin(GL_POLYGON);
    for(int j=0; j<=360; j+=5)
    {
        float a = j * 3.1416 / 180;
        glVertex2f(150 + 30*cos(a)+c, 380 + 30*sin(a));
    }
    glEnd();
    break;
}

glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(180 + 40*cos(theta)+c, 390 + 40*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(210 + 30*cos(theta)+c, 380 + 30*sin(theta));
}
glEnd();
    glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(120 + 20*cos(theta)+c, 370 + 20*sin(theta));
}
glEnd();
 glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(240 + 20*cos(theta)+c, 370 + 20*sin(theta));
}
glEnd();

        // cloud 2
glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(-100 + 30*cos(theta)+c, 420 + 30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(-70 + 35*cos(theta)+c, 430 + 35*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(-50 + 30*cos(theta)+c, 420 + 30*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(-130 + 20*cos(theta)+c, 410 + 20*sin(theta));
}
glEnd();
glBegin(GL_POLYGON);
for(int i=0; i<=360; i+=5)
{
    float theta = i * 3.1416 / 180;
    glVertex2f(-20 + 20*cos(theta)+c, 410 + 20*sin(theta));
}
glEnd();

     //road background
     glColor3f(0.31,0.31, 0.31);
    glBegin(GL_POLYGON);{
     glVertex2i(-500,0);
     glVertex2i(500,0);
     glVertex2i(500,-350);
     glVertex2i(-500,-350);
     glEnd();
    }
    glColor3f(0.80, 0.80, 0.80);
    glBegin(GL_POLYGON);{
     glVertex2i(500,-350);
     glVertex2i(500,-500);
     glVertex2i(-500,-500);
     glVertex2i(-500,-350);
     glEnd();
    }
    glColor3f(1, 1, 1);
    glLineWidth(5);
    glBegin(GL_LINES);{
     glVertex2i(-500,-240);
     glVertex2i(-450,-240);

      glVertex2i(-400,-240);
     glVertex2i(-350,-240);

     glVertex2i(-300,-240);
     glVertex2i(-250,-240);

     glVertex2i(-200,-240);
     glVertex2i(-150,-240);

     glVertex2i(-100,-240);
     glVertex2i(-50,-240);

     glVertex2i(450,-240);
     glVertex2i(400,-240);

      glVertex2i(350,-240);
     glVertex2i(300,-240);

     glVertex2i(250,-240);
     glVertex2i(200,-240);

     glVertex2i(150,-240);
     glVertex2i(100,-240);

     glVertex2i(50,-240);
     glVertex2i(0,-240);


     glVertex2i(-500,-100);
     glVertex2i(-450,-100);

      glVertex2i(-400,-100);
     glVertex2i(-350,-100);

     glVertex2i(-300,-100);
     glVertex2i(-250,-100);

     glVertex2i(-200,-100);
     glVertex2i(-150,-100);

     glVertex2i(-100,-100);
     glVertex2i(-50,-100);

     glVertex2i(450,-100);
     glVertex2i(400,-100);

      glVertex2i(350,-100);
     glVertex2i(300,-100);

     glVertex2i(250,-100);
     glVertex2i(200,-100);

     glVertex2i(150,-100);
     glVertex2i(100,-100);

     glVertex2i(50,-100);
     glVertex2i(0,-100);

    glEnd();
    }

     //metro
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);{
     glVertex2i(150+t,0);
     glVertex2i(150+t,45);
     glVertex2i(210+t,90);
     glVertex2i(1500+t,90);
     glVertex2i(1500+t,0);
     glEnd();
    }
    glColor3f(0.85, 0.88, 0.90);
    glLineWidth(30);
     glBegin(GL_LINES);{
     glVertex2i(200+t,35);
     glVertex2i(1500+t,35);
     glEnd();
     }
     glColor3f(0, 0.5, 0.25);
    glLineWidth(5);
    glBegin(GL_LINES);{
     glVertex2i(200+t,50);
     glVertex2i(1500+t,50);
     glVertex2i(200+t,20);
     glVertex2i(1500+t,20);
     glEnd();
     }

     glColor3f(0.85, 0.88, 0.90);
    glLineWidth(30);
    glBegin(GL_LINES);{
     glVertex2i(257+t,70);
     glVertex2i(257+t,0);
     glVertex2i(317+t,70);
     glVertex2i(317+t,0);
     glVertex2i(377+t,70);
     glVertex2i(377+t,0);
     glVertex2i(437+t,70);
     glVertex2i(437+t,0);
     glVertex2i(497+t,70);
     glVertex2i(497+t,0);
     glVertex2i(557+t,70);
     glVertex2i(557+t,0);
     glVertex2i(617+t,70);
     glVertex2i(617+t,0);
     glVertex2i(677+t,70);
     glVertex2i(677+t,0);
     glVertex2i(737+t,70);
     glVertex2i(737+t,0);
     glVertex2i(797+t,70);
     glVertex2i(797+t,0);
     glVertex2i(857+t,70);
     glVertex2i(857+t,0);
     glVertex2i(917+t,70);
     glVertex2i(917+t,0);
     glVertex2i(977+t,70);
     glVertex2i(977+t,0);
     glVertex2i(1037+t,70);
     glVertex2i(1037+t,0);
     glVertex2i(1097+t,70);
     glVertex2i(1097+t,0);
     glVertex2i(1157+t,70);
     glVertex2i(1157+t,0);
     glVertex2i(1217+t,70);
     glVertex2i(1217+t,0);
     glVertex2i(1277+t,70);
     glVertex2i(1277+t,0);
     glVertex2i(1337+t,70);
     glVertex2i(1337+t,0);
     glVertex2i(1397+t,70);
     glVertex2i(1397+t,0);
     glVertex2i(1457+t,70);
     glVertex2i(1457+t,0);


    glEnd();
    }
    glColor3f (1.0, 0.74, 0.0);
    glPointSize(15);
    glBegin(GL_POINTS);{
    glVertex2i(155+t,25);
    glEnd();
    }
    glColor3f(0, 0.5, 0.25);
    glLineWidth(5);
    glBegin(GL_LINES);{
     glVertex2i(197+t,80);
     glVertex2i(1500+t,80);

     glVertex2i(197+t,80);
     glVertex2i(150+t,44);

     glColor3f(0.8, 0, 0);
     glVertex2i(257+t,70);
     glVertex2i(257+t,0);
     glVertex2i(317+t,70);
     glVertex2i(317+t,0);
     glVertex2i(377+t,70);
     glVertex2i(377+t,0);
     glVertex2i(437+t,70);
     glVertex2i(437+t,0);
     glVertex2i(497+t,70);
     glVertex2i(497+t,0);
     glVertex2i(557+t,70);
     glVertex2i(557+t,0);
     glVertex2i(617+t,70);
     glVertex2i(617+t,0);
     glVertex2i(677+t,70);
     glVertex2i(677+t,0);
     glVertex2i(737+t,70);
     glVertex2i(737+t,0);
     glVertex2i(797+t,70);
     glVertex2i(797+t,0);
     glVertex2i(857+t,70);
     glVertex2i(857+t,0);
     glVertex2i(917+t,70);
     glVertex2i(917+t,0);
     glVertex2i(977+t,70);
     glVertex2i(977+t,0);
     glVertex2i(1037+t,70);
     glVertex2i(1037+t,0);
     glVertex2i(1097+t,70);
     glVertex2i(1097+t,0);
     glVertex2i(1157+t,70);
     glVertex2i(1157+t,0);
     glVertex2i(1217+t,70);
     glVertex2i(1217+t,0);
     glVertex2i(1277+t,70);
     glVertex2i(1277+t,0);
     glVertex2i(1337+t,70);
     glVertex2i(1337+t,0);
     glVertex2i(1397+t,70);
     glVertex2i(1397+t,0);
     glVertex2i(1457+t,70);
     glVertex2i(1457+t,0);

     glEnd();
    }
     //bridge
     glColor3f(0.25, 0.25,0.25);
     glLineWidth(20);
     glBegin(GL_LINES);{
     glVertex2i(-500,0);
     glVertex2i(500,0);
     glEnd();

     }
     glColor3f(0.67, 0.65,0.62);
     glBegin(GL_QUADS);
    {
     glVertex2i(-500,0);
     glVertex2i(500,0);
     glVertex2i(500,-50);
     glVertex2i(-500,-50);
     glEnd();
    }
    glBegin(GL_LINES);{
    glColor3f(0.25, 0.25,0.25);
     glVertex2i(-500,-150);
     glVertex2i(500,-150);

     glColor3f(0.67, 0.65,0.62);

     glVertex2i(-500,-50);
     glVertex2i(-500,-150);

     glVertex2i(-300,-50);
     glVertex2i(-300,-150);

      glVertex2i(-100,-50);
     glVertex2i(-100,-150);

    glVertex2i(100,-50);
     glVertex2i(100,-150);

      glVertex2i(300,-50);
     glVertex2i(300,-150);

      glVertex2i(500,-50);
     glVertex2i(500,-150);


     glEnd();
    }

    glBegin(GL_TRIANGLES);{

    glVertex2i(-500,-50);
    glVertex2i(-500,-100);
    glVertex2i(-450,-50);

     glVertex2i(500,-50);
    glVertex2i(500,-100);
    glVertex2i(450,-50);


    glVertex2i(-300,-50);
    glVertex2i(-300,-100);
    glVertex2i(-350,-50);

    glVertex2i(-300,-50);
    glVertex2i(-300,-100);
    glVertex2i(-250,-50);

    glVertex2i(300,-50);
    glVertex2i(300,-100);
    glVertex2i(350,-50);

    glVertex2i(300,-50);
    glVertex2i(300,-100);
    glVertex2i(250,-50);

    glVertex2i(-100,-50);
    glVertex2i(-100,-100);
    glVertex2i(-150,-50);

    glVertex2i(-100,-50);
    glVertex2i(-100,-100);
    glVertex2i(-50,-50);

    glVertex2i(100,-50);
    glVertex2i(100,-100);
    glVertex2i(150,-50);

    glVertex2i(100,-50);
    glVertex2i(100,-100);
    glVertex2i(50,-50);
     glEnd();
    }
    //light
     glColor3f(0.25, 0.25,0.25);
     glLineWidth(3);
     glBegin(GL_LINE_STRIP);{
     glVertex2i(-375,0);
     glVertex2i(-375,150);
     glVertex2i(-350,150);


     glEnd();
    }
     glBegin(GL_LINE_STRIP);{
     glVertex2i(-250,0);
     glVertex2i(-250,150);
     glVertex2i(-225,150);


     glEnd();
    }
    glBegin(GL_LINE_STRIP);{
     glVertex2i(-125,0);
     glVertex2i(-125,150);
     glVertex2i(-100,150);


     glEnd();
    }
    glBegin(GL_LINE_STRIP);{
     glVertex2i(0,0);
     glVertex2i(0,150);
     glVertex2i(25,150);


     glEnd();
    }
     glBegin(GL_LINE_STRIP);{
     glVertex2i(125,0);
     glVertex2i(125,150);
     glVertex2i(150,150);


     glEnd();
    }
    glBegin(GL_LINE_STRIP);{
     glVertex2i(250,0);
     glVertex2i(250,150);
     glVertex2i(275,150);


     glEnd();
    }
    glBegin(GL_LINE_STRIP);{
     glVertex2i(375,0);
     glVertex2i(375,150);
     glVertex2i(400,150);


     glEnd();
    }

//car 1
   glColor3f(1,0,0);
   glBegin(GL_POLYGON);{
   glVertex2f(-400+m,-300);
   glVertex2f(-250+m,-300);
   glVertex2f(-250+m,-240);
   glVertex2f(-400+m,-240);
   glEnd();
   }
   glBegin(GL_TRIANGLES);{
   glVertex2f(-380+m,-240);
   glVertex2f(-350+m,-180);
   glVertex2f(-350+m,-240);

   glVertex2f(-250+m,-240);
   glVertex2f(-280+m,-180);
   glVertex2f(-280+m,-240);
   glEnd();
   }
   glBegin(GL_QUADS);{
   glVertex2f(-350+m,-180);
   glVertex2f(-350+m,-240);
   glVertex2f(-280+m,-240);
   glVertex2f(-280+m,-180);

   glVertex2f(-250+m,-240);
   glVertex2f(-250+m,-300);
   glVertex2f(-200+m,-300);
   glVertex2f(-200+m,-255);

   glColor3f(0.53, 0.81, 0.98);
   glVertex2f(-370+m,-240);
   glVertex2f(-345+m,-190);
   glVertex2f(-315+m,-190);
   glVertex2f(-315+m,-240);

   glVertex2f(-260+m,-240);
   glVertex2f(-285+m,-190);
   glVertex2f(-310+m,-190);
   glVertex2f(-310+m,-240);

   glEnd();
   }

   glColor3f(1,1,1);//back wheel
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=180; i=i+3){
        theta = i *(3.1416/180);
        x =28*cos(theta);
        y=28 *sin(theta);
        glVertex2i(x-350+m,y-300);
     }
     glEnd();
   glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =25*cos(theta);
        y=25*sin(theta);
        glVertex2i(x-350+m,y-300);
     }
     glEnd();
     glColor3f(1,1,1);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =10*cos(theta);
        y=10 *sin(theta);
        glVertex2i(x-350+m,y-300);
     }
     glEnd();
     glColor3f(1,1,1);//forword wheel
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=180; i=i+3){
        theta = i *(3.1416/180);
        x =28*cos(theta);
        y=28 *sin(theta);
        glVertex2i(x-250+m,y-300);
     }
     glEnd();
   glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =25*cos(theta);
        y=25*sin(theta);
        glVertex2i(x-250+m,y-300);
     }
     glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =10*cos(theta);
        y=10 *sin(theta);
        glVertex2i(x-250+m,y-300);
     }
     glEnd();

     //car 2
   glColor3f(0,0,1);
   glBegin(GL_POLYGON);{
   glVertex2f(-100+n,-230);
   glVertex2f(50+n,-230);
   glVertex2f(50+n,-170);
   glVertex2f(-100+n,-170);
   glEnd();
   }
   glBegin(GL_TRIANGLES);{
   glVertex2f(-80+n,-170);
   glVertex2f(-50+n,-110);
   glVertex2f(-50+n,-170);

   glVertex2f(50+n,-170);
   glVertex2f(20+n,-110);
   glVertex2f(20+n,-170);
   glEnd();
   }
   glBegin(GL_QUADS);{
   glVertex2f(-50+n,-110);
   glVertex2f(-50+n,-170);
   glVertex2f(20+n,-170);
   glVertex2f(20+n,-110);

   glVertex2f(50+n,-170);
   glVertex2f(50+n,-230);
   glVertex2f(100+n,-230);
   glVertex2f(100+n,-185);

   glColor3f(0.53, 0.81, 0.98);
   glVertex2f(-70+n,-170);
   glVertex2f(-45+n,-120);
   glVertex2f(-15+n,-120);
   glVertex2f(-15+n,-170);

   glVertex2f(40+n,-170);
   glVertex2f(15+n,-120);
   glVertex2f(-10+n,-120);
   glVertex2f(-10+n,-170);

   glEnd();
   }

   glColor3f(1,1,1);//back wheel
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=180; i=i+3){
        theta = i *(3.1416/180);
        x =28*cos(theta);
        y=28 *sin(theta);
        glVertex2i(x-50+n,y-230);
     }
     glEnd();
   glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =25*cos(theta);
        y=25*sin(theta);
        glVertex2i(x-50+n,y-230);
     }
     glEnd();
     glColor3f(1,1,1);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =10*cos(theta);
        y=10 *sin(theta);
        glVertex2i(x-50+n,y-230);
     }
     glEnd();
     glColor3f(1,1,1);//forword wheel
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=180; i=i+3){
        theta = i *(3.1416/180);
        x =28*cos(theta);
        y=28 *sin(theta);
        glVertex2i(x+50+n,y-230);
     }
     glEnd();
   glColor3f(0,0,0);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =25*cos(theta);
        y=25*sin(theta);
        glVertex2i(x+50+n,y-230);
     }
     glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =10*cos(theta);
        y=10 *sin(theta);
        glVertex2i(x+50+n,y-230);
     }
     glEnd();
     //left tree
     glColor3f(0.55,0.80,0.35);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =50*cos(theta);
        y=90*sin(theta);
        glVertex2i(x-300,y-200);
     }
     glEnd();
      glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =50*cos(theta);
        y=40*sin(theta);
        glVertex2i(x-340,y-250);
     }
     glEnd();
     glBegin(GL_POLYGON);
      for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =30*cos(theta);
        y=30*sin(theta);
        glVertex2i(x-350,y-200);
     }
     glEnd();
     glBegin(GL_POLYGON);
      for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =50*cos(theta);
        y=40*sin(theta);
        glVertex2i(x-250,y-250);
     }
     glEnd();
      glBegin(GL_POLYGON);
      for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =30*cos(theta);
        y=30*sin(theta);
        glVertex2i(x-240,y-200);
     }
     glEnd();
    glColor3f(0.55,0.35,0.20);
    glLineWidth(8);
    glBegin(GL_LINES);{
    glVertex2i(-300,-400);
    glVertex2i(-300,-200);

    glVertex2i(-300,-300);
    glVertex2i(-350,-270);

    glVertex2i(-300,-300);
    glVertex2i(-250,-220);

    glEnd();

    }
    //right tree
     glColor3f(0.55,0.80,0.35);
    glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =50*cos(theta);
        y=90*sin(theta);
        glVertex2i(x+300,y-200);
     }
     glEnd();
      glBegin(GL_POLYGON);
     for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =50*cos(theta);
        y=40*sin(theta);
        glVertex2i(x+340,y-250);
     }
     glEnd();
     glBegin(GL_POLYGON);
      for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =30*cos(theta);
        y=30*sin(theta);
        glVertex2i(x+350,y-200);
     }
     glEnd();
     glBegin(GL_POLYGON);
      for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =50*cos(theta);
        y=40*sin(theta);
        glVertex2i(x+250,y-250);
     }
     glEnd();
      glBegin(GL_POLYGON);
      for(int i=0 ;i<=360; i=i+3){
        theta = i *(3.1416/180);
        x =30*cos(theta);
        y=30*sin(theta);
        glVertex2i(x+240,y-200);
     }
     glEnd();
    glColor3f(0.55,0.35,0.20);
    glLineWidth(8);
    glBegin(GL_LINES);{
    glVertex2i(300,-400);
    glVertex2i(300,-200);

    glVertex2i(300,-300);
    glVertex2i(350,-270);

    glVertex2i(300,-300);
    glVertex2i(250,-220);

    glEnd();

    }

    glutSwapBuffers();
    glutPostRedisplay();
    glFlush();

}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("city view");
    glClearColor(1, 1, 1, 1);
    gluOrtho2D(-500, 500, -500, 500);
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
