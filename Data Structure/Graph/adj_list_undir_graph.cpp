    #include<bits/stdc++.h>
    using namespace std;
    /*
     [0]-------[2]------------[3]
     |          |              /
     |          |             /
     |          |            /
     |          |           /
     [1]-------[5]        [6]--------[4]
     no of edges 7
     neighbour of vertices are:
     Neighbours and weight  of vertices are:
    0 -> (3 3), (1 2),
    1 -> (4 5), (2 4), (0 2),
    2 -> (1 4), (3 1),
    3 -> (2 1), (0 3),
    4 -> (5 6), (1 5),
    5 -> (6 7), (4 6),
    6 -> (5 7),
    */
   //    undirected graph
    vector<list<int>>graph;//A list in C++ is a doubly linked list;
    void add(int src,int dest,bool bidirecitonal=true)
    {
        graph[src].push_back(dest);
        if(bidirecitonal)
        {
            graph[dest].push_back(src);
        }
    }
    void display()
    {
        for (int i = 0; i <graph.size();i++)
        {   cout<<i<<" -> ";
            for(auto el:graph[i])
            {
                cout<<el<<" , ";
            }
            cout<<endl;
        }
        
    }
    int main()
    {
     int v;//no of vertices
     cout<<"enter no of vertices:"<<endl;
     cin>>v;
     graph.resize(v,list<int>());
     cout<<"enter no of edge:"<<endl;
     int e;
     cin>>e;
     while(e--)
     {
        int src,dest;
        cout<<"enter src and dest:"<<endl;
        cin>>src>>dest;
        add(src,dest,true);
     }
     cout<<"neighbour of vertices are:"<<endl;
     display();
    return 0;
    }