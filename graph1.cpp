// A simple representation of graph using STL,
// for the purpose of competitive programming
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(int u, vector<int> adj[],
					vector<bool> &visited)
{
	visited[u] = true;
	cout << u << " ";
	for (int i=0; i<adj[u].size(); i++)
		if (visited[adj[u][i]] == false)
			DFSUtil(adj[u][i], adj, visited);
}

// This function does DFSUtil() for all
// unvisited vertices.
void DFS(vector<int> adj[], int V)
{
	vector<bool> visited(V, false);
	for (int u=0; u<V; u++)
		if (visited[u] == false)
			DFSUtil(u, adj, visited);
}

// Driver code
int main()
{
	int V = 5;

	// The below line may not work on all
	// compilers. If it does not work on
	// your compiler, please replace it with
	// following
	// vector<int> *adj = new vector<int>[V];
	//vector<int> adj[V];

	vector<int> *adj = new vector<int>[V];

	// Vertex numbers should be from 0 to 4.
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	DFS(adj, V);
	return 0;
}


/*
#include <bits/stdc++.h>

using namespace std;

//A utility function to add an edge in an undirected graph
void addEdge(vector<int> adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//A utility function to print the adjacency list represention of graph
void printGraph(vector<int> adj[],int V)
{
    for(int v = 0;v<V;++v){
        cout << "\n Adjacency list of vertex" << v <<"\n head";
        for(auto x: adj[v])
            cout<<"-> "<<x;
        printf("\n");
    }
}


//Driver code

int main(){

    int V = 5;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);


    printGraph(adj,V);
    return 0;
}

*/

/*

// C++ program to represent undirected and weighted graph
// using STL. The program basically prints adjacency list
// representation of graph
#include <bits/stdc++.h>
using namespace std;

// To add an edge
void addEdge(vector <pair<int, int> > adj[], int u,	int v, int wt)
{
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

// Print adjacency list representation of graph
void printGraph(vector<pair<int,int> > adj[], int V)
{
	int v, w;
	for (int u = 0; u < V; u++)
	{
		cout << "Node " << u << " makes an edge with \n";
		for (auto it = adj[u].begin(); it!=adj[u].end(); it++)
		{
			v = it->first;
			w = it->second;
			cout << "\tNode " << v << " with edge weight ="
				<< w << "\n";
		}
		cout << "\n";
	}
}

// Driver code
int main()
{
	int V = 5;
	vector<pair<int, int> > adj[V];
	addEdge(adj, 0, 1, 10);
	addEdge(adj, 0, 4, 20);
	addEdge(adj, 1, 2, 30);
	addEdge(adj, 1, 3, 40);
	addEdge(adj, 1, 4, 50);
	addEdge(adj, 2, 3, 60);
	addEdge(adj, 3, 4, 70);
	printGraph(adj, V);
	return 0;
}

*/