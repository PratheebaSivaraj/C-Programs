
#include <iostream>
#include <limits.h>


#define V 5


int minDistance(int dist[], bool sptSet[])
{

int min = INT_MAX, min_index;

for (int v = 0; v < V; v++)
	if (sptSet[v] == false && dist[v] <= min)
		min = dist[v], min_index = v;

return min_index;
}


int printSolution(int dist[], int n)
{
printf("Vertex Distance from Source\n");
for (int i = 0; i < V; i++)
	printf("%d tt %d\n", i, dist[i]);
}


void dijkstra(int graph[V][V], int src)
{
	int dist[V];	 

	bool sptSet[V]; 

	
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;

	
	dist[src] = 0;

	
	for (int count = 0; count < V-1; count++)
	{
	
	int u = minDistance(dist, sptSet);

	
	sptSet[u] = true;

	
	for (int v = 0; v < V; v++)

		
		if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
									&& dist[u]+graph[u][v] < dist[v])
			dist[v] = dist[u] + graph[u][v];
	}

	
	printSolution(dist, V);
}

int main()
{

int graph[V][V] = {{0, 2, 0, 6, 0},
					{2, 0, 3, 8, 5},
					{0, 3, 0, 0, 7},
					{6, 8, 0, 0, 9},
					{0, 5, 7, 9, 0},


					};

	dijkstra(graph, 4);

	return 0;
}

