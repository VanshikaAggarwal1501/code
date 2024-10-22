#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>>adjList;
    unordered_map<int,bool>visited;
    void addEdge(int u, int v, bool dir){
        if(dir==1){
            adjList[u].push_back(v);
        }
        else if(dir==0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< "{" ;
            for(auto nbr: i.second){
                cout<<  nbr<< ","; 
            }
            cout<< "}";
        }
    }
    void bfs(int src, unordered_map<int,list<int>>adjList){
        visited[src]= true;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int front= q.front();
            cout<< front<< " ";
            q.pop();
            for(auto nbr: adjList[src]){
                if(!visited[nbr]){
                    visited[nbr]= true;
                    q.push(nbr);
                }
            }
        }
    }
    void dfs(int src, unordered_map<int,bool>&visited, unordered_map<int, list<int>>adjList){
        visited[src]= true;
        cout<< src << " ";
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                dfs(nbr,visited,adjList);
            }

        }
    }
    bool CheckCycle(int src){
        unordered_map<int,int>parent;
        queue<int>q;
        q.push(src);
        parent[src] = -1;
        while(!q.empty()){
            int front= q.front();
            q.pop();
            for(auto nbr: adjList[front]){
                if(visited[nbr]== false){
                    q.push(nbr);
                    visited[nbr]= true;
                }
                if(visited[nbr]== true && parent[nbr]!= front){
                    return true;
                }
            }
        }
        return false;
    }
    bool checkusingdfs(int src, int parent, unordered_map<int,bool>&visited, unordered_map<int,list<int>>adjList){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                visited[nbr]= true;
                bool ans= checkusingdfs(nbr,src,visited,adjList);
                if(ans== true){
                    return true;
                }
            }
            if(visited[nbr] && parent!= nbr){
                return true;
            }
        }
        return false;
    }
    bool directedDFS(int src, unordered_map<int,bool>dfsTrack, unordered_map<int,bool>&visited){
        visited[src]= true;
        dfsTrack[src]= true;
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                bool ans= directedDFS(nbr, dfsTrack, visited);
                if(ans== true){
                    return true;
                }
            }
            else if(visited[nbr]== true && dfsTrack[nbr]== true){
                return true;
            }    
        }
        // backtracking
        dfsTrack[src]= false;
        return false;   
    }
};
int main(){
    int parent =-1;



}
