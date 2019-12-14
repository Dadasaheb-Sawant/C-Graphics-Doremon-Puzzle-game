

// Programmer :: Sawant Dadasaheb Ankush
// Project    :: Puzzle Game of Doremon
// Updates    :: 25 / 12 / 2018


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

#include "sawant_Game_Hub.h"

#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define UP_ARROW 72
#define DOWN_ARROW 80
#define ESCAPE 27
#define ENTER 13


char name[20];

int status[10];
int xx1[10],yy1[10],xx2[10],yy2[10];

int b1x[]={0,140,250} , b1y[]={0,55,190};
int b2x[]={0,250,360} , b2y[]={0,55,190};
int b3x[]={0,360,470} , b3y[]={0,55,190};

int b4x[]={0,140,250} , b4y[]={0,190,328};
int b5x[]={0,250,360} , b5y[]={0,190,328};
int b6x[]={0,360,470} , b6y[]={0,190,328};

int b7x[]={0,140,250} , b7y[]={0,328,463};
int b8x[]={0,250,360} , b8y[]={0,328,463};
int b9x[]={0,360,470} , b9y[]={0,328,463};


void block1(int x1,int y1,int x2,int y2,int stat)
{
	xx1[1]=x1;
	yy1[1]=y1;
	xx2[1]=x2;
	yy2[1]=y2;
	status[1]=stat;
	//Block
	rectangle(x1,y1,x2,y2);

	//Head arms

	arc(x2+50,y1+110,118,198,100);
	arc(x2+50,y1+124,126,193,80);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x2-40,y2-20,WHITE);

	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x2-10,y2-10,WHITE);


	//Moutaches
	line(x1+110,y1+90,x1+90,y1+80);
	line(x1+110,y1+110,x1+70,y1+110);
	line(x1+110,y1+125,x1+90,y1+130);

}

void block2(int x1,int y1,int x2,int y2,int stat)
{
	xx1[2]=x1;
	yy1[2]=y1;
	xx2[2]=x2;
	yy2[2]=y2;
	status[2]=stat;
	//block
	rectangle(x1,y1,x2,y2);

	//Spot inside the eyes
	circle(x1+43,y1+60,5);
	circle(x1+60,y1+60,5);

	//Main eyes
	ellipse(x1+35,y1+60,0,360,17,22);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x1+35,y1+60,WHITE);

	ellipse(x1+70,y1+60,0,360,17,22);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x1+67,y1+62,WHITE);

	//Nose
	circle(x1+55,y1+100,12);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(x1+50,y1+90,WHITE);
	line(x1+55,y1+110,x1+55,y1+135);

	//Head arcs
	arc(x1+50,y1+110,53,120,100);
	arc(x1+30,y1+90,100,140,40);
	arc(x1+80,y1+90,40,95,40);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x1+20,y1+40,WHITE);

	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x2-10,y2-10,WHITE);

	// Moutaches left
	line(x1+22,y1+100,x1,y1+90);
	line(x1+22,y1+110,x1,y1+110);
	line(x1+22,y1+120,x1,y1+125);
	//M end

	// Moutaches Right
	line(x1+90,y1+100,x1+111,y1+90);
	line(x1+90,y1+112,x1+111,y1+112);
	line(x1+90,y1+120,x1+111,y1+125);
	//M end
}

void block3(int x1,int y1,int x2,int y2,int stat)
{

	xx1[3]=x1;
	yy1[3]=y1;
	xx2[3]=x2;
	yy2[3]=y2;
	status[3]=stat;
	rectangle(x1,y1,x2,y2);

	// Head Arm

	arc(x1-75,y1+128,0-6,45,100);
	arc(x1-55,y1+115,0-12,60,100);


	putpixel(x1+10,y1+110,RED);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x1+10,y1+60,WHITE);
	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x1+10,y1+110,WHITE);

	//Mostaches
	line(x1,y1+90,x1+24,y1+75);
	line(x1,y1+112,x1+30,y1+112);
	line(x1,y1+126,x1+24,y1+135);


}

void block4(int x1,int y1,int x2,int y2,int stat)
{
	xx1[4]=x1;
	yy1[4]=y1;
	xx2[4]=x2;
	yy2[4]=y2;
	status[4]=stat;
	//Block
	rectangle(x1,y1,x2,y2);
	arc(x1+240,y1-10,185,205,160);
	putpixel(x1+90,y1+10,YELLOW);
	arc(x1+160,y1-20,190,234,100);
	rectangle(x2-10,y2-80,x2,y2-65);


	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x1+70,y1+10,WHITE);

	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x1+90,y1+10,WHITE);

	//Hand
	line(x2-10,y2-65,x2-90,y2+1);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x2-10,y2-10,WHITE);
	//Half Mouth arc
	arc(x2-2,y2-125,75,280,10);

}

