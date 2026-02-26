/*# 
include <iostream>
using namespace std;
char a;
int main(){
 int x;
 int y;
 cout<<"pleas enter your first number and second one with what you want to do : "; 
 cin >> x;
 cin >> a;
 cin >> y;
 while (a != '+' && a != '-' && a != '/' && a != '*'){cout << "wrong operator enter + or - or / or * : ";
 cin >> a;}
 if (a == '+'){cout << x+y;} 
 else if(a ==  '*') {cout << x*y;}
 else if (a  == '/'){
    while (y == 0)
    {
       cout << "You cannot divide by zero!" << endl; 
       cin >> y;
    }
    cout << x/y;}
 
 else if (a  == '-'){cout << x-y;}     
 else {cout<<"whatch out !!!"}
 return 0;
}
*/

// # include <iostream>
// using namespace std;
// int x = 0;
// int main (){
//    int max;
//    cout << "maximum number you want to count : ";
//    cin >> max;
//    while (x <= max){cout<<x++ << endl ;}
//    return 0;
// }

# include <iostream>
using namespace std;

int i = 0;
int j = 0;
int main (){
 for (i;i<3;i++){ j = 0;
   for (j;j<3;j++){
      if (i==j){cout << 1;}
      else{cout << 0;}
   }
   cout  << endl;
 }
return 0;
}
