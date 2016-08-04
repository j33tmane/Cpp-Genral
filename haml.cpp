#include<iostream>
#include<cstdio>
#include<cstdlib>
#define V 5
using namespace std;
void printsol(int path[])
{
    cout<<"Solution Exists:";
    cout<<" Following is one Hamiltonian Cycle \n"<<endl;
    for (int i = 0; i < V; i++)
        cout<<path[i]<<"  ";
    cout<< path[0]<<endl;
}

bool issafe(int v,bool graph[V][V],int path[],int pos)
{
    if(graph[path[pos-1]][v]==0)
        return false;
    for(int i=0;i<pos;i++)
    {
        if(path[i]==v)
            return false;
    }
    return true;
}
bool hamilton(bool graph[V][V],int path[],int pos)
{
    if(pos==V)
    {
        if(graph[ path[pos-1] ][ pos[0] ]==1)
            return true;
        else
            return false;
    }
    for(int i=0;i<pos;i++)
    {
        if(issafe(i,graph,path,pos))
        {
             path[pos]=i;
             if(hamilton(graph,path,pos+1)==true)
                return true;
            path[pos]=-1;

        }
    }
    return false;
}

bool hamcycle(bool graph[V][V])
{
    int *path = new int[V];
    for(int i=0;i<V;i++)
        path[i]=-1;
    path[0]=0;
    if(hamilton(graph,path,1)==false)
    {
        cout<<"no  ans";
        return false;
    }
    printsol(path);
    return true;
}

int main()
{
    bool graph[V][V]={{}};
    hamcycle(graph);
    return 0;
}
