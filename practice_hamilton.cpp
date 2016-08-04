#include<iostream>
#include<cstdio>
#include<cstdlib>
#define v 5

using namespace std;

void printsol(int path[])
{
    cout<<"Solution Exists:";
    cout<<" Following is one Hamiltonian Cycle \n"<<endl;
    for (int i = 0; i < v; i++)
        cout<<path[i]<<"  ";
    cout<< path[0]<<endl;
}

bool issafe(int ver,bool graph[v][v],int path[],int pos)
{
    if(graph[path[pos-1]][ver]==0)
        return false;
    for(int k=0;k<pos;k++)
    {
        if(path[k]==ver)
            return false;
    }
    return true;
}

bool hamilton(bool graph[v][v],int path[],int pos)
{
    if(pos==v)
    {
        if( graph[ path[pos-1] ][ path[0] ]==1 )
            return true;
        else
            return false;
    }
    for(int i=0;i<v;i++)
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

bool hamCycle(bool graph[v][v])
{
    int *path = new int[v];
        for(int i=0;i<v;i++)
            path[i]=-1;
        path[0]=0;
        if(hamilton(graph,path,1)==false)
        {
            cout<<"no ans";
            return false;
        }
        printsol(path);
    return true;
}


int main()
{
    bool graph[v][v]={{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 1},
                      {0, 1, 1, 1, 0},
                     };
    hamCycle(graph);

    return 0;
}
