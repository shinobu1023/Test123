#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    int time1=0;
    clock_t start,end;
    
    srand( time( 0 ) );
    
    start=clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 10 );
      system("cls");  
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
      time1++;
   }
   end=clock();
   if(tortoise==70)
   	cout<<"t win"<<endl;
	else
		cout<<"r win"<<endl;	
   cout<<(end-start)/1000<<endl;
   
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i=1;i<=7;i++){
		for(int j=1;j<=10;j++)
			if(j==10)
				cout<<"|";
			else
				cout<<"-";	
	}
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}

/*移動烏龜*/
void moveTortoise( int * const turtlePtr )
{
	int a=rand();
	int b=a%10;
	if(b<=4)
		*turtlePtr+=3;
	else if(b==5||b==6)
		*turtlePtr-=6;
	else if(b>=7)
		*turtlePtr+=1;
		
	if(*turtlePtr<0)
		*turtlePtr=0;
	if(*turtlePtr>70)
		*turtlePtr=70;

}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
	int a=rand();
	int b=a%10;
	if(b==2||b==3)
		*rabbitPtr+=9;
	else if(b==4)
		*rabbitPtr-=12;
	else if(b==5||b==6||b==7)
		*rabbitPtr+=1;
	else if(b==8||b==9)
		*rabbitPtr-=2;
				
	if(*rabbitPtr<0)
		*rabbitPtr=0;
	if(*rabbitPtr>70)
		*rabbitPtr=70;
	
	
  
}
