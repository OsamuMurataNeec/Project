#include <stdio.h>

int Recursive(int n,int kyuyo) {

	if (n <= 1) {
		return 0;
	}

	printf("階乗%d時間目:%d\n",11-n,kyuyo);
	n--;
	return (kyuyo + Recursive(n,kyuyo*2-50));
}

int main() {
	int n = 10; // 階乗する値
	int result; // 計算結果

	printf("通常で10時間働くと%d\n",1072*10);
	result = Recursive(n,100);

	return (0);
}
