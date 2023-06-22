#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
	void setup(); // ���� ������ ���ִ� �Լ�
	void update();
	void draw(); // �̷ο� �÷��̾ �׷��ִ� �Լ�
	void keyPressed(int key); // Ű�� Ŭ���� �Ǿ��� �� �۵��ϴ� �Լ�
	void keyReleased(int key); // Ű�� Ŭ���ߴ� ������ �� �۵��ϴ� �Լ�
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	void input(); // �̷��� ũ��� ���̵��� �Է¹޾��ִ� �Լ�
	void init(); // �̷θ� ������ �迭�� ���� �Ҵ����ְ� �������� �ʱ�ȭ���ִ� �Լ�
	void randDir(); // �̷θ� ������ �� ����� dir�迭�� �������� �����ִ� �Լ�
	void makeMaze(); // �Է¹��� �̷��� ũ�⸦ �������� ������ �̷θ� �������ִ� �Լ�
	void mazeSolve(); // �������� ���� �̷θ� ����ϱ� ���� �ʿ��� �������� �ּҰ��� �����ִ� �Լ�
	void freeMemory(); // ���� �Ҵ��� �޸𸮸� �������ִ� �Լ�
	void gameStart(); // ������ �����ϱ� ���� �ʿ��� �͵��� ���ִ� �Լ�
	void drawShadow(); // ��忡 ���� �̷ο� �׸��ڸ� �׷��ִ� �Լ�
	void gameClear(); // ������ ���� �� �ʿ��� �͵��� ���ִ� �Լ�

	int HEIGHT, WIDTH; // �̷��� ũ�⸦ �����ϴ� ����
	int mode; // ���̵��� �����ϴ� ����
	int ans; // �̷θ� ����ϱ� ���� �ʿ��� �������� �ּҰ��� �����ϴ� ����
	int px, py; // �÷��̾��� ��ġ�� ��Ÿ���� ����
	int cnt; // �÷��̾ ������ Ƚ���� �����ϴ� ����
	int sx, sy; // �÷��̾ ������ ��ġ�� ��Ÿ���� ����
	int** maze; // �̷θ� �����ϴ� �迭
	int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0,-1} }; // �̷θ� ������ �� DFS�� ����ϴµ�, �� �� �̵��� ������ ��Ƴ��� �迭
	int dx[4] = { 1, -1, 0, 0 }; // �̷ο��� ���� ã�� �� BFS�� ����ϴµ� �� �� x������ �̵��� ������ ��Ƴ��� �迭
	int dy[4] = { 0, 0, 1, -1 }; // �̷ο��� ���� ã�� �� BFS�� ����ϴµ� �� �� y������ �̵��� ������ ��Ƴ��� �迭
	int game_flag; // ������ ���۵Ǿ����� �ʾҴ����� ��Ÿ���� �÷���
	int key_flag; // �̹� Ű�� ������ �۾� ���̹Ƿ� �ٸ� �۾��� �Ұ������� Ű�� ������ �ʾ� �ٸ� �۾��� �������� ��Ÿ���� �÷���
	int save_flag; // ��ġ�� �����ߴ��� ���� �ʾҴ����� ��Ÿ���� �÷���
};