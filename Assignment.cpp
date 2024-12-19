// Write a program to count the minimum number of notes in a given amount using the switch statement.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter you amount = ";
    cin>>n;
    int n1=0, n2=0, n5=0, n10=0, n20=0, n50=0, n100=0, n200=0, n500=0, n2000;
    
    switch (1){
    case 1:
        n2000= n/2000;
        n-=(2000*n2000);
    

    case 2:
        n500= n/500;
        n-=(500*n500);
    

    case 3:
        n200= n/200;
        n-=(200*n200);
    

    case 4:
        n100= n/100;
        n-=(100*n100);
    
    case 5:
        n50= n/50;
        n-=(50*n50);


    case 6:
        n20= n/20;
        n-=(20*n20);
    

    case 7:
        n10= n/10;
        n-=(10*n10);
    

    case 8:
        n5= n/5;
        n-=(5*n5);
    

    case 9:
        n2= n/2;
        n-=(2*n2);
    

    case 10:
        n1= n/1;
        n-=(1*n1);
    }

    int totalnotes = n1+n2+n5+n10+n20+n50+n100+n200+n500+n2000;
    cout<<"Number of notes = "<<totalnotes;
}


// Predict the output:
#include<iostream>
using namespace std;
int main( ) {
int a = 5, b, c ;
b = a = 15 ;
c = a < 15 ;
cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}
// OUTPUT-: a = 15,b = 15 , c = 0

// Predict the output:
#include<iostream>
using namespace std;
int main() {
int x = 3 ;
float y = 3.0 ;
if (x == y)
cout <<"x and y are equal" ;
else
cout << "x and y are not equal" ;
return 0;
}
// OUTPUT-:x and y are equal


// predict the output:
#include<iostream>
using namespace std;
int main(){
int test = 0;
cout << "First character " << '1' << endl;
cout << "Second character " << (test ? 3 : '1') << endl;
return 0;
}
// OUTPUT-: First character 1
//          Second character 49    [Ascii value of '1']


// predict the output:
#include <iostream>
using namespace std;
int main(){
int a = 18; int b = 12;
bool t = (a > 20 && b < 15)? true : false;
cout <<"Value of t: " << t ;
return 0;
}
//OUTPUT-: Value of t: 0



predict the output:
#include <iostream>
using namespace std;
int main() {
int number = -4;
char result;
result = number > 0 ? 'P' : 'N';
cout << result << endl;
return 0;
}
// OUTPUT-:N
