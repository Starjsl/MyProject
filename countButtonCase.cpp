#include <iostream>
#include <queue>
using namespace std;
int dist[1000001];

int main()
{
	int f, s, d, g, u;
	cin >> f >> s >> g >> u >> d;
	
	for(int i=0; i<=f; i++){
		dist[i] = -1;
	}

	queue<int> q;
	q.push(s);
	dist[s] = 0;

	while(!q.empty()){
		int now = q.front();
		q.pop();
		if(now+u <= f && dist[now+u] ==-1){
			q.push(now+u);
			dist[now+u] = dist[now]+1;
		}

		if(now-d >=1 && dist[now-d] ==-1){
			q.push(mow-d);
			dist[now-d] = dist[now]+1;
		}
	}

	if(dist[g] == -1){
		cout << "use the stairs"
	}else{
		cout << dist[g];
	}
}
