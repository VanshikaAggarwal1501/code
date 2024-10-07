#include<iostream>
#include<unordered_map>
using namespace std;
template<typename T>
class Graph{
    public:
    unordered_map<int, list<pair<int,int>>>adjList;
    void addEdge(int u, int v, int wt, bool dir){
        if(dir==1){
            adjList[u].push_back(make_pair(v,wt));
        }
        else {
            adjList[u].push_back(make_pair(v,wt));
            adjList[v].push_back(make_pair(u,wt));
        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< " : { ";
            for(pair<int,int>p : i.second){
                cout<< "{"<< p.first<< ","<< p.second<< "}";
            }
            cout<< "}";
        }
    }
};
int main(){

}