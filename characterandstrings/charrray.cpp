#include<iostream>
using namespace std;

int getlength(char arr[])
{
    int count = 0;
    for(int i = 0 ; arr[i] !='\0';i++)
    {
        count++;
    }
    return count;
}

char isuppercase(char ch ){

    if (ch>='a'&& ch<='z'){
        return ch;

    }
    else 
    {
        char temp = ch - 'A' +'a';
    }
}

bool checkpalindrome(char arr[])
{
    int  s =0;
    int e = getlength(arr)-1;
    while(s<=e)
    {
        if(isuppercase(arr[s])!= isuppercase(arr[e]))
        {
            return 0;
        }
        else{
            if(arr[s]<='a'&& arr[e]>='z')
            s++;
            e--;
        }
        
    }return 1;
}




// void reverse(char name[])
// {
    
//     int s = 0;
//     int e = getlength(name) -1;
//     while(s<=e)
//     {
//         swap(name[s],name[e]);
//         s++;
//         e--;
//     }  
// }



int main(){

//char name[19];
char arr[19];

// cout<<"enter your name \n";
// cin>> name;
cout<<"enter your name \n";
cin>>arr;
//name[3]='\0';
//cout<<"name is - "<< name<<endl;
//cout<<"length of array is - "<<getlength(name)<<endl;
int n = getlength(arr);
//reverse(name);
//cout<<"reversed name is -"<<name;
cout<<checkpalindrome(arr)<<endl;
cout<<isuppercase('B')<<" is in lower case";
return 0;
}