#include<iostream>

using namespace std;

int main(){
  int n=0;

  int i=0;

  int count=0;

  cout<<"Enter a number:"<<endl;
  cin>>i;

  for(int i=2;i<=n/2;i++){
    if(n%i==0){
      count=1;

      break;
    }
  }
  if(count==0){
    cout<<"it is a prime no"<<endl;
    
  
  }else{
    cout<<"it is not a prime no"<<endl;
  }
    


  
  return 0;
}






    

    

 



