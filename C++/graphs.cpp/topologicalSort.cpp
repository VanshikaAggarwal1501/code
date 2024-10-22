#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>>adjList;
    unordered_map<int,bool>visited;
    void Addedge(int u, int v, bool dir){
        if(dir==1){
            adjList[u].push_back(v);
      
        }
        else {
            adjList[v].push_back(u);
            adjList[u].push_back(v);
        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< " : {" ;
            for(auto nbr: i.second){
                cout<< nbr<< "," ;
            }
            cout<< "}";
        }
    } 
    void dfs(int src,unordered_map<int, list<int>>adjList, unordered_map<int,bool>&visited ){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                dfs(nbr,adjList,visited);
            }
        }
    }
    void sorttop(int src, unordered_map<int, list<int>>adjList, unordered_map<int,bool>&visited ) {
        
    }
};
int main(){

}
