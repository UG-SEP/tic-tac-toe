#include<stdio.h>
#include<graphics.h>

void display_game(void);
main()
{    char choice;
     int gd=0,gm;
    initgraph(&gd,&gm,"");
    while(1){

    display_game();
    clearviewport();
    outtextxy(150,200,"PRESS A FOR EXIT ");
    choice=getch();
    if(choice=='a'||choice=='A')
        exit(0);
    }
    closegraph();
}
void display_game(void)
{
 clearviewport();
 char tic[3][3];
 int choice,i=3;
  setcolor(9);
  setlinestyle(SOLID_LINE,4,THICK_WIDTH);
 line(200,100,200,300);
 line(350,100,350,300);
 line(120,160,420,160);
 line(120,250,420,250);
 settextstyle(BOLD_FONT,HORIZ_DIR,3);
 outtextxy(0,350,"PLAYER 1:- X");
 outtextxy(0,400,"PLAYER 2:- 0");
 outtextxy(0,440,"PLAYER 1:- ENTER THE NUMBER");
 display:
 while(i!=12)
 { if(i%2!=0){ game:
 choice=getch();
 switch(choice)
 {   case '1':
     tic[0][0]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(150,120,"X");
    break;
 case '2':
     tic[0][1]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(260,120,"X");
     break;
 case '3':
    tic[0][2]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(370,120,"X");
     break;
 case'4':
    tic[1][0]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(150,200,"X");
     break;
 case '5':
    tic[1][1]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(260,200,"X");
     break;
 case'6':
    tic[1][2]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(370,200,"X");
     break;
 case'7':
    tic[2][0]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(150,280,"X");
     break;
 case'8':
    tic[2][1]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(260,280,"X");
     break;
 case'9':
    tic[2][2]='x';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(370,280,"X");
     break;
 default:
        outtextxy(100,380,"invalid key enter again");
        goto game;
 }
     if(i>=7)
     {
	 if(tic[0][0]=='x'&&tic[0][1]=='x'&&tic[0][2]=='x'){
	    outtextxy(10,50,"PLAYER 1 WIN-:X");
	    i=12;
	    getch();
    goto display;
	    }
	else if(tic[1][0]=='x'&&tic[1][1]=='x'&&tic[1][2]=='x')
	     outtextxy(10,50,"PLAYER 1 WIN-:X");
	    else if(tic[2][0]=='x'&&tic[2][1]=='x'&&tic[2][2]=='x')
	      outtextxy(10,50,"PLAYER 1 WIN-:X");
	     else if(tic[0][0]=='x'&&tic[1][0]=='x'&&tic[2][0]=='x')
	      outtextxy(10,50,"PLAYER 1 WIN-:X");
	 else if(tic[0][1]=='x'&&tic[1][1]=='x'&&tic[2][1]=='x')
		outtextxy(10,50,"PLAYER 1 WIN-:X");
	     else if(tic[0][2]=='x'&&tic[1][2]=='x'&&tic[2][2]=='x')
	       outtextxy(10,50,"PLAYER 1 WIN-:X");
	      else if(tic[0][0]=='x'&&tic[1][1]=='x'&&tic[2][2]=='x')
	       outtextxy(10,50,"PLAYER 1 WIN-:X");
	      else if  (tic[0][2]=='x'&&tic[1][1]=='x'&&tic[2][0]=='x')
		outtextxy(10,50,"PLAYER 1 WIN-:X");
} }i++;
if(i%2==0)
{   go:
    choice=getch();
 switch(choice)
 {   case '1':
     tic[0][0]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(150,120,"0");
     break;
 case '2':
     tic[0][1]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(260,120,"0");
     break;
 case '3':
    tic[0][2]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(370,120,"0");
     break;
 case'4':
    tic[1][0]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(150,200,"0");
     break;
 case '5':
    tic[1][1]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(260,200,"0");
     break;
 case'6':
    tic[1][2]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(370,200,"0");
     break;
 case'7':
    tic[2][0]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(150,280,"0");
     break;
 case'8':
    tic[2][1]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(260,280,"0");
     break;
 case'9':
    tic[2][2]='y';
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
     outtextxy(370,280,"0");
     break;
 default:
       outtextxy(100,380,"invalid key enter again");
       goto go;
 }
  if(i>=7)
     {
		  if(tic[0][0]=='y'&&tic[0][1]=='y'&&tic[0][2]=='y')
	    outtextxy(10,50,"PLAYER 2 WIN-:0");
	else if(tic[1][0]=='y'&&tic[1][1]=='y'&&tic[1][2]=='y')
	     outtextxy(10,50,"PLAYER 2 WIN-:0");
	    else if(tic[2][0]=='y'&&tic[2][1]=='y'&&tic[2][2]=='y')
	      outtextxy(10,50,"PLAYER 2 WIN-:0");
	     else if(tic[0][0]=='y'&&tic[1][0]=='y'&&tic[2][0]=='y')
	      outtextxy(10,50,"PLAYER 2 WIN-:0");
	     else if(tic[0][1]=='y'&&tic[1][1]=='y'&&tic[2][1]=='y')
		outtextxy(10,50,"PLAYER 2 WIN-:0");
	      else if(tic[0][2]=='y'&&tic[1][2]=='y'&&tic[2][2]=='y')
	       outtextxy(10,50,"PLAYER 2 WIN-:0");
	      else if(tic[0][0]=='y'&&tic[1][1]=='y'&&tic[2][2]=='y')
	       outtextxy(10,50,"PLAYER 2 WIN-:0");
	      else if(tic[0][2]=='y'&&tic[1][1]=='y'&&tic[2][0]=='y')
		outtextxy(10,50,"PLAYER 2 WIN-:0");
		}
}
}i++;
}
