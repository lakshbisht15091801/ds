
// #include <iostream>
// using namespace std;

// int main(){
//     int intarr[4]={10,20,30,40};
//     int c=0;
//     for (int i = 0; i < 4; i++)
//     {
//         c=c+intarr[i];

//     }
//     cout<<c;

    
    
//     return 0;
    



// }
#include <iostream>
using namespace std;

int main(){
    int n;
    int intarr[n];
    cout<<"enter a number";
   
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>intarr[i];
    }
     int max=intarr[0],min=intarr[0];
    for (int j = 0; j < n; j++)
    {
        if (intarr[j]>max)
        {
            max=intarr[j];
        }
        if (intarr[j]<min)
        {
            min=intarr[j];
        }
        cout<<max;
        cout<<min;
        return 0;

        
        
        
    }
    
    

    return 0;
    



}