#include<iostream>
using namespace std;


int main( )
{

int arr[ ]= {100,50,20,10,05,02,01};

int count[ 7] = {0};

int curr=0,i=0,nsave;
cin>>curr;
    while(curr >= 1 )
    {


        if(curr/arr[i] >0)
        {
            nsave = curr%arr[i];
            count[i] = curr/arr[i];

            curr = nsave;


//cout<<"debug"<<" "<<count[i]<<endl;
        }


cout<<count[i]<<" "<<arr[i]<<endl;
 i++;
    }

//cout<<count[i]<<" "<<arr[i]<<endl;


}
