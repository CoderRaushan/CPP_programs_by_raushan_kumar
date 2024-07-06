

/*
 [0]-------[2]------------[3]
 |          |              /
 |          |             /
 |          |            /
 |          |           /
 [1]-------[5]        [6]--------[4]
 no of edges 7
 Neighbours and weight of vertices are:
0 -> (3 3), (1 2),
1 -> (4 5), (2 4), (0 2),
2 -> (1 4), (3 1),
3 -> (2 1), (0 3),
4 -> (5 6), (1 5),
5 -> (6 7), (4 6),
6 -> (5 7),

    0
    1
    0
    4
    1
    3
    4
    3
    1
    5
    5
    6
    6
    2
    5
    2
*/

// undirected graph
#include <bits/stdc++.h>
using namespace std;
vector<list<int>> graph; // A list in C++ is a doubly linked list

void add(int src, int dest, bool bidirectional = true)
{
    graph[src].push_back(dest);
    if (bidirectional)
    {
        graph[dest].push_back(src);
    }
}




void dfs(int curr, int end, vector<int>& v, vector<bool>&visited,vector<vector<int>>&ans)
{
    if (curr == end)
    {
        v.push_back(curr);
        ans.push_back(v);
        v.pop_back();
        return;
    }
    visited[curr] = true; // marked as visited
    v.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, end, v,visited,ans);
        }
    }
    v.pop_back();
    visited[curr] = false; // unmark as visited
    return;
}



void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto el : graph[i])
        {
            cout << el << " , ";
        }
        cout << endl;
    }
}

int main()
{
    int v; // number of vertices
    cout << "Enter number of vertices:" << endl;
    cin >> v;
    graph.resize(v); // Resize the graph to hold v vertices
    cout << "Enter number of edges:" << endl;
    int e;
    cin >> e;

    cout << "Enter src and dest:" << endl;
    for (int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;
        add(src, dest);
    }




    cout << "Neighbours of vertices are:" << endl;
    display();

    int x, y;
    cout << "Enter start and end vertices for DFS:" << endl;
    cin >> x >> y;



    vector<int> temp;
    vector<vector<int>> ans;
    vector<bool>visited(v,false);
    dfs(x, y, temp,visited,ans);
    cout << "All paths from " << x << " to " << y << " are:" << endl;
    for (auto val : ans)
    {
        for (auto el : val)
        {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}
