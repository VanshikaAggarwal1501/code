#include<iostream>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int, list<int>>adjList;
    void addEdge(int u, int v, bool dir){
        if(dir==1){
            adjList[u].push_back(v);

        }
        else {
            adjList[u].push_back(v);
            adjList[v].push_back(u);

        }
    }
    void printGraph(){
        for(auto i: adjList){
            cout<< i.first<< " : { ";
            for(auto nbr: i.second){
                cout<< nbr << " ,";
            }
            cout<< endl;
        }
    }
};
int main(){

}