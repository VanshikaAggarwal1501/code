#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adjList;
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
            cout<< i.first<< " :{ ";
            for(pair<int,int>p: i.second){
                cout<< "{"<< p.first<< ","<< p.second<< "}";
            }
            cout<< "}";
        }
    }
    bool completeCourse(int& numCourses, vector<vector<int>>prerequisites){
        // make adjacency list from the vcetor
        queue<int>q; 
        vector<int>adjList[8];
        for(auto i: prerequisites){
            adjList[i[1]].push_back(i[0]);
        }
        vector<int>indegree(numCourses,0);
        for(int i=0; i<numCourses; i++){
            for(auto nbr: adjList[i]){
                indegree[nbr]++;
            }
        }
        for(int i=0; i<numCourses; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>TopoSort;
        while(!q.empty()){
            int front= q.front();
            TopoSort.push_back(front);
            q.pop();
            for(auto nbr: adjList[front]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
        if(TopoSort.size()== numCourses){
            return true;
        }
        return false;
    }
};
int main(){
    int numCourses= 8;

}