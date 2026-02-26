# include <iostream>
using namespace std;

int main(){
    int pin = 1234;
    int mojoudi = 1000;
    int in_pin = 0 ;
    int i = 1;
    char Operator;
    int m_variz ;
    int m_bardasht ;
    while (i<=3 && in_pin != pin){
       
        
        cout << "what is your pin ? (ATM)" << endl ; 
        cin >> in_pin;        
        i++;
    
    }
    if(i > 3 && pin != in_pin){cout << "you have reach your limit today goodbye!!!" << endl;
    return 0;}
    
    while (true){
        cout << "enter what you want to do : \n 0-->exit \n 1-->show_mojodi \n 2-->variz_pool \n 3-->bardasht_pool \n choise :";
        cin >> Operator;
        if (Operator == '0') {return 0;}      
        else if (Operator == '1') {cout << "you have : " << mojoudi << endl;}
        else if (Operator == '2'){
cout << "how much you want to add ? " << endl ;
cin >> m_variz ;
if (m_variz <= 0){
    cout << "Invalid amount!" << endl;
    continue;
}
mojoudi += m_variz ;
cout << "you have "<< mojoudi << " now" << endl;
}
        else if (Operator == '3'){
cout << "how much you want to take ? " << endl ;
cin >> m_bardasht ;
if (m_bardasht <= 0){
    cout << "Invalid amount!" << endl;
    continue;
}
if (m_bardasht <= mojoudi){
mojoudi -= m_bardasht ;
cout << "you have "<< mojoudi << " now" << endl;
}
else{cout << "you cant take " << m_bardasht << " its " << m_bardasht - mojoudi << " times mor than what you have!!" << endl ; return 0;}

}
        else {cout << "Invalid choice";}
 

    }

    
return 0;

}