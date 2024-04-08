#include <stdio.h>

template <typename T>
T sub(T a, T b) {
	return a + b;
}

template <>
float sub<float>(float a, float b) {

	if (a <= b)
		return a;
	else
		return b;
}

char sub(char a, char b) {
	return puts("charは使用不可");
}

int main(void) {
	printf("%d\n", sub<int>(114, 514));       // 628    関数テンプレートを利用
	printf("%f\n", sub<float>(11.4f, 51.4f)); // -40.0  特殊化(オーバーライド)を利用
	printf("%f\n", sub<double>(11.4, 51.4));        // 585.96 多重定義(オーバーロード)を利用
	printf("%c\n", sub<char>('a','b'));        // 585.96 多重定義(オーバーロード)を利用

	return 0;
}
