#include<iostream>
#include<string>
#include<cstring>


using namespace std;

int main(){



char str[10];
int i=0;
int len=0;
int flag=0;

cout<<"enter a string";

cin>>str;

len=strlen(str);
for(i=0;i<len/2;i++){
    if(str[i]==str[len-i-1]){
        flag++;
    }
}
if(flag==i){
    cout<<"It is a palindrome"<<endl;

}else{
    cout<<"It is not a palindrome"<<endl;
}



    



    


    
    



   
    return 0;   
}

    
     



    

   






    




        

    



    