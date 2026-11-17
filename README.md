# BFS_Algorithm
Breadth-First Search(BFS) is a graph traversal algorithm used to visit vertices and find the shortest path between vertices in an unweighted graph.
It explores a graph level by level. It starts from a given source vertex, visits all its neighboring vertices first, then visits the neighbors of those vertices, and 
continues until all reachable vertices have been visited. The algorithm uses a Queue (FIFO — First In, First Out) data structure. This means that the first element 
added to the queue is the first one to be removed.

# Libraries
The following C++ libraries are used in this implementation:
- iostream — used for input and output operations.
- list — used to store adjacency lists.
- vector — used to store parent vertices and distances.
- queue — used to implement the queue required by BFS.

# Graph Class
The graph is implemented using a class named Graph.
Private Members:
- int N	Stores the number of vertices in the graph.
- list<int>* adj	An array of adjacency lists used to store neighboring vertices.
- vector<int> parent	Stores the parent of each vertex during traversal.
- vector<int> Distance	Stores the shortest distance from the source vertex to each vertex.
