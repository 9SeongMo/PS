//청소년상어

#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

using namespace std;


typedef struct {
	int x, y;

}point;

const int MAX = 17;
point fish[MAX];  // 죽은 물고기는 x,y = 99
int fish_num[4][4];   // 17번은 상어, 0번은 빈칸
int fish_dir[4][4];

int dx[] = { -1,-1,0,1,1,1,0,-1 }; int dy[] = { 0,-1,-1,-1,0,1,1,1 };



void move_fish() {

	for (int i = 1; i < 17; i++) {
		if (fish[i].x == 99) continue;

		int x = fish[i].x;
		int y = fish[i].y;
		int dir = fish_dir[x][y] - 1;

		int nx; int ny;

		while(true) {
			nx = x + dx[dir]; ny = y + dy[dir];

			if ((nx >= 0 && nx < 16 )&& (ny >= 0 && ny < 16)) {
				if (fish_num[x][y] != 17) {
					fish[i].x = nx; fish[y].y = ny;
					break;
				}
			}

			dir = (dir + 1) % 8;
		}

		int temp_num = fish_num[nx][ny];
		int temp_dir = fish_dir[nx][ny];

		fish_num[nx][ny] = fish_num[x][y];
		fish_dir[nx][ny] = fish_dir[x][y];
		fish_num[x][y] = temp_num;
		fish_dir[x][y] = temp_dir;

	}

}

void print() {

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cout << fish_num[x][y] << " ";

		}
		cout << "\n";
	}
}


int main(){

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			int num, dir;
			cin >> num >> dir;

			fish[num].x = x; 
			fish[num].y = y;
			fish_num[x][y] = num;
			fish_dir[x][y] = dir;
		}
	}
	



	return 0;
}