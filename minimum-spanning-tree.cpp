#include<iostream>
#include<algorithm>
#define inf 0x3f3f3f3f
using namespace std;
const int maxn = 1e3 + 10;

bool vis[maxn] = {false};
int G[maxn][maxn];
int dis[maxn] = {0};
int cost[maxn] = {0};

int main(){
	int n, side;
	cin >> n >> side;
	for(int i = 1; i <= n; i++){
		fill(G[i], G[i] + n * n, inf);
	}
	
	for(int i = 0; i < side; i++){
		int x, y, weight;
		cin >> x >> y >> weight;
		G[x][y] = weight;
		G[y][x] = weight;
	}
	
	int sum = 0;
	
	vis[1] = true;
	
	for(int k = 0; k < n - 1; k++){
		int min = inf, pos = -1;
		for(int i = 1; i <= n; i++){
			if(vis[i] == false)
				continue;
			for(int j = 1; j <= n; j++){
				if(vis[j] == true)
					continue;
				if(G[i][j] < min){
					min = G[i][j];
					pos = j;
				}
			}
		}
		vis[pos] = true;
		sum += min;
	}
	
	cout << "sum = " << sum << endl;
} 
