#include<iostream>
#include<vector>
using namespace std;

//ice cream problem

int main(){
   
  int tc;
  cin>>tc;

    for(int t=0;t<tc;t++){
    
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
            cin>>v[i];
        
        int mi=-1,pi=n;
        int m_ice=0,p_ice=0;
        int ice_time=0;
    
        while(n>p_ice+m_ice){

            if(ice_time>0){
                ice_time-=2*v[--pi];
                p_ice++;
            }else{
                ice_time+=v[++mi];
                m_ice++;
            }
        }
    
        cout<<m_ice<<" "<<p_ice<<endl;
        if(m_ice>p_ice)
            cout<<"Motu"<<endl;
        else if(m_ice < p_ice)
            cout<<"Patlu"<<endl;
        else
            cout<<"Tie"<<endl;
    
    }
}
