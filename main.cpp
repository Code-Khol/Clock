#include <iostream>
#include <graphics.h>
#include <math.h>
#include <conio.h>

using namespace std;

int x[5] , y[5];

int main()
{
	system("color 2");
	initwindow(510 , 510 , "Code Khol");
	
	int h1=0,m1=0,s1=0;
	
	void base();
	
	x[2] = 250; y[2] = 110;
	x[3] = 250; y[3] = 150;
	
	for(int h = 300 ; h<=1000 ; h++)
	{
		for(int m = 276 ; m<=630 ; m+=6)
		{
			for(int s = 276 ; s<=630 ; s+=6)
			{
				
				system("cls");
				cout<<h1<<":"<<m1<<":"<<s1<<endl;
				s1++;
				
				if(s1 == 60)
					s1 = 0;
				else if(m1 == 60)
					m1 = 0;
				
				delay(0);
				cleardevice();
			
				base();	
				
				x[1] = 250 + 170*cos(3.1415*s/180);
				y[1] = 250 + 170*sin(3.1415*s/180);
				setcolor(GREEN);
				line(250 , 250 , x[1] , y[1]);
				setcolor(BLUE);
				line(250 , 250 , x[2] , y[2]);
				setcolor(WHITE);
				line(250 , 250 , x[3] , y[3]);
			}
			m1++;
			x[2] = 250 + 140*cos(3.1415*m/180);
			y[2] = 250 + 140*sin(3.1415*m/180);
		}
		h1++;
		x[3] = 250 + 100*cos(3.1415*h/180);
		y[3] = 250 + 100*sin(3.1415*h/180);
	}
	
	system("pause>0");	
}

//----------functions----------

void base()
{
	for(int i=270 ; i<=630 ; i+=30)
	{
		setcolor(BROWN);
		circle(250 , 250 , 250);
		circle(250 , 250 , 5);
		x[0] = 250 + 230*cos(3.1415*i/180);
		y[0] = 250 + 230*sin(3.1415*i/180);
		settextstyle(2 , 0 , 5);
		outtextxy(x[0] , y[0] , "I");
	}
}