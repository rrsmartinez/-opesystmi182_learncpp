#include <iostream>
using namespace std;

int main()
    {
        int rad,hght;
        float vol;
        cout << "\n\n Calculate the volume of a cylinder :\n";
        cout << "-----------------------------------------\n";
        cout <<" Input the radius of the cylinder : ";
        cin>>rad;
        cout<<" Input the height of the cylinder : ";
        cin>>hght;
        vol=(3.14*rad*rad*hght);
        cout<<" The volume of a cylinder is : "<< vol << endl;
        cout << endl;
return 0;
    }

