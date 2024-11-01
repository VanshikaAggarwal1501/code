//graph creation, bfs and dfs traversal, cycle detection using bfs and dfs
// cycle detection in directed graph using dfs, bipartite graphs using bfs and dfs
// topological ordering, kahn's algo, shortest path using bfs, dijkstra algo,
// dijkstra using set
#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
#include<stack>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<pair<int, int>>>adjList;
    void addEdge(int u, int v, int wt, bool dir){
        if(dir== 1){
            adjList[u].push_back(make_pair(v,wt));
        }
        else {
            adjList[u].push_back(make_pair(v,wt));
            adjList[v].push_back(make_pair(u,wt));
        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< ": {" ;
            for(auto nbr: i.second){
                int nbrdata= nbr.first;
                int nbrweight= nbr.second;
                cout<< "{" << nbrdata << "," << nbrweight << "}";
            }
            cout<< "}" << endl;
        }
    }
    void bfsTraverse(int src){
        unordered_map<int,bool>visited;
        queue<int>q;
        q.push(src);
        visited[src]= true;
        while(!q.empty()){
            int front= q.front();
            cout<< front<< " ";
            q.pop();
            for(auto nbr: adjList[front]){
                int nbrdata= nbr.first;
                int nbrweight= nbr.second;
                if(!visited[nbrdata]){
                    q.push(nbrdata);
                    visited[nbrdata]= true;
                }
            }
        }
    }
    void dfsTraverse(int src, unordered_map<int,bool>&visited, unordered_map<int, list<pair<int,int>>>&adjList){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            int nbrdata= nbr.first;
            if(!visited[nbrdata]){
                dfsTraverse(nbrdata,visited,adjList);
            }
        }
    }
    bool detectCyclebfs(int src){
        unordered_map<int,bool>visited;
        queue<int>q;
        q.push(src);
        visited[src]= true;
        unordered_map<int,int>parent;
        parent[src]= -1;
        while(!q.empty()){
            int front= q.front();
            q.pop();
            for(auto nbr: adjList[front]){
                int nbrdata = nbr.first;
                if(!visited[nbrdata]){
                    q.push(nbrdata);
                    visited[nbrdata]= true;
                    parent[nbrdata]= front;
                }
                else {
                    if(parent[nbrdata]!= front){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool cycledfs(int src, int parent, unordered_map<int,bool>&visited, unordered_map<int,list<pair<int,int>>>&adjList){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            int nbrdata = nbr.first;
            if(!visited[nbrdata]){
                bool ans= cycledfs(nbrdata,src,visited,adjList);
                if(ans== true){
                    return true;
                }
            }
            else {
                if(parent!= nbrdata){
                    return true;
                }
            }
        }
        return false;
    }
    bool isBipartite(int src, int colour[]){
        unordered_map<int,bool>visited;
        queue<int>q;
        q.push(src);
        visited[src]= true;
        colour[src]= 0;
        while(!q.empty()){
            int front= q.front();
            q.pop();
            for(auto nbr: adjList[front]){
                int nbrdata= nbr.first;
                if(!visited[nbrdata]){
                    visited[nbrdata]= true;
                    q.push(nbrdata);
                    colour[nbrdata]= !colour[front];
                }
                else{
                    if(colour[nbrdata]== colour[front]){
                        return false;
                    }
                } 

            }
        }
        return true;
    }
    bool isBipartitedfs(int src, int color,vector<int>&nodes, unordered_map<int,bool>&visited, unordered_map<int, list<pair<int,int>>>&adjList){
        visited[src]= true;
        nodes[src]=color;
        for(auto nbr: adjList[src]){
            int nbrdata= nbr.first;
            if(!visited[nbrdata]){
                bool ans= isBipartitedfs(nbrdata,!color, nodes,visited, adjList);
                if(ans== true){
                    return true;
                }
            }
            else {
                if(nodes[src]== nodes[nbrdata]){
                    return false;
                }
            }
        }
        return true;
    }
    void topologicalOrder(int src, unordered_map<int,bool>&visited, unordered_map<int,list<pair<int,int>>>&adjList, stack<int>&st){
        visited[src]= true;
        for(auto nbr: adjList[src]){
            int nbrdata= nbr.first;
            if(!visited[nbrdata]){
                topologicalOrder(nbrdata, visited, adjList, st);
            }
        }
        // push element in stack
        st.push(src);
    }
    void TopoSortBFS(int &v){
        queue<int>q;  
        unordered_map<int,int>indegree;
        // calculate the indegree of all nodes
        for(int i=0; i<v; i++){
            for(auto nbr: adjList[i]){
                int nbrdata= nbr.first;
                indegree[nbrdata]++;
            }
        }
        // push nodes with indegreee zero in the queue
        queue<int>q;
        for(int i=0; i<v; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int front= q.front();
            cout<< front<< " ";
            q.pop();
            for(auto nbr: adjList[front]){
                int nbrdata= nbr.first;
                indegree[nbrdata]--;
                if(indegree[nbrdata]==0){
                    q.push(nbrdata);
                }
            }
        }
    }
    // dijkstra using bfs- unweighted and undirected graph
    

};
int main(){
    int v=8;
    int colour[8]; 
    int color = 0;
    vector<int>nodes;

}