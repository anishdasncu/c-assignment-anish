#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={5,10,15,18,25};

    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    int secondsmallest=arr[1];
    int secondlargest=arr[3];

    cout<<"largest element"<<secondsmallest<<endl;

    cout<<"smallest element"<<secondlargest<<endl;



   
    return 0;   
}

    
     



    

   






    




        

    



    