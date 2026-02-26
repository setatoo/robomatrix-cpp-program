# include <iostream>
using namespace std;


int main(){
    int max = 0;
    int v = 0;
    bool sta = true;
    int col_h = 0;
    int t_hoshdar = 0;
    int h_danger = 0;
    int t_bohran = 0;
    int chose = 0;
    int pas = 0;
    bool bol = false ;
    int tedad = 0 ;
    // cout << "enter pass key : " << endl ;
    // cin >> pas;
    while (bol == false)
    {
        if (tedad > 2)
        {
            cout << "lock program!!";
            return 0;
        }
        else 
        {
        cout << "enter pass key : " << endl ;
        cin >> pas;     
        if (pas == 2024)
        {
            bol = true;
        }
        else 
        {
        cout << "wrong code";
        tedad++;
        }
        }

    }

    while (true)
    {
        cout << "1-->new speed\n" << "2-->show case\n" << "3-->exit\n";
        cin >> chose;
        
        if (chose == 1 )
        {
            cout << "enter speed : ";
            cin >> v;
            if (v>= max ){max = v;}
            if (v >120 && v=<200)
            {
            t_hoshdar++;
            cout<<"hosdar\n";
            }
            else if (v > 200)
            {
            t_bohran++;
            cout << "bohran\n";
            }
        }
        
        if (chose == 2)
        {
            cout << "your state is " << sta << endl << "your maximum speed is : " << max << endl << "you have got "<< t_hoshdar << "hoshdar\n" << "you have enter to vaziat boharni " << t_bohran << "times";
        }
    
        if (chose == 3)
        {
            cout << "good bye.";
            return 0;
        }
    }

return 0;
}