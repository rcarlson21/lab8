#include<iostream>
using namespace std;

int main() {
int number, reverse = 0;
cout<<'\n'<<"Input a Number (maximum 10 digits) to Reverse and press Enter: "<<'\n'<<'\n';
cin>>number;     // Taking Input Number in variable number
cout<<'\n'<<"Reversing number..."<<'\n';

   for(; number!= 0 ;)
   {
      reverse = reverse * 10;
      reverse = reverse + number%10;
      number = number/10;
   }
   cout<<'\n'<<"New Reversed Number is:  "<<reverse<<'\n'<<'\n';
   return 0;
}

