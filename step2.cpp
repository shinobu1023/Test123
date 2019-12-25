#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );


int main()
{
    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 500 );
      system("cls");    
      moveTortoise( &tortoise );
      printCurrentPositions( &tortoise, &hare );
   }
}

/*�L�X�Q�t�P�ߤl��m*/
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

/*���ʯQ�t*/
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
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
	
	
	

