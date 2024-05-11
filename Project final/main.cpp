//
//  main.cpp
//  project
//
//  Created by Salma Kaffafy on 18/05/2021.
//

#include <limits.h>
#include <stdio.h>
#include<iostream>
using namespace std;
// Number of vertices in the graph
#define V 9
  
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
  
    return min_index;
}
  
// A utility function to print the constructed distance array
void printSolution(int dist[],string location, string location1)
{
    //printf("Vertex \t\t Distance from Source\n");
   // for (int i = 0; i < V; i++)
       // printf("%d \t\t %d\n", i, dist[i]);
   
   // cout<<"Add your location"<<endl;
  // cin>>location;
   //cout<<"Add dropoff location"<<endl;
//cin>>location1;
    int sum=0;
    int home=0, , auc=4, point90=5, zamalek=7; heliopolis=3, shorouk=9, rehab=6;
    if(location=="home"&&location1=="cfc")
    { for(int i=home;i<cfc;i++)
        sum+=dist[i];}
    if(location=="home"&&location1=="auc")
    for(int i=home;i<auc;i++)
    {sum+=dist[i];}
    if(location=="auc"&&location1=="point90")
    for(int i=auc;i<point90;i++)
    {sum+=dist[i];}
    if(location=="cfc"&&location1=="point90")
       for(int i=cfc;i<point90;i++)
       {sum+=dist[i];}
    if(location=="cfc"&&location1=="auc")
       for(int i=cfc;i<auc;i++)
       {sum+=dist[i];}
    if(location=="zamalek"&&location1=="auc")
          for(int i=zamalek;i<auc;i++)
          {sum+=dist[i];}
    
    
}
  
// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{
    int dist[V];
  
    bool sptSet[V];
    
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
  
    dist[src] = 0;
  
  
    for (int count = 0; count < V - 1; count++) {
       
        int u = minDistance(dist, sptSet);
  
      
        sptSet[u] = true;
  
      
        for (int v = 0; v < V; v++)
  
          
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
  
    printSolution(dist,"home","cfc");
}
  
// driver program to test above function
int main()
{
    /* Let us create the example graph discussed above */
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
  
    dijkstra(graph, 0);
  
    return 0;
}
