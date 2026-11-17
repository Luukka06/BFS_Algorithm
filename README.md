# BFS Algorithm (Breadth-First Search) Overview
Breadth-First Search (BFS) is a graph traversal algorithm that explores vertices level by level, starting from a given source vertex.
It uses a Queue (FIFO) data structure to ensure that vertices closer to the source are visited first.
BFS can find the shortest path in an unweighted graph.
# Data Structures
The implementation uses the following variables:
- N — number of vertices.
- adj — adjacency lists used to store graph connections.
- visited — keeps track of visited vertices.
- parent — stores the parent of each vertex.
- Distance — stores the shortest distance from the source vertex.
# Helper Functions
- Graph(int N) — initializes the graph and its data structures.
- AddEdge(int u, int w) — adds a directed edge from vertex u to vertex w.
- printGraph() — displays the graph using adjacency lists.
- BFS(int s) — performs Breadth-First Search starting from vertex s.
# How BFS Works
The algorithm follows these steps:
1. Checks whether the graph and source vertex are valid.
2. Initializes visited, parent, and Distance.
3. Marks the source vertex as visited and sets its distance to 0.
4. Inserts the source vertex into the queue.
5. While the queue is not empty:
   - Removes the first vertex from the queue.
   - Checks all its neighboring vertices.
   - If a neighbor has not been visited:
     - Marks it as visited.
     - Sets its parent to the current vertex.
     - Calculates its distance (Distance[current] + 1).
     - Adds it to the queue.
6. Prints the distance and parent of every vertex.
7. Releases dynamically allocated memory.
5. Example Output
For a graph with 5 vertices, starting BFS from vertex 0:

               - vertex 0: dist=0, parent=-1
               - vertex 1: dist=1, parent=0
               - vertex 2: dist=1, parent=0
               - vertex 3: dist=2, parent=1
               - vertex 4: dist=3, parent=3
   
# Important Notes
- BFS uses a Queue following the FIFO principle.
- visited prevents processing the same vertex multiple times.
- Distance stores the shortest distance from the source.
- parent can be used to reconstruct the shortest path.
- Unreachable vertices keep their distance and parent equal to -1.
- For undirected graphs, edges must be added in both directions.
- BFS finds shortest paths in unweighted graphs, not necessarily weighted ones.
# Complexity Analysis
- Time Complexity: \(O(V+E)\)
- Space Complexity: \(O(V+E)\)

Where V is the number of vertices and E is the number of edges.
