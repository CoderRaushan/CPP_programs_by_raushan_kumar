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
    Neighbours and weight  of vertices are:
    0 -> (3 3), (1 2),
    1 -> (4 5), (2 4), (0 2),
    2 -> (1 4), (3 1),
    3 -> (2 1), (0 3),
    4 -> (5 6), (1 5),
    5 -> (6 7), (4 6),
    6 -> (5 7),
*/
// undirected weighted graph
vector<unordered_map<int, int>> graph; // A list in C++ is a doubly linked list

void add(int src, int dest, int wt, bool bidirectional = true)
{
    graph[src][dest]=wt;
    if (bidirectional)
    {
        graph[dest][src]=wt;
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
