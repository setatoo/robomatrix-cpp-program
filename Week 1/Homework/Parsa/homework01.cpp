# include <iostream>

int main (){
int f;
int x;
int y;
while (true){ 
   std:: cout << "Addition\n"<<"Subtraction \n"<<"Multiplication \n"<<"Division\n"<<"Exit\n";
   while (!(std::cin >> f) || f < 1 || f > 5) 
   {
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    std::cout << "invalid input !! \n enter new one : ";
    std:: cout << "Addition\n"<<"Subtraction \n"<<"Multiplication \n"<<"Division\n"<<"Exit\n";
    
   }
   
   if (f <=4 && f>=1){
      while (!(std::cin >> x) || x <= 0) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "invalid input !! \n enter new one : ";
        }
      while (!(std::cin >> y) || y < 0) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "invalid input !! \n enter new one : ";
        }      
      if (f == 1){std:: cout<< x+y;}
      else if (f == 2){std ::cout << x-y;}
      else if (f == 3){std ::cout << x*y;}
      else if (f == 4){
        while (y == 0)
    {
       std :: cout << "You cannot divide by zero!\n"  ; 
       std :: cin >> y;
    }
    std :: cout << x/y;}
   }
    else if (f == 5){break;}
   
  


}



return 0;
}







