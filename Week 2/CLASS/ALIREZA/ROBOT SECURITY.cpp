#include <iostream>

using namespace std;
int main()
{
    bool unlock= true;
    int warning=0;
    int crisis=0;
    cout<<"enter passcode";
    int inerpass;
    cin>>inerpass;
    int mistake=0;
    int maxvolume=0;

    while(mistake<4 && unlock && warning<4)
    {
        if(mistake==2)
        {
        unlock= false;
        }
        if(inerpass==2024)
        {
            int request;
            cout<<"1-enter new volume\n"
                  "2-show report\n"
                  "3-reset system\n"
                  "4-exit\n";
            cin>>request;
            if(request==1)
            {
                int volume;
                cin>>volume;
                if(volume>maxvolume)
                    maxvolume=volume;
                if(volume>120)
                {
                    warning++;
                }
                if(volume>200)
                {
                    crisis++;
                }
            }
            if(request==2)
            {
                if(unlock)
                {
                    cout<<"state:"<<"unlock"<<endl;
                    cout<<"max volume:"<<maxvolume<<endl;
                    cout<<"warning:"<<warning<<endl;
                    cout<<"crisis:"<<crisis<<endl;
                }
                else if(!unlock)
                {
                    cout<<"state:"<<"lock"<<endl;
                    cout<<"max volume:"<<maxvolume<<endl;
                    cout<<"warning:"<<warning<<endl;
                    cout<<"crisis:"<<crisis<<endl;
                }

            }
            if(request==3)
            {
                mistake=0;
                warning=0;
                crisis=0;
            }
            if(request==4)
            {
                return 0;
            }
        }
        else if(inerpass!=2024)
        {
            mistake++;
        }
    }






    return 0;
}