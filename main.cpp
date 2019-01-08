/* TERM project BY amirbahador nasari
  31-01-12 13:11 */

#include "graphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define TRUE 1
        
 int mine[9][9];
 
 void counter ( int p , int q){
      settextstyle(2, 0, 4);
      if( mine[p-1][q]==1){
          setcolor(WHITE);
          outtextxy(23*p+2, 23*q+2,"1");}
      if( mine[p+1][q]==1){
          setcolor(WHITE);
          outtextxy(23*p+2, 23*q+2,"1");}
      if( mine[p][q-1]==1){
          setcolor(WHITE);
          outtextxy(23*p+2, 23*q+2,"1");}
      if( mine[p][q+1]==1){
          setcolor(WHITE);
          outtextxy(23*p+2, 23*q+2,"1");}
      if(mine[p-1][q]==1 && mine[p][q-1]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"2");}
      if(mine[p][q-1]==1 && mine[p][q+1]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"2");}
      if(mine[p-1][q]==1 && mine[p][q-1]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"2");}
      if(mine[p+1][q]==1 && mine[p][q+1]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"2");}
      if(mine[p-1][q]==1 && mine[p+1][q]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"2");}
      if(mine[p-1][q]==1 && mine[p][q+1]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"2");}
      if(mine[p][q-1]==1 && mine[p+1][q]==1 && mine[p][q+1]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"3");}
      if(mine[p][q-1]==1 && mine[p+1][q]==1 && mine[p-1][q]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"3");}
      if(mine[p+1][q]==1 && mine[p][q+1]==1 && mine[p-1][q]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"3");}
      if(mine[p][q-1]==1 && mine[p][q+1]==1 && mine[p-1][q]==1){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"3");}
      if(mine[p][q-1]==1 && mine[p+1][q]==1 && mine[p][q+1]==1 && mine[p-1][q]){
           setcolor(WHITE);
           outtextxy(23*p+2, 23*q+2,"4");}                                                                  
      }
 
 void random(void){
      int count=0,a=0,b=0;
      srand(time(0));
      while(count<10){
                      a=rand()%9;
                      b=rand()%9;
                      if(mine[a][b]!=1){
                                        mine[a][b]=1;
                                        count++;
                                        }}
                                        return;
                                        }

 void drawbuttons(void){
      int m,n;
      setfillstyle(SOLID_FILL,LIGHTGRAY);
      for(n=0;n<9;n++){
          for(m=0;m<9;m++){                                                     
              bar( 23*m+2, 23*n+2, 23*m+22, 23*n+22 );}
       }
      return;
      }
      
 void pointerx(int a,int b){
      if(a>=0 && a<=8){
      setfillstyle(SOLID_FILL,DARKGRAY);
      bar( 23*a+2, 23*b+2, 23*a+22, 23*b+22 );
      setfillstyle(SOLID_FILL,LIGHTGRAY);
      bar( 23*(a-1)+2, 23*(b)+2, 23*(a-1)+22, 23*(b)+22 );
      bar( 23*(a+1)+2, 23*(b)+2, 23*(a+1)+22, 23*(b)+22 );}
      
      return;
      } 
 void pointery(int a,int b){
      if(b>=0 && b<=8){
      setfillstyle(SOLID_FILL,DARKGRAY);
      bar( 23*a+2, 23*b+2, 23*a+22, 23*b+22 );
      setfillstyle(SOLID_FILL,LIGHTGRAY);
      bar( 23*(a)+2, 23*(b-1)+2, 23*(a)+22, 23*(b-1)+22 );
      bar( 23*(a)+2, 23*(b+1)+2, 23*(a)+22, 23*(b+1)+22 );}
      
      return;
      }             
   

