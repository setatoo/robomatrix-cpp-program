#include <iostream>

using namespace std;

int main() {
    int balance = 100;
    int pin=1234;

    cout<<"enter pin";
    int miss=0;
    bool state = true;
    while(miss<3 && state)
    {
        int pass;
        cin>>pass;
        if(pass==pin)
        {
            cout << "menu:\n"
                    "1-balance\n"
                    "2-deposit money\n"
                    "3-withdraw money\n"
                    "4-exit\n";

            while (state) {
                int voorodi;
                cin >> voorodi;
                if(voorodi==1) {
                    cout<<balance;
                    state = false;
                }
                else if (voorodi==2)
                {
                    int deposit;
                    cin>>deposit;
                    balance+=deposit;
                    cout<<balance;
                    state = false;
                }
                else if (voorodi==3)
                {
                    int withdraw;
                    cin>>withdraw;
                    if(withdraw>balance) {
                        cout << "not enough balance for withdraw";
                        return 0;
                    }
                    balance-=withdraw;
                    cout<<balance;
                    state = false;
                }
                else if (voorodi==4)
                {
                    state = false;
                }
            }
        }
        else if(pass!=pin ) {

            if(miss<2)
            cout << "enter pass again";
            miss++;
        }

    }
    if(miss>2)
        cout<<"locked for one min";



    return 0;
}