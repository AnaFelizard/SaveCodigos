#include <bits/stdc++.h>
using namespace std;

int main(){    	
    // Seu código vai aqui
    int sla;
    for(cin>>sla;sla!=0;cin>>sla){
        char d;
        string n;
       string resp ="";
        cin>>d>>n;
        for(int i=0;i<n.size();i++){
            if(d!=n[i]){
                resp.push_back(n[i]);
            }
        }
        int aux=0;
        for(int i=0;i<resp.size();i++){
            if(resp[i]=='0'){
                aux++;
            }
        }
        if(aux==resp.size()){
            cout<<"0";
        }
        else{
            cout<<resp;
        }
    }
    
    

    return 0;
}