void block5(int x1,int y1,int x2,int y2,int stat)
{
	xx1[5]=x1;
	yy1[5]=y1;
	xx2[5]=x2;
	yy2[5]=y2;
	status[5]=stat;
	//Block
	rectangle(x1,y1,x2,y2);

	//Mouth lower
	arc(x1+55,y1-25,223,319,70);
	//Mouth upper
	arc(x1+55,y1+70,41,139,70);
	//Mouth  Tounge
	arc(x1+55,y1+55,30,148,30);

	rectangle(x1,y1+58,x1+110,y1+73);

	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x1+10,y1+10,WHITE);

	// Tonge color fill

	setfillstyle(SOLID_FILL,RED);
	floodfill(x1+45,y1+35,WHITE);

	putpixel(x1+30,y1+74,YELLOW);
	line(x1+20,y1+74,x1+5,y1+140);
	line(x1+90,y1+74,x1+105,y1+140);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x1+10,y1+75,WHITE);
	floodfill(x1+100,y1+78,WHITE);
	circle(x1+50,y1+80,15);
	setfillstyle(HATCH_FILL,YELLOW);
	floodfill(x1+52,y1+83,WHITE);

	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x1+52,y1+110,WHITE);


}

void block6(int x1,int y1,int x2,int y2,int stat)
{
	xx1[6]=x1;
	yy1[6]=y1;
	xx2[6]=x2;
	yy2[6]=y2;
	status[6]=stat;
	rectangle(x1,y1,x2,y2);

	//Motaches
	arc(x1,y1+13,0-80,90,10);
	//Belt
	rectangle(x1-1,y1+58,x1+10,y1+73);

	//Head arm
	arc(x1-55,y1-20,310,360,100);
	arc(x1-53,y1,315,360,80);

	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x1+25,y1+30,WHITE);

	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x1+20,y1+30,WHITE);

	setfillstyle(SOLID_FILL,CYAN);
	floodfill(x1+5,y1+10,WHITE);

	putpixel(x2-50,y2-80,YELLOW);



	// Hand
	line(x1,y1+74,x1+88,y1+30);
	line(x2-90,y2,x2-19,y2-88);
	line(x2-90,y2-30,x2-90,y2);

	circle(x1+85,y1+35,20);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x1+85,y1+35,WHITE);


	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x2-50,y2-80,WHITE);
}


void block7(int x1,int y1,int x2,int y2,int stat)
{
	xx1[7]=x1;
	yy1[7]=y1;
	xx2[7]=x2;
	yy2[7]=y2;
	status[7]=stat;
	// Block
	rectangle(x1,y1,x2,y2);

	// Hand Palm
	circle(x1+30,y1+25,25);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x1+25,y1+25,WHITE);

	//Hand
	line(x1+40,y1+45,x1+80,y1+42);
	//Leg
	line(x1+80,y1+30,x1+85,y1+140);
	//Foot
//	line(x1+80,y1+115,x1+110,y1+115);
	// F end

	putpixel(x2-10,y2-40,YELLOW);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x2-10,y2-40,WHITE);
}

void block8(int x1,int y1,int x2,int y2,int stat)
{
	xx1[8]=x1;
	yy1[8]=y1;
	xx2[8]=x2;
	yy2[8]=y2;
	status[8]=stat;
	//Block


	rectangle(x1,y1,x2,y2);
	ellipse(x1+55,y1,180,0,50,60);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(x1+40,y1+40,WHITE);
	ellipse(x2-55,y2-30,40,140,50,30);
	line(x1+20,y1+70,x1+19,y1+140);
 //	line(x1+20,y1+120,x1,y1+120);
	line(x1+80,y1+70,x1+81,y1+140);
//	line(x1+80,y1+120,x2,y1+120);

	putpixel(x2-10,y2-50,YELLOW);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x2-10,y2-50,WHITE);
  //	ellipse(x1+10,y1+120,0,360,10,8);
}

void block9(int x1,int y1,int x2,int y2,int stat)
{
	xx1[9]=x1;
	yy1[9]=y1;
	xx2[9]=x2;
	yy2[9]=y2;
	status[9]=stat;
	setfillstyle(SOLID_FILL,WHITE);
	rectangle(x1,y1,x2,y2);

	line(x1+20,y1,x1+20,y1+135);
	putpixel(x1+5,y1+5,YELLOW);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	floodfill(x1+5,y1+5,WHITE);
//	floodfill(x1+10,y1+10,WHITE);
}


