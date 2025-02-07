#include<iostream>
#include<string>
#include<cstring>


using namespace std;

int main(){
   char s[50];

   int len=0;
   cout<<"enter to replace vowels"<<endl;

   
   len=strlen(s);
   for(int i=0;i<len;i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        for(int j=i;j<len;j++){
            s[j]=s[j+1];

        }
        len--;
    }
   }
   cout<<"replace with *"<<s<<endl;









    



    


    
    



   
    return 0; 
}

    
     



    

   






    




        

    



    