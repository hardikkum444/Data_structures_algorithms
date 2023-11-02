#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of vertex: ";
    cin>>n;
    int m[n][n];
    int e;
    cout<<"Enter the no. of edges: ";
    cin>>e;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=e;j++){
            m[i][j]=0;
        }
    }
    for(int i=1;i<=e;i++){
        int u,v;
        cin>>u>>v;
        m[u][v]=1;
        m[v][u]=1;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}