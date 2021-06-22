#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue <int> q;

void bfs(vector <vector <int>> &gph, vector <bool> &visited, int v){
	q.push(v);
	visited[v]=1;
	int v_var;
	while(!q.empty()){
		v_var=q.front();
		cout<<v_var<<' ';
		for(int i=0;i<gph[v_var].size();i++){
			if(!visited[gph[v_var][i]]){
				q.push(gph[v_var][i]);
				visited[gph[v_var][i]]=1;
	
			}

		}
		q.pop();	
	}





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

	bfs(gph,visited,1);

	return 0;
}


