#include<iostream>
using namespace std;

void rotate(int arr[][3],int r,int c){
    for(int i=0;i<r-1;i++){
        for(int j=i+1;j<r;j++){
            swap(arr[i][j],arr[j][i]);
        }
        
    
    }
    for(int k=0;k<r;k++){
        int start=0;
        int end=r-1;
        while(start>end){
            swap(arr[start][k],arr[end][k]);

        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<endl;
        }
    }
}
    int main(){
        int arr[3][3]={1,2,3,4,5,6,7,8,9};
        rotate(arr,3,3);

        return 0;

    }









    



    


    
    



   
   

    
     



    

   






    




        

    



    