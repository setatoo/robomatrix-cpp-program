#include <iostream>
using namespace std;
int main()
{
    bool ghofl=false;
    int tedad=0;
    int tedadhosh=0;
    int tedadbohran=0;
    int max=0;
    int ramz=2024;
    int a,b,c;
    cout << "add morede nazar ro vared konid : \n 1-vorud code dastresi \n 2-sabt sorat jadid \n 3-namayesh gozarash \n 4- Exit " << std::endl;
    cin>>c;
    if(c==1)
    {
        while(ghofl == false && tedad<4)
        {
            if(tedad>3)
            {
                return 0;
            }
            cout<<"code ro bede:\n ";
            cin >>a;
            if(a==ramz)
            {
                ghofl= true;
                cout<<"code dorost!";
            }
            else
            {
                cout<<"code nadorost!\n dobare vared konid \n :";
            }
            tedad++;
        }
    }
    if(c==2)
        while(tedadhosh<4)
        {
            if(tedadhosh>3)
            {
                return 0;
            }
            cout<<" ye sorat bede:\n";
            cin>>b;
            if (b>max)
            {
                max=b;
            }
            if(b>120)
            {
                cout<<"hoshdar khatar!\n";
                tedadhosh++;
            }
            else if(b>200)
            {
                cout<<"vaziat bohrani\n";
                tedadbohran++;
            }
    if(c==3)
    {
        cout<<max<<"\n"<<tedadhosh<<"\n"<<tedadbohran;
    }
    if(c==4)
    {
        return 0;
    }
return 0;
}