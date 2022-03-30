#include <bits/stdc++.h>

int N, M, nSpike;
char map[41][41];
int visited_go[41][41];
int visited_out[41][41];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int flag = 0;
void go_in_mazes(int x, int y, int count, int direct)
{
	if(count>nSpike)return;
	// danh dau vi tri di qua theo 2 chieu
	if(direct==1)
		visited_go[x][y] = 1;
	else visited_out[x][y] = 1;
	// neu di vao va gap o kim cuong
	if(map[x][y]=='x'&&direct == 1)
	{
		go_in_mazes(x, y, count, 2);
		return;
	}
	// neu di ra va gap o loi vao
	if(map[x][y]=='@'&&direct == 2)
	{
		flag = 1;
		return;
	}
	// thu 4 vi tri xung quanh
	for(int i=0; i<4; i++)
	{
		int tempx = x + dx[i];
		int tempy = y + dy[i];
		if(tempx>=0&&tempy>=0&&tempx<N&&tempy<M)
		{
			if(direct==1&&visited_go[tempx][tempy]==0)
			{
				if(map[tempx][tempy]!='#')
				{
					if(map[tempx][tempy]=='s')
						go_in_mazes(tempx, tempy, count + 1, direct);
					else go_in_mazes(tempx, tempy, count, direct);
				}
				if(flag)return;
			}
			else if(direct==2&&visited_out[tempx][tempy]==0)
			{
				if(map[tempx][tempy]!='#')
				{
					if(map[tempx][tempy]=='s')
						go_in_mazes(tempx, tempy, count + 1, direct);
					else go_in_mazes(tempx, tempy, count, direct);
				}
				if(flag)return;
			}
		}
	}
	if(direct==1)
		visited_go[x][y] = 0;
	else visited_out[x][y] = 0;
}
int main()
{
	int startx, starty;
	scanf("%d %d %d", &N, &M, &nSpike);
	for(int i=0; i<N; i++)
	{
		scanf("%s", map[i]);
		for(int j=0; j<M; j++)
		{
			if(map[i][j]=='@')
			{
				startx = i;
				starty = j;
			}
		}
	}
	flag = 0;
	go_in_mazes(startx, starty, 0, 1);
	if(flag)printf("SUCCESS");
	else printf("IMPOSSIBLE");
	return 0;
}