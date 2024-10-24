#include<iostream>
#include<unordered_map>
#include<stack>
#include<queue>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>>adjList;
    unordered_map<int,bool>visited;
    void addEdge(int u, int v, bool dir){
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
            cout<< i.first<< ":{ " ;
            for(auto nbr: i.second){
                cout<< nbr<< ",";
            }
        }
    }
    void bfs(int src){
        queue<int>q;
        visited[src]= true;
        q.push(src);
        while(!q.empty()){
            int front= q.front();
            cout<< front<< " ";
            q.pop();
            for(auto nbr: adjList[front]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]= true;
                }
            }

        }
    }
    void dfs(int src, unordered_map<int,bool>visited, unordered_map<int, list<int>>adjList){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                dfs(nbr,visited,adjList);
            }
        }
    }
    void ToposortDFS(int src,unordered_map<int,bool>visited, unordered_map<int,list<int>>adjList, stack<int>st){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                ToposortDFS(nbr,visited,adjList, st);
            }
        }
        // backtracking 
        st.push(src);
    }
    void bfsSort(int n){
        vector<int>indegree(n,0);
        for(int i=0; i<n; i++){
            for(auto nbr: adjList[i]){
                indegree[nbr]++;
            }
        }
        queue<int>q;
        for(int i=0; i<n; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int front= q.front();
            for(auto nbr: adjList[front]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
    }

};
int main(){

}
