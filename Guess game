#include<iostream>
#include<ctime>
using namespace std;

int main(){

  // int randomNum;
  // cout<<"enter any number between 1 and 100 \n";
  // cin>>randomNum;

 srand(time(0));
 int randomNum = rand() % 101;

cout << randomNum;       //show me the random number

int urguess = 0;

cout << "Welcome to Guess game!\n"
"we have selected a number between 1 and 100.\n"
"Can you guess it?\n";

while (urguess!=randomNum)    //	Reverse the result, returns false if the result is true   cout "well done"
{
cout<<"your guess : ";
cin>>urguess;
if (urguess<randomNum)
{
cout<< "low try again pls\n";
}
else if(urguess>randomNum)
{
cout<< "High try again pls\n";
}
else 
{
cout<<"well done Boss :"<< randomNum;
}
}
    return 0;
}