int main(int argc, char *argv[])
{  
  initwindow(209,209,"Minesweeper");
  setcolor(GREEN);
  outtext("Welcome to Minesweeper GaMe");
  setcolor(WHITE);
  outtextxy(61,70,"1.New Game");
  outtextxy(61,90,"2.Continue");
  outtextxy(61,110,"3.Exit");
  settextstyle(2, 0, 4);
  outtextxy(60,178,"[S=Save] [R=Restart]");
  outtextxy(63,188,"[F=Flag] [U=UnFlag]");
  outtextxy(15,198,"[8=Up] [2=Down] [6=Right] [4=left] [5=Enter]");  
  settextstyle(2, 0, 4);
  setcolor(YELLOW);
  outtextxy(0,15,"design BY:Amirbahador Nasari"); 
  char c;
  while(TRUE){
  c=getch();
  switch(c){
            case'1':{
                     int i=0,j=0,k=0,n=0;    
                     cleardevice();
                     drawbuttons();
                     random(); 
                     pointery(i,j);                       
                     while(TRUE){                    
                     c=getch();  
                     switch(c){
                              case'8':{
                                        if(j>=0){            
                                        j--;
                                        if(j==-1) j++;
                                        pointery(i,j);}
                                        break;}
                            
                               case'6':{
                                        if(i<=8){
                                        i++;
                                        if(i==9) i--;
                                        pointerx(i,j);}
                                        break;}
                                        
                               case'2':{
                                        if(j<=8){
                                        j++;
                                        if(j==9) j--;
                                        pointery(i,j);}
                                        break;}
                                        
                               case'4':{
                                        if(i>=0){
                                        i--;
                                        if(i==-1) i++;
                                        pointerx(i,j);}
                                        break;}
                                        
                             case'5':{
                                      if(mine[i][j]!=1){
                                      setcolor(5177088);
                                      rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);
                                      n++;}
                                     if((i-1>=0 && mine[i-1][j]==1) || (i+1<=9 && mine[i+1][j]==1) ||(j-1>=0 && mine[i][j-1]==1) || (j+1<=9 && mine[i][j+1]==1)){
                                                         setcolor(YELLOW);
                                                         rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);}
                                     counter(i,j);                    
                                      if(n==71){
                                                settextstyle(0, 0, 3);
                                                setcolor(GREEN);
                                                outtextxy(8,92,"You Win!");}
                                      if(mine[i][j]==1){
                                                        int k,l;
                                                        setfillstyle(SOLID_FILL,RED);
                                                        for(l=0;l<9;l++){
                                                           for(k=0;k<9;k++){  
                                                        if(mine[k][l]==1)bar( 23*k+2, 23*l+2, 23*k+22, 23*l+22 ); }}
                                                        settextstyle(0, 0, 3);
                                                        setcolor(RED);
                                                        outtextxy(1,92,"You Lost!");
                                                        printf("\a");
                                                        getch();
                                                        return 0;     
                                                                
                                                                }
                                                               
                                                                   
                                      break;}
                                                        
                                     
                             case'r':{
                                        i=0;
                                        j=0;
                                        k=0;
                                        n=0;  
                                       int p,o;
                                        for(p=0;p<9;p++){
                                            for(o=0;o<9;o++){
                                            mine[o][p]=0;}}              
                                        cleardevice();
                                        drawbuttons();
                                        random(); 
                                        pointery(i,j);
                                        break;
                                        }
                                 case's':{
                                          FILE *save;
                                          if(!(save=fopen("game.dat","wb"))){
                                          printf("cannot save\a");
                                          getch();
                                          exit(1);}
                                          rewind(save);
                                          int s[(imagesize(0,0,209,209))/4];      
                                          getimage(0,0,209,209,s);
                                          fwrite(s,imagesize(0,0,209,209),1,save);
                                          int sij[2],snk[2];
                                          sij[0]=i;
                                          sij[1]=j;
                                          snk[0]=n;
                                          snk[1]=k;
                                          fwrite(sij,sizeof(int),2,save);
                                          fwrite(mine,sizeof(int),81,save);
                                          fwrite(snk,sizeof(int),2,save);
                                          fclose(save);
                                          break;
                                          }                                   
                                          
                                 
                                 case'f':{
                                          if(k<10){
                                          k++;         
                                          setcolor(16776960);
                                          rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);}
                                          break;
                                          }
                                 case'u':{
                                          if(k>0){
                                          k--;         
                                          setcolor(BLACK);
                                          rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);}
                                          break;
                                          }
                                                                 
                                                                }                  

                                 }}
            case '2':{
                 int i=0,j=0,n=0,k=0;
                 cleardevice();
                 FILE *load;
                 if(!(load=fopen("game.dat","rb"))){
                 printf("cannot load\a");
                 getch();
                 exit(1);}
                 rewind(load);
                 int l[(imagesize(0,0,209,209))/4];
                 fread(l,imagesize(0,0,209,209),1,load);
                 putimage(0,0,l,0);
                 int lij[2],lnk[2];
                 fread(lij,sizeof(int),2,load);
                 i=lij[0];
                 j=lij[1];
                 fread(mine,sizeof(int),81,load);
                 fread(lnk,sizeof(int),2,load);
                 n=lnk[0];
                 k=lnk[1];
                 fclose(load);
                 pointery(i,j);
                 while(TRUE){            
                 c=getch();  
                 switch(c){
                          case'8':{
                                  if(j>=0){            
                                  j--;
                                  if(j==-1) j++;
                                  pointery(i,j);}
                                  break;}
                          case'6':{
                                  if(i<=8){
                                  i++;
                                  if(i==9) i--;
                                  pointerx(i,j);}
                                  break;}
                                        
                          case'2':{
                                  if(j<=8){
                                  j++;
                                  if(j==9) j--;
                                  pointery(i,j);}
                                  break;}
                                        
                          case'4':{
                                  if(i>=0){
                                  i--;
                                  if(i==-1) i++;
                                  pointerx(i,j);}
                                  break;} 
                          case'5':{
                                      if(mine[i][j]!=1){
                                      setcolor(5177088);
                                      rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);
                                      n++;}
                                      if((i-1>=0 && mine[i-1][j]==1) || (i+1<=9 && mine[i+1][j]==1) ||(j-1>=0 && mine[i][j-1]==1) || (j+1<=9 && mine[i][j+1]==1)){
                                                         setcolor(YELLOW);
                                                         rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);}
                                      counter(i,j);                   
                                      if(n==71){
                                                settextstyle(0, 0, 3);
                                                setcolor(GREEN);
                                                outtextxy(8,92,"You Win!");}
                                      if(mine[i][j]==1){
                                                        int k,l;
                                                        setfillstyle(SOLID_FILL,RED);
                                                        for(l=0;l<9;l++){
                                                           for(k=0;k<9;k++){  
                                                        if(mine[k][l]==1)bar( 23*k+2, 23*l+2, 23*k+22, 23*l+22 ); }}
                                                        settextstyle(0, 0, 3);
                                                        setcolor(RED);
                                                        outtextxy(1,92,"You Lost!");
                                                        printf("\a");
                                                        getch();
                                                        return 0;     
                                                                
                                                                }
                                                               
                                                                   
                                      break;}
                                                        
                                     
                             case'r':{
                                        i=0;
                                        j=0;
                                        k=0;
                                        n=0;  
                                       int p,o;
                                        for(p=0;p<9;p++){
                                            for(o=0;o<9;o++){
                                            mine[o][p]=0;}}              
                                        cleardevice();
                                        drawbuttons();
                                        random(); 
                                        pointery(i,j);
                                        break;
                                        } 
                                         case's':{
                                          FILE *save;
                                          if(!(save=fopen("game.dat","wb"))){
                                          printf("cannot save\a");
                                          getch();
                                          exit(1);}
                                          rewind(save);
                                          int s[(imagesize(0,0,209,209))/4];      
                                          getimage(0,0,209,209,s);
                                          fwrite(s,imagesize(0,0,209,209),1,save);
                                          int sij[2],snk[2];
                                          sij[0]=i;
                                          sij[1]=j;
                                          snk[0]=n;
                                          snk[1]=k;
                                          fwrite(sij,sizeof(int),2,save);
                                          fwrite(mine,sizeof(int),81,save);
                                          fwrite(snk,sizeof(int),2,save);
                                          fclose(save);
                                          break;
                                          }                                   
                                          
                                 
                                 case'f':{
                                          if(k<10){
                                          k++;         
                                          setcolor(16776960);
                                          rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);}
                                          break;
                                          }
                                 case'u':{
                                          if(k>0){
                                          k--;         
                                          setcolor(BLACK);
                                          rectangle(23*i+1, 23*j+1, 23*i+22, 23*j+22);}
                                          break;
                                          }              
                                       
                 }  }}                   
            case'3':{
                    return 0;
                    }}
                    }
}
