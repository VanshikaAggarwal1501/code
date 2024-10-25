#include<iostream>
#include<algorithm>
#include<queue>
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
    // bfs me sabse pehle jab dest node visit hoti h, vo shortest path k 
    // through hi ho rhi hoti h 
    int shortestPathBFS(int src, int dest){
        queue<int>q;
        q.push(src);
        unordered_map<int,int>parent;
        parent[src]= -1;
        visited[src]= true;
        while(!q.empty()){
            int front= q.front();
            q.pop();
            for(auto nbr: adjList[front]){
                if(!visited[nbr]){
                    visited[nbr] = true;
                    parent[nbr]= front;
                    q.push(nbr);
                }
            }
        }
        vector<int>ans;
        while(dest!=-1){
            ans.push_back(dest);
            dest= parent[dest];
        }
        reverse(ans.begin(), ans.end());
        for(auto i: ans){
            cout<< i<< " ";
        }

    }
};
int main(){

}
