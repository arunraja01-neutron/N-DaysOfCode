class Solution
{
    public:
	//Function to detect cycle in a directed graph.
		bool isCyclicUtil(int v, bool visited[], bool *recStack, vector<int> adj[]){
	     if(visited[v] == false)
    {
        // Mark the current node as visited and part of recursion stack
        visited[v] = true;
        recStack[v] = true;

        // Recur for all the vertices adjacent to this vertex
        vector<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack, adj) )
                return true;
            else if (recStack[*i])
                return true;
        }

    }
    recStack[v] = false;  // remove the vertex from recursion stack
    return false;
	}
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   		    bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for(int i = 0; i < V; i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
	   	for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack, adj))
            return true;

        return false;
	}
};
