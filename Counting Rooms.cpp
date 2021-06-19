#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

int r,c,section;

vector<vector<bool>> visited;

vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool validation(int x, int y){
	if(x<0 || x >= r || y <0 || y>=c)
		return false;
	

	if(visited[x][y])
		return false;
	

	return true;
}

void dfs(int a, int b){
	visited[a][b]=true;
	for(auto p: moves){
		if(validation(a+p.first, b+p.second)){
			dfs(a+p.first, b+p.second);
		}
	}
}

void findComponents(){
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(!visited[i][j]){
				dfs(i,j);
				section++;
			}
		}
	}
}

int main(){

	
	char in;
	cin>>r>>c;

	visited.resize(r);

	for (int i = 0; i < r; ++i)
	{
		visited[i].resize(c);
	}

	for (int i = 0; i < r; ++i)
	{
		for(int j=0; j<c;j++){
				cin>>in;

				if(in =='#'){
					visited[i][j]=true;
				}
		}
	}

	findComponents();
	cout<<section<<endl;
	return 0;
}