void blankBlock(int x1,int y1,int x2,int y2,int st)
{
	status[9]=st;
	xx1[9]=x1;
	yy1[9]=y1;
	xx2[9]=x2;
	yy2[9]=y2;
	setfillstyle(SOLID_FILL,RED);
	rectangle(x1,y1,x2,y2);
	floodfill(x1+10,y1+10,WHITE);
}

int getStatusBlockFrom(int nb)
{
	for(int b=1; b<=9; b++)
	{
		if(status[b]==nb)
		{
			break;
		}
	}
	return b;
}


void swapBlocks(int bn1,int bn2)
{
	int b1,b2;
	b1=getStatusBlockFrom(bn1);
	b2=getStatusBlockFrom(bn2);
	if(b1==1)
	{
		if(b2==2)
		{
		      //block2(xx1[1],yy1[1],xx2[1],yy2[1],status[2]);
		      //block1(xx1[2],yy1[2],xx2[2],yy2[2],status[1]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
		      //block3(xx1[1],yy1[1],xx2[1],yy2[1],status[3]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
		      //block1(xx1[3],yy1[3],xx2[3],yy2[3],status[1]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			//block4(xx1[1],yy1[1],xx2[1],yy2[1],status[4]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block1(xx1[4],yy1[4],xx2[4],yy2[4],status[1]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			//block5(xx1[1],yy1[1],xx2[1],yy2[1],status[5]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block1(xx1[5],yy1[5],xx2[5],yy2[5],status[1]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			//block6(xx1[1],yy1[1],xx2[1],yy2[1],status[6]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
		       //block1(xx1[6],yy1[6],xx2[6],yy2[6],status[1]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
		  //	block7(xx1[1],yy1[1],xx2[1],yy2[1],status[7]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

		    //	block1(xx1[7],yy1[7],xx2[7],yy2[7],status[1]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			//block1(xx1[1],yy1[1],xx2[1],yy2[1],status[8]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			//block1(xx1[1],yy1[1],xx2[1],yy2[1],status[9]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
	}
	else if(b1==2)
	{
		if(b2==1)
		{
			//block2(xx1[1],yy1[1],xx2[1],yy2[1],status[2]);
			//block1(xx1[2],yy1[2],xx2[2],yy2[2],status[1]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block3(xx1[2],yy1[2],xx2[2],yy2[2],status[3]);
			//block2(xx1[3],yy1[3],xx2[3],yy2[3],status[2]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);


			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block4(xx1[2],yy1[2],xx2[2],yy2[2],status[4]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block2(xx1[4],yy1[4],xx2[4],yy2[4],status[2]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block1(xx1[2],yy1[2],xx2[2],yy2[2],status[5]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
		       //block5(xx1[2],yy1[5],xx2[5],yy2[5],status[2]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block6(xx1[2],yy1[2],xx2[2],yy2[2],status[6]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block2(xx1[6],yy1[6],xx2[6],yy2[6],status[2]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block7(xx1[2],yy1[2],xx2[2],yy2[2],status[7]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block2(xx1[7],yy1[7],xx2[7],yy2[7],status[2]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block8(xx1[2],yy1[2],xx2[2],yy2[2],status[8]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block9(xx1[2],yy1[2],xx2[2],yy2[2],status[9]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}

	}
	else if(b1==3)
	{

		if(b2==1)
		{
			//block3(xx1[1],yy1[1],xx2[1],yy2[1],status[3]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block1(xx1[3],yy1[3],xx2[3],yy2[3],status[1]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block3(xx1[2],yy1[2],xx2[2],yy2[2],status[3]);
			//block2(xx1[3],yy1[3],xx2[3],yy2[3],status[2]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
		       //block4(xx1[3],yy1[3],xx2[3],yy2[3],status[4]);
			//block3(xx1[4],yy1[4],xx2[4],yy2[4],status[3]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block5(xx1[3],yy1[3],xx2[3],yy2[3],status[5]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block3(xx1[5],yy1[5],xx2[5],yy2[5],status[3]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block6(xx1[3],yy1[3],xx2[3],yy2[3],status[6]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block3(xx1[6],yy1[6],xx2[6],yy2[6],status[3]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block7(xx1[3],yy1[3],xx2[3],yy2[3],status[7]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block3(xx1[7],yy1[7],xx2[7],yy2[7],status[3]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			///block8(xx1[3],yy1[3],xx2[3],yy2[3],status[8]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block9(xx1[3],yy1[3],xx2[3],yy2[3],status[9]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
	}
	else if(b1==4)
	{

		if(b2==1)
		{
			//block4(xx1[1],yy1[1],xx2[1],yy2[1],status[4]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block1(xx1[4],yy1[4],xx2[4],yy2[4],status[1]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block4(xx1[2],yy1[2],xx2[2],yy2[2],status[4]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block2(xx1[4],yy1[4],xx2[4],yy2[4],status[2]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block4(xx1[3],yy1[3],xx2[3],yy2[3],status[4]);

			//block3(xx1[4],yy1[4],xx2[4],yy2[4],status[3]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block5(xx1[4],yy1[4],xx2[4],yy2[4],status[5]);
			//block4(xx1[5],yy1[5],xx2[5],yy2[5],status[4]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block6(xx1[4],yy1[4],xx2[4],yy2[4],status[6]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block4(xx1[6],yy1[6],xx2[6],yy2[6],status[4]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block7(xx1[4],yy1[4],xx2[4],yy2[4],status[7]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block4(xx1[7],yy1[7],xx2[7],yy2[7],status[4]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block8(xx1[4],yy1[4],xx2[4],yy2[4],status[8]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block9(xx1[4],yy1[4],xx2[4],yy2[4],status[9]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[9],yy1[9],xx2[9],yy2[9],status[8]);
			//block4(xx1[8],yy1[8],xx2[8],yy2[8],status[4]);
		}
	}
	else if(b1==5)
	{

		if(b2==1)
		{
			//block5(xx1[1],yy1[1],xx2[1],yy2[1],status[5]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block5(xx1[1],yy1[5],xx2[5],yy2[5],status[1]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block5(xx1[2],yy1[2],xx2[2],yy2[2],status[5]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block2(xx1[5],yy1[5],xx2[5],yy2[5],status[2]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block5(xx1[3],yy1[3],xx2[3],yy2[3],status[5]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block3(xx1[5],yy1[5],xx2[5],yy2[5],status[3]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block5(xx1[4],yy1[4],xx2[4],yy2[4],status[5]);
			//block4(xx1[5],yy1[5],xx2[5],yy2[5],status[4]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block6(xx1[5],yy1[5],xx2[5],yy2[5],status[6]);
			//block5(xx1[6],yy1[6],xx2[6],yy2[6],status[5]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block7(xx1[5],yy1[5],xx2[5],yy2[5],status[7]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block5(xx1[7],yy1[7],xx2[7],yy2[7],status[5]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block8(xx1[5],yy1[5],xx2[5],yy2[5],status[8]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			///block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block9(xx1[5],yy1[5],xx2[5],yy2[5],status[9]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
	}
	else if(b1==6)
	{

		if(b2==1)
		{
			//block6(xx1[1],yy1[1],xx2[1],yy2[1],status[6]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block1(xx1[6],yy1[6],xx2[6],yy2[6],status[1]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block6(xx1[2],yy1[2],xx2[2],yy2[2],status[6]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block2(xx1[6],yy1[6],xx2[6],yy2[6],status[2]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block6(xx1[3],yy1[3],xx2[3],yy2[3],status[6]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block3(xx1[6],yy1[6],xx2[6],yy2[6],status[3]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block6(xx1[4],yy1[4],xx2[4],yy2[4],status[6]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block4(xx1[6],yy1[6],xx2[6],yy2[6],status[4]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block6(xx1[5],yy1[5],xx2[5],yy2[5],status[6]);
			//block5(xx1[6],yy1[6],xx2[6],yy2[6],status[5]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block7(xx1[6],yy1[6],xx2[6],yy2[6],status[7]);

			//block6(xx1[7],yy1[7],xx2[7],yy2[7],status[6]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block8(xx1[6],yy1[6],xx2[6],yy2[6],status[8]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);



			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block9(xx1[6],yy1[6],xx2[6],yy2[6],status[9]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
	}
	else if(b1==7)
	{

		if(b2==1)
		{
			//block7(xx1[1],yy1[1],xx2[1],yy2[1],status[7]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block1(xx1[7],yy1[7],xx2[7],yy2[7],status[1]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block7(xx1[2],yy1[2],xx2[2],yy2[2],status[7]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block2(xx1[7],yy1[7],xx2[7],yy2[7],status[2]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block7(xx1[3],yy1[3],xx2[3],yy2[3],status[7]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block3(xx1[7],yy1[7],xx2[7],yy2[7],status[3]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block7(xx1[4],yy1[4],xx2[4],yy2[4],status[7]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block4(xx1[7],yy1[7],xx2[7],yy2[7],status[4]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block7(xx1[5],yy1[5],xx2[5],yy2[5],status[7]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block5(xx1[7],yy1[7],xx2[7],yy2[7],status[5]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block7(xx1[6],yy1[6],xx2[6],yy2[6],status[7]);

			//block6(xx1[7],yy1[7],xx2[7],yy2[7],status[6]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}

		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block7(xx1[7],yy1[7],xx2[7],yy2[7],status[8]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block7(xx1[7],yy1[7],xx2[7],yy2[7],status[9]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}

	}
	else if(b1==8)
	{

		if(b2==1)
		{
			//block8(xx1[1],yy1[1],xx2[1],yy2[1],status[8]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block8(xx1[2],yy1[2],xx2[2],yy2[2],status[8]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block3(xx1[3],yy1[3],xx2[3],yy2[3],status[8]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block4(xx1[4],yy1[4],xx2[4],yy2[4],status[8]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);

			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block5(xx1[5],yy1[5],xx2[5],yy2[5],status[8]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}

		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block6(xx1[6],yy1[6],xx2[6],yy2[6],status[8]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block7(xx1[7],yy1[7],xx2[7],yy2[7],status[8]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==9)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
		}
	}
	else if(b1==9)
	{

		if(b2==1)
		{
			//block9(xx1[1],yy1[1],xx2[1],yy2[1],status[9]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==2)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			//block9(xx1[2],yy1[2],xx2[2],yy2[2],status[9]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==3)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			//block9(xx1[3],yy1[3],xx2[3],yy2[3],status[9]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==4)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			//block9(xx1[4],yy1[4],xx2[4],yy2[4],status[9]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==5)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			//block9(xx1[5],yy1[5],xx2[5],yy2[5],status[9]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==6)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			//block9(xx1[6],yy1[6],xx2[6],yy2[6],status[9]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==7)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			//block9(xx1[7],yy1[7],xx2[7],yy2[7],status[9]);
			block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
		else if(b2==8)
		{
			block1(xx1[1],yy1[1],xx2[1],yy2[1],status[1]);
			block2(xx1[2],yy1[2],xx2[2],yy2[2],status[2]);
			block3(xx1[3],yy1[3],xx2[3],yy2[3],status[3]);

			block4(xx1[4],yy1[4],xx2[4],yy2[4],status[4]);
			block5(xx1[5],yy1[5],xx2[5],yy2[5],status[5]);
			block6(xx1[6],yy1[6],xx2[6],yy2[6],status[6]);

			block7(xx1[7],yy1[7],xx2[7],yy2[7],status[7]);
			//block8(xx1[8],yy1[8],xx2[8],yy2[8],status[8]);
			//block9(xx1[9],yy1[9],xx2[9],yy2[9],status[9]);
		}
	}

}


void printBlocks(int st,int xx1,int yy1,int xx2,int yy2,int to_stat)
{
	if(st==1)
	{
		block1(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==2)
	{
		block2(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==3)
	{
		block3(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==4)
	{
		block4(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==5)
	{
		block5(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==6)
	{
		block6(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==7)
	{
		block7(xx1,yy1,xx2,yy2,to_stat);
	}

	else if(st==8)
	{
		block8(xx1,yy1,xx2,yy2,to_stat);
	}
	else if(st==9)
	{
		block9(xx1,yy1,xx2,yy2,to_stat);
	}
}


void checkResult()
{
	if(status[1]==1 && status[2]==2 && status[3]==3 && status[4]==4)
	{
		if(status[5]==5 && status[6]==6 && status[7]==7 && status[8]==8)
		{
			if(status[9]==9) // For blank block
			{

				block1(b1x[1],b1y[1],b1x[2],b1y[2],1);
				block2(b2x[1],b2y[1],b2x[2],b2y[2],2);
				block3(b3x[1],b3y[1],b3x[2],b3y[2],3);

				block4(b4x[1],b4y[1],b4x[2],b4y[2],4);
				block5(b5x[1],b5y[1],b5x[2],b5y[2],5);
				block6(b6x[1],b6y[1],b6x[2],b6y[2],6);

				block7(b7x[1],b7y[1],b7x[2],b7y[2],7);
				block8(b8x[1],b8y[1],b8x[2],b8y[2],8);
				block9(b9x[1],b9y[1],b9x[2],b9y[2],9);

			       //Win Message

				settextstyle(7,0,4);
				setcolor(YELLOW);
				char arr[10];
				sprintf(arr,"%s",name);
				outtextxy(10,4,"Congratulation ,");
				outtextxy(430,4,"You Win . . .!");
				outtextxy(285,4,arr);
				setcolor(WHITE);
			}
		}
	}
}


void DM()
{
	int b1,b2,st;
	int arrow;
	while(1)
	{
		rectangle(0,0,639,479);
		setfillstyle(HATCH_FILL,MAGENTA);
		floodfill(10,10,WHITE);

		settextstyle(7,0,3);
		outtextxy(0,120,"Press Esc:");

		setcolor(YELLOW);
		settextstyle(1,0,6);
		outtextxy(10,150,"Exit");

		setcolor(WHITE);

		checkResult();
		arrow=getch();
//		printf("\n%d",arrow);
		if(status[9]==1)
		{
			if(arrow==LEFT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(2);
				swapBlocks(1,2);
				printBlocks(st,b1x[1],b1y[1],b1x[2],b1y[2],1);
				blankBlock(b2x[1],b2y[1],b2x[2],b2y[2],2);
			}
			else if(arrow==UP_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(4);
				swapBlocks(1,4);
				printBlocks(st,b1x[1],b1y[1],b1x[2],b1y[2],1);
				blankBlock(b4x[1],b4y[1],b4x[2],b4y[2],4);
			}
		}
		else if(status[9]==2)
		{
			if(arrow==LEFT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(3);
				swapBlocks(2,3);
				printBlocks(st,b2x[1],b2y[1],b2x[2],b2y[2],2);
				blankBlock(b3x[1],b3y[1],b3x[2],b3y[2],3);
			}
			else if(arrow==RIGHT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(1);
				swapBlocks(2,1);
				printBlocks(st,b2x[1],b2y[1],b2x[2],b2y[2],2);
				blankBlock(b1x[1],b1y[1],b1x[2],b1y[2],1);
			}
			else if(arrow==UP_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(5);
				swapBlocks(2,5);
				printBlocks(st,b2x[1],b2y[1],b2x[2],b2y[2],2);
				blankBlock(b5x[1],b5y[1],b5x[2],b5y[2],5);
			}
		}
		else if(status[9]==3)
		{
			if(arrow==RIGHT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(2);
				swapBlocks(3,2);
				printBlocks(st,b3x[1],b3y[1],b3x[2],b3y[2],3);
				blankBlock(b2x[1],b2y[1],b2x[2],b2y[2],2);
			}
			else if(arrow==UP_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(6);
				swapBlocks(3,6);
				printBlocks(st,b3x[1],b3y[1],b3x[2],b3y[2],3);
				blankBlock(b6x[1],b6y[1],b6x[2],b6y[2],6);
			}
		}
		else if(status[9]==4)
		{
			if(arrow==LEFT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(5);
				swapBlocks(4,5);
				printBlocks(st,b4x[1],b4y[1],b4x[2],b4y[2],4);
				blankBlock(b5x[1],b5y[1],b5x[2],b5y[2],5);

			}
			else if(arrow==DOWN_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(1);
				swapBlocks(4,1);
				printBlocks(st,b4x[1],b4y[1],b4x[2],b4y[2],4);
				blankBlock(b1x[1],b1y[1],b1x[2],b1y[2],1);

			}
			else if(arrow==UP_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(7);
				swapBlocks(4,7);
				printBlocks(st,b4x[1],b4y[1],b4x[2],b4y[2],4);
				blankBlock(b7x[1],b7y[1],b7x[2],b7y[2],7);
			}
		}
		else if(status[9]==5)
		{
			if(arrow==LEFT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(6);
				swapBlocks(5,6);
				printBlocks(st,b5x[1],b5y[1],b5x[2],b5y[2],5);
				blankBlock(b6x[1],b6y[1],b6x[2],b6y[2],6);
			}
			else if(arrow==RIGHT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(4);
				swapBlocks(5,4);
				printBlocks(st,b5x[1],b5y[1],b5x[2],b5y[2],5);
				blankBlock(b4x[1],b4y[1],b4x[2],b4y[2],4);
			}
			else if(arrow==UP_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(8);
				swapBlocks(5,8);
				printBlocks(st,b5x[1],b5y[1],b5x[2],b5y[2],5);
				blankBlock(b8x[1],b8y[1],b8x[2],b8y[2],8);
			}
			else if(arrow==DOWN_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(2);
				swapBlocks(5,2);
				printBlocks(st,b5x[1],b5y[1],b5x[2],b5y[2],5);
				blankBlock(b2x[1],b2y[1],b2x[2],b2y[2],2);
			}
		}
		else if(status[9]==6)
		{
			if(arrow==RIGHT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(5);
				swapBlocks(6,5);
				printBlocks(st,b6x[1],b6y[1],b6x[2],b6y[2],6);
				blankBlock(b5x[1],b5y[1],b5x[2],b5y[2],5);
			}
			else if(arrow==DOWN_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(3);
				swapBlocks(6,3);
				printBlocks(st,b6x[1],b6y[1],b6x[2],b6y[2],6);
				blankBlock(b3x[1],b3y[1],b3x[2],b3y[2],3);
			}
			else if(arrow==UP_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(9);
				swapBlocks(6,9);
				printBlocks(st,b6x[1],b6y[1],b6x[2],b6y[2],6);
				blankBlock(b9x[1],b9y[1],b9x[2],b9y[2],9);
			}
		}
		else if(status[9]==7)
		{
			if(arrow==LEFT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(8);
				swapBlocks(7,8);
				printBlocks(st,b7x[1],b7y[1],b7x[2],b7y[2],7);
				blankBlock(b8x[1],b8y[1],b8x[2],b8y[2],8);
			}
			else if(arrow==DOWN_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(4);
				swapBlocks(7,4);
				printBlocks(st,b7x[1],b7y[1],b7x[2],b7y[2],7);
				blankBlock(b4x[1],b4y[1],b4x[2],b4y[2],4);
			}
		}
		else if(status[9]==8)
		{
			if(arrow==LEFT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(9);
				swapBlocks(8,9);
				printBlocks(st,b8x[1],b8y[1],b8x[2],b8y[2],8);
				blankBlock(b9x[1],b9y[1],b9x[2],b9y[2],9);
			}
			else if(arrow==RIGHT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(7);

				swapBlocks(8,7);
				printBlocks(st,b8x[1],b8y[1],b8x[2],b8y[2],8);
				blankBlock(b7x[1],b7y[1],b7x[2],b7y[2],7);
			}
			else if(arrow==DOWN_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(5);
				swapBlocks(5,8);
				printBlocks(st,b8x[1],b8y[1],b8x[2],b8y[2],8);
				blankBlock(b5x[1],b5y[1],b5x[2],b5y[2],5);
			}
		}
		else if(status[9]==9)
		{
			if(arrow==RIGHT_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(8);
				swapBlocks(9,8);
				printBlocks(st,b9x[1],b9y[1],b9x[2],b9y[2],9);
				blankBlock(b8x[1],b8y[1],b8x[2],b8y[2],8);
			}
			else if(arrow==DOWN_ARROW)
			{
				cleardevice();
				st=getStatusBlockFrom(6);
				swapBlocks(9,6);
				printBlocks(st,b9x[1],b9y[1],b9x[2],b9y[2],9);
				blankBlock(b6x[1],b6y[1],b6x[2],b6y[2],6);
			}
		}
		if(arrow==ESCAPE)
		{
			getch();
			exit(1);
		}
	}
}

void drawBySelection(char  sel)
{
	if(sel=='1')
	{
		block1(b1x[1],b1y[1],b1x[2],b1y[2],1);
		block2(b2x[1],b2y[1],b2x[2],b2y[2],2);
		block3(b3x[1],b3y[1],b3x[2],b3y[2],3);

		block4(b4x[1],b4y[1],b4x[2],b4y[2],4);
		block6(b5x[1],b5y[1],b5x[2],b5y[2],5);
		blankBlock(b6x[1],b6y[1],b6x[2],b6y[2],6);

		block7(b7x[1],b7y[1],b7x[2],b7y[2],7);
		block5(b8x[1],b8y[1],b8x[2],b8y[2],8);
		block8(b9x[1],b9y[1],b9x[2],b9y[2],9);
	}
	else if(sel=='2')
	{
		block1(b1x[1],b1y[1],b1x[2],b1y[2],1);
		block2(b2x[1],b2y[1],b2x[2],b2y[2],2);
		block3(b3x[1],b3y[1],b3x[2],b3y[2],3);

		block7(b4x[1],b4y[1],b4x[2],b4y[2],4);
		block6(b5x[1],b5y[1],b5x[2],b5y[2],5);
		block5(b6x[1],b6y[1],b6x[2],b6y[2],6);

		block4(b7x[1],b7y[1],b7x[2],b7y[2],7);
		blankBlock(b8x[1],b8y[1],b8x[2],b8y[2],8);
		block8(b9x[1],b9y[1],b9x[2],b9y[2],9);
	}
	else if(sel=='3')
	{
		block2(b1x[1],b1y[1],b1x[2],b1y[2],1);
		block4(b2x[1],b2y[1],b2x[2],b2y[2],2);
		block8(b3x[1],b3y[1],b3x[2],b3y[2],3);

		blankBlock(b4x[1],b4y[1],b4x[2],b4y[2],4);
		block6(b5x[1],b5y[1],b5x[2],b5y[2],5);
		block7(b6x[1],b6y[1],b6x[2],b6y[2],6);

		block5(b7x[1],b7y[1],b7x[2],b7y[2],7);
		block3(b8x[1],b8y[1],b8x[2],b8y[2],8);
		block1(b9x[1],b9y[1],b9x[2],b9y[2],9);
	}
	else if(sel=='4')
	{
		block2(b1x[1],b1y[1],b1x[2],b1y[2],1);
		block4(b2x[1],b2y[1],b2x[2],b2y[2],2);
		block8(b3x[1],b3y[1],b3x[2],b3y[2],3);

		block3(b4x[1],b4y[1],b4x[2],b4y[2],4);
		block6(b5x[1],b5y[1],b5x[2],b5y[2],5);
		block5(b6x[1],b6y[1],b6x[2],b6y[2],6);

		blankBlock(b7x[1],b7y[1],b7x[2],b7y[2],7);
		block7(b8x[1],b8y[1],b8x[2],b8y[2],8);
		block1(b9x[1],b9y[1],b9x[2],b9y[2],9);
	}

}


void selectLevel()
{
	cleardevice();

	setfillstyle(XHATCH_FILL,BLUE);
	rectangle(10,10,630,470);
	floodfill(120,130,WHITE);

	setcolor(RED);
	settextstyle(7,0,5);
	outtextxy(30,50," 1  : Very Easy");
	outtextxy(30,150," 2  : Easy");
	outtextxy(30,250," 3  : Hard");
	outtextxy(30,350," 4  : Very Hard");

	char ch=getch();
	cleardevice();
	setcolor(WHITE);
	setbkcolor(BLACK);
	drawBySelection(ch);
}

void page2()
{
	cleardevice();
	setfillstyle(LINE_FILL,RED);
	rectangle(10,10,630,470);
	floodfill(120,130,WHITE);

	setcolor(YELLOW);
	settextstyle(7,0,5);
	outtextxy(30,50," S   : Select Level");
	outtextxy(30,150," H   : Help");
	outtextxy(30,250," A   : About Us");
	outtextxy(30,350," Esc : Exit");
	char ch=getch();
	if(ch=='S' || ch=='s' )
	{
		selectLevel();
	}
	else if(ch=='H' || ch=='h')
	{
		help();
	}
	else if(ch=='A' || ch=='a')
	{
	       about_us();
	}
	else  if(ch==ESCAPE)
	{
		getch();
		exit(0);
	}
}


void load()
{
	  cleardevice();
	  rectangle(10,10,630,470);

	  int midx=getmaxx()/2;
	  int midy=getmaxy()/2;

	  setcolor(YELLOW);
	  settextstyle(5,0,8);
	  outtextxy(100,40,"Please Wait");
	  settextstyle(4,0,8);
	  setcolor(MAGENTA);
	  outtextxy(160,190,"Loading..! ");

	  for(int p=1; p<=6; p++)
	  {
		for(int j=-90; j<=90; j=j+30)
		{

			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,YELLOW);

			circle(midx+j,midy+100,10);
			circle(midx+j,midy+100,12);
			floodfill(midx+j,midy+100,YELLOW);

			setcolor(BLACK);

			setfillstyle(SOLID_FILL,BLACK);
			delay(100);
			floodfill(midx+j,midy+100,BLACK);
		}
	  }

	  cleardevice();
	  setcolor(WHITE);
	  page2();
	  DM();
}

void page1()
{
	  settextstyle(3,0,3);
	  setfillstyle(10,LIGHTRED);
	  rectangle(8,10,637,470);
	  rectangle(220,170,600,220);
	  rectangle(220,270,600,320);
	  floodfill(120,130,WHITE);

	  setcolor(YELLOW);
	  settextstyle(10,0,1);
	  outtextxy(10,50,"* WEL-COME TO DOREMON PUZZLE GAME *");

	  setcolor(GREEN);
	  settextstyle(7,0,1);
	  outtextxy(20,180,"Enter Player Name: ");
	  outtextxy(20,280,"Enter PIN of Game:");

	  char ch;
	  char arr[20];
	  int i=0;
	  int x=300;
	  while(1)
	  {
		ch=getch();
		if(ch==ENTER)
		{
			name[i]='\0';
			break;
		}
		else
		{
			name[i]=ch;
			i++;
			sprintf(arr,"%c",ch);
			outtextxy(x,180,arr);
			x=x+15;

		}
	  }
	  x=300;
	  char pass[10];
	  i=0;
	  while(1)
	  {
		ch=getch();
		if(ch==ENTER)
		{
			pass[i]='\0';
			break;
		}
		else
		{
			pass[i]=ch;
			outtextxy(x,280,"*");
			i++;
			x=x+15;
		}
	  }

	  if(!strcmp("sawant",pass))
	  {
		load();
	  }
	  else
	  {
		setcolor(YELLOW);
		outtextxy(200,400,"Enter Correct Game PIN");
		getch();
		exit(0);
	  }
}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	page1();
	getch();
	closegraph();
}
