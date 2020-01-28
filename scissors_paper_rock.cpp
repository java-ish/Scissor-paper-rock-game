#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

static int count=0;
static int comp=0;
static char username[100];

int main()
{
	int userinput;
	int randnum;
	int increase;

	cout<<"\nEnter your name:";
	cin.getline(username, 100);
	goto home;

home:

srand (time(0));

while(increase<=10){
	increase=increase+1;
	cout << "\n****************************************";
	cout << "\n*                                      *";     cout<<"\t\t\t\t\t"<<username<<"(Points) = "<<count;
	cout << "\n*                                      *";
	cout << "\n\n*          1.Paper                     *";   cout<<"\t\t\t\t\tComputer(Points) = "<<comp;     
	cout << "\n*                                      *";
	cout << "\n\n*          2.Rock                      *";
	cout << "\n*                                      *";
	cout << "\n\n*          3.Scissors                  *";
	cout << "\n*                                      *";
	cout << "\n\n*          4.Exit                      *";
	cout << "\n*                                      *";
	cout << "\n*                                      *";
	cout << "\n****************************************";

	randnum = (rand() % 3) + 1;

	cout << "\n\nEnter your choice in number:";
	cin >> userinput;

	if ((randnum == 1) && (userinput == 2)
	 || (randnum == 2) && (userinput == 3)
	 || (randnum == 3) && (userinput == 1)) 
	 {
		cout << "\n\n"<<username <<" won.";
		count = count + 5;
		cout << "\n\n---------------------------------------------------------------------------";
		cout<<"\n";
		Sleep(2000);
		goto home;
	}

	else if ((randnum == 1) && (userinput == 3) 
	|| (randnum == 2) && (userinput == 1) 
	|| (randnum == 3) && (userinput == 2))
	 {
		cout << "\n\n"<<username<<" lost.";
		comp=comp+5;
		cout << "\n\n---------------------------------------------------------------------------";
		Sleep(2000);
		cout<<"\n";
		goto home;
	}

	else if ((randnum == 1) && (userinput == 1) 
	|| (randnum == 2) && (userinput == 2) 
	|| (randnum == 3) && (userinput == 3)) 
	{
		cout << "\n\nIt's tie between computer and "<<username<<".";
		count = count + 2;
		comp=comp+2;
		cout << "\n\n---------------------------------------------------------------------------";
		cout<<"\n";
		Sleep(2000);
		goto home;
	}

	else if (userinput == 4) {
		cout<<"\n\nThis game is developed by Manish Acharya.Hope you enjoyed a lot....";
		Sleep(2000);
		cout<<"\n\n";
		return 0;
	}
	else {
		cout << "\n\nPlease, enter correct choice.";
		cout << "\n\n---------------------------------------------------------------------------";
		Sleep(2000);
		goto home;
	}
}
if(comp>count){
	cout<<"\n";
	cout<<"\n\nGame Over!!!";
	cout<<"\n\nComputer won the game by "<<comp-count<<" points.";
}
else if(count>comp){
	cout<<"\n";
	cout<<"\n\nGame Over!!!";
	cout<<"\n\n"<<username<<" won the game by "<<count-comp<<" points.";
}
else{
	cout<<"\n";	
	cout<<"\n\nGame Over!!!";
	cout<<"\n\nIt's tie between computer and "<< username<<".";
	cout<<"\n\n";
}
	return(0);
}
