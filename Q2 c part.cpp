#include<iostream>
#include<string>


using namespace std;

int count(string s,char c){
    int rev=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==c){
            rev++;
        }
        
    

        
    }

    return rev;
}

int main(){

string s ="Anish lives in Kolkata";

char c='a';

cout<<count(s,c)<<endl;
    



    


    
    



   
    return 0;   
}

    
     



    

   






    




        

    



    