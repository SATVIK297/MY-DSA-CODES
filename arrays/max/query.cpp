#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    vector <int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    int a = 1e5 + 10;
    vector<int> freq(a,0);
    
    for(int i=0 ; i<n ; i++){
        freq[v[i]]++;
    }
    
    cout<< "enter queries"<<endl;
    int q ;
    cin>>q;
    while(q>0){
        int q1;
        cin>>q1;
        cout<<freq[q1]<<endl;
        q--;
    }
}
