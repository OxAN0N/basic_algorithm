#include <iostream>
#include <vector>

using namespace std;



void dfs(vector <vector <int>> &gph,vector <bool> &visited, int v){
	
	visited[v]=1;
	cout<<v<<' ';

	for(int i=0;i<gph[v].size();i++){

		if(!visited[gph[v][i]]){
			dfs(gph,visited,gph[v][i]);
		}
	}

	return;


}

int main(void){
	int n_v,n_e;
	int u,v;
	cin>>n_v>>n_e;
	vector <vector <int>> gph(n_v+1);
	vector <bool> visited(n_v+1,false);

	for(int i=1;i<=n_e;i++){
		cin>>u>>v;
		gph[u].push_back(v);
		gph[v].push_back(u);
	}

	dfs(gph,visited,1);

	return 0;
}


