#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack <int> st;
int count=0;

void dfs(vector <vector <int>> &gph, vector <bool> &visited, int v){

	st.push(v);
	visited[v];
	int v_var,flag=0;

	while(!st.empty()){
		v_var=st.top();
		if(!visited[v_var]){
			visited[v_var]=1;
			cout<<v_var<<' ';
		}
		for(int i=0;i<gph[v_var].size();i++){
			if(!visited[gph[v_var][i]]){
				st.push(gph[v_var][i]);
				flag=1;
				break;
			}

		}
		if(flag){
			flag=0;
			continue;
		}
		st.pop();
		

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


