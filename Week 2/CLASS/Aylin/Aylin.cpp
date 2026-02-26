#include <iostream>
using namespace std;

int main()
{
    bool ghofl = false;
    int tedad = 0;
    int tedadhosh = 0;
    int tedadbohran = 0;
    int maxBP = 0;
    int ramz = 2024;
    int a, b, c = 0;

    // بخش رمز
    while(!ghofl && tedad < 4)
    {
        cout << "code ro bede:\n";
        cin >> a;

        if(a == ramz)
        {
            ghofl = true;
            cout << "code dorost!\n";
        }
        else
        {
            cout << "code nadorost!\n";
        }

        tedad++;
    }

    if(!ghofl)
        return 0;

    // منو
    while(c != 4)
    {
        cout << "add morede nazar ro vared konid:\n";
        cout << "2- sabt sorat jadid\n";
        cout << "3- namayesh gozarash\n";
        cout << "4- Exit\n";
        cin >> c;

        if(c == 2)
        {
            if(tedadhosh >= 4)
                return 0;

            cout << "ye sorat bede:\n";
            cin >> b;

            if(b > maxBP)
                maxBP = b;

            if(b > 200)
            {
                cout << "vaziat bohrani!\n";
                tedadbohran++;
            }
            else if(b > 120)
            {
                cout << "hoshdar khatar!\n";
                tedadhosh++;
            }
        }

        else if(c == 3)
        {
            cout << "Max: " << maxBP << endl;
            cout << "Hoshdar: " << tedadhosh << endl;
            cout << "Bohran: " << tedadbohran << endl;
        }

        else if(c == 4)
        {
            return 0;
        }
    }

    return 0;
}