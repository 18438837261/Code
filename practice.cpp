/*
//
// Created by yize on 2021/7/27.
//
//全排列结果：f(n)=n!;
*/
/* int amount=0;
    int a[]{1,2,3,4};
    do{
        for(int i=0;i<=3;i++){
            cout<<a[i];
        }
        cout <<endl;
        amount++;
    }while(next_permutation(a,a+4));
    cout <<"There are "<<amount<<" kinds!";*//*

#include "practice.h"
#include <iostream>
#include <queue>
using namespace std;
int paths=0;
int victory=0;
int n,m,k; //n个岛，经过k座桥到达n号岛的大门
int **bridge=new int*[n];
int *ivis=new int[n];
int *bvis=new int[n];
void BFS(){
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int i = q.front();
        q.pop();
        ivis[i]=1;
        for (int j = 0; j < n; ++j) {
            if(bridge[i][j]==1&&ivis[j]==0){
                q.push(j);
            }
        }
    }


}

int main(){
    int t;
    cin>>t;
    memset(ivis,0,sizeof(ivis[0])*n);
    memset(bvis,0,sizeof(bvis[0])*n);
    while(t--){
        cin>>n>>m>>k;
        for (int i = 0; i < n; ++i) {
            bridge[i]=new int[n];
        }
        for (int i = 0; i < n; ++i) {  //对岛之间的桥初始化
            memset(bridge[i],0,sizeof(bridge[0][0])*n);
        }

        for (int i = 0; i < m; ++i) {
            int u,v,w;
            cin>>u>>v>>w;
            if(w==1)
                bridge[u][v]=bridge[v][u]=1;//1表示有桥而且为附魔桥
            else
                bridge[u][v]=bridge[v][u]=2;//2表示有桥但不是附魔桥
        }//岛之间的桥初始化结束




    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        int flag1=0,flag2=0;
        cin>>a>>b;
        int max=a>b?a:b;
        for (int c = 2; c <= max; ++c) {
            if(a%c==b%c) {
                cout << c <<" ";
                flag1=1;
                break;
            }
        }
        if(flag1==0) cout <<"-1 ";
        for (int c = max; c > 1; --c) {
            if(a%c==b%c){
                cout << c <<endl;
                flag2=1;
                break;
            }
        }
        if(flag2==0) cout << "-1" <<endl;
    }
    return 0;
}