#include <bits/stdc++.h>
using namespace std;

/*
 [0]---2----[2]-----6-------[3]
 |          |              /
 |          |             /
(3)        (4)          (6)
 |          |           /
 |          |          /
 [1]---1----[5]       [6]----7----[4]
 no of edges 7
 neighbour of vertices are:
    0 -> (2 2) , (1 3) ,
    1 -> (0 3) , (5 1) ,
    2 -> (0 2) , (5 4) , (3 6) ,
    3 -> (2 6) , (6 6) ,
    4 -> (6 7) ,
    5 -> (1 1) , (2 4) ,
    6 -> (3 6) , (4 7) ,
*/
// undirected weighted graph
vector<list<pair<int, int>>> graph; // A list in C++ is a doubly linked list

void add(int src, int dest, int wt, bool bidirectional = true)
{
    graph[src].push_back({dest, wt});
    if (bidirectional)
    {
        graph[dest].push_back({src, wt});
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto el : graph[i])
        {
            cout << "(" << el.first << " " << el.second << "), ";
        }
        cout << endl;
    }
}

int main()
{
    int v; // number of vertices
    cout << "Enter number of vertices:" << endl;
    cin >> v;
    graph.resize(v);
    cout << "Enter number of edges:" << endl;
    int e;
    cin >> e;
    while (e--)
    {
        int src, dest, wt;
        cout << "Enter src, dest and weight:" << endl;
        cin >> src >> dest >> wt;
        add(src, dest, wt);
    }
    cout << "Neighbours of vertices are:" << endl;
    display();
    return 0;
}
