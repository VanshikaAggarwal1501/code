#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
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
    void sorttop(int src, unordered_map<int, list<int>>adjList, unordered_map<int,bool>&visited, stack<int>st) {
        visited[src]= true;
        for(auto nbr: adjList[src]){
            if(!visited[nbr]){
                sorttop(nbr,adjList,visited,st);
            }
        }
        // backtracking- wapis jaate time stack me push karo
        st.push(src);
    }
    void TopoSortBFS(int n){
        queue<int>q;
 
        // calculating indegree of all nodes
        unordered_map<int,int>indegree;
        for(auto i: adjList){
            for(auto nbr: i.second){
                indegree[nbr]++;
            }
        }
        // the above code has not printed the indegree of first node 0
        for(int i=0; i<n; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        // for(auto i: indegree){
        //     cout<< i.first<< "->" << i.second<< endl;
        // }
        while(!q.empty()){
            int front= q.front();
            cout<< front<< " ";
            for(auto nbr: adjList[front]){
                indegree[nbr]--;
                if(indegree[nbr]== 0){
                    q.push(nbr);
                }
            }
        }
    }
};
int main(){
    Graph g;
    g.Addedge(0,1,1);
    g.Addedge(1,2,1);
    g.Addedge(2,3,1);
    g.Addedge(3,5,1);
    g.Addedge(3,4,1);
    g.Addedge(5,6,1);
    g.Addedge(4,6,1);
    g.Addedge(6,7,1);
    g.TopoSortBFS(8);
    int n= 8;
    stack<int>st;
    unordered_map<int, list<int>>adjList;
    unordered_map<int,bool>visited;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            g.sorttop(i,adjList, visited, st);
        }
    }
    while(!st.empty()){
        cout<< st.top()<< " ";
        st.pop();
    }
}
