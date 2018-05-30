#include <time.h>
#include <stdio.h>
#include <string.h>
#include <graphics.h>

void display(int[]);

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm," ");
   
    long current_time;
    char strtime[30];
   
    time_t start, end;
    double elapsed; 
    start = time(NULL);
    int terminate = 1;

    while(terminate)
    {
    	current_time = time(NULL);
    	strcpy(strtime,ctime(&current_time));
    	
    	end = time(NULL);
        elapsed = difftime(end, start);
        if (elapsed >= 10.0)
        {
            terminate = 0;	
        }
        
   	int h1 = strtime[11] - 48;
    	int h2 = strtime[12] - 48;
    
   	int m1 = strtime[14] - 48;
  	int m2 = strtime[15] - 48;
    
   	int s1 = strtime[17] - 48;
   	int s2 = strtime[18] - 48;
    
  	int h = h1*10 + h2;
 	char meridiem[2];
    	strcpy(meridiem,"AM");
    
   	if(h > 12)
   	{
  		strcpy(meridiem,"PM");;
  	  	h -= 12;
 	}
        
        int a[6];
        a[0] = h1;
        a[1] = h2;
        a[2] = m1;
        a[3] = m2;
        a[4] = s1;
        a[5] = s2;
        
        cleardevice();
        outtextxy(550,150,meridiem);
        outtextxy(237,125,"-");
        outtextxy(237,175,"-");
        
        outtextxy(387,125,"-");
        outtextxy(387,175,"-");
        display(a);
        delay(1000);
    }
    closegraph();
    return 0;
}

void display(int a[])
{
   for(int i=0;i<6;i++)
   {
   	switch(a[i]) 
   	{
   	case 0:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(100+i*75,155,100+i*75,195);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	break;
    	}
    	case 1:
    	{
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
   	break;
   	}
  	case 2:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,155,100+i*75,195);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	case 3:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	case 4:
    	{
    	line(100+i*75,105,100+i*75,145);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	case 5:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	case 6:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(100+i*75,155,100+i*75,195);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	case 7:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	break;
    	}
    	case 8:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(100+i*75,155,100+i*75,195);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
    	case 9:
    	{
    	line(105+i*75,100,145+i*75,100);
    	line(100+i*75,105,100+i*75,145);
    	line(105+i*75,200,145+i*75,200);
    	line(150+i*75,155,150+i*75,195);
    	line(150+i*75,105,150+i*75,145);
    	line(105+i*75,150,145+i*75,150);
    	break;
    	}
   	}
   }
   
}

