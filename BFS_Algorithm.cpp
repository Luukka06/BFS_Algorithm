#include <iostream>
#include <list>
#include<vector>
#include<queue>
using namespace std;

class Graph {
private:
	int N; //number of vertices
	list<int>*adj;
	vector<int>parent;
	vector<int> Distance;
public:
	
	Graph(int N) {
		this->N = N;
		adj = new list<int>[N];
		parent.resize(N, -1);
		Distance.resize(N, -1);
	}

	void AddEdge(int u, int w) {
		adj[u].push_back(w);
	}

	void printGraph() {
		for (int i{}; i < N; i++) {
			cout << i << "->";
			for (auto it = adj[i].begin(); it != adj[i].end(); it++) {
				cout << *it << "  ";
			}
			cout << endl;
		}
	}

	void BFS(int s);
};

void Graph::BFS(int s) {
	if (N == 0) {
		cout << "Graph is Empty, there are no vertices in it!" << endl;
		return;
	}
	if (s < 0 || s >= N) {
		cout << "Invalid start vertex!" << endl;
		return;
	}
	bool* visited = new bool[N];
	for (int i=0; i < N; i++) {
		parent[i] = -1;
		visited[i] = false;
		Distance[i] = -1;
	}
	parent[s] = -1;
	Distance[s] = 0;
	visited[s] = true;
	queue<int> que;
	//ENQUEUE
	que.push(s);
	while (!que.empty()) {
		//Dequeue
		int u = que.front();
		que.pop();
		for (auto it = adj[u].begin(); it != adj[u].end(); it++)
			if (visited[*it]==false) {
				parent[*it] = u;
				Distance[*it] = Distance[u] + 1;
				visited[*it] = true;
				que.push(*it);
			}
	}
	for (int i = 0; i < N; i++)
		cout << "vertex " << i << ": dist=" << Distance[i]
		<< ", parent=" << parent[i] << endl;
	delete[]visited;
}

int main()
{
	Graph g(5);
	g.AddEdge(0, 1);
	g.AddEdge(0, 2);
	g.AddEdge(1, 3);
	g.AddEdge(2, 3);
	g.AddEdge(3, 4);
	g.printGraph();
	g.BFS(0);
}