#include <iostream>

using namespace std;

int main() {
    bool state= true;
    cout << "1-Addition\n"
            "2-Subtraction\n"
            "3-Multiplication\n"
            "4-Division\n"
            "5-Exit\n" << endl;

    while (state)
    {
        int voorodi;
        cin>>voorodi;
        int adad1,adad2;
        if(voorodi==1) {
            cin>>adad1>>adad2;
            cout << adad2 + adad1;
            state = false;
        }
        else if (voorodi==2)
        {
            cin>>adad1>>adad2;
            cout << adad2 - adad1;
            state = false;
        }
        else if (voorodi==3)
        {
            cin>>adad1>>adad2;
            cout << adad2 * adad1;
            state = false;
        }
        else if (voorodi==4)
        {
            cin>>adad1>>adad2;
            if(adad2!=0)
            {
                cout << adad2 / adad1;
                state = false;
            }
            else if(adad2==0) {
                cout << "error" << endl;
                cout << "1-Addition\n"
                        "2-Subtraction\n"
                        "3-Multiplication\n"
                        "4-Division\n"
                        "5-Exit\n" << endl;
            }
        }
        else if (voorodi==5)
        {
            cout << "exit";
            state = false;
        }

    }
    return 0;
}