#include <iostream>

void my_print_bin_32(unsigned int x);
void my_print_bin_8(unsigned char x);
void my_print_bin32to8(unsigned int x);
void my_print_bin8to32(unsigned char* arr);

typedef unsigned char u8;
typedef unsigned int u32;


int my_read_pin4(unsigned char x) {

	u8 mask = 0b00001000;

	x &= mask;

	x >>= 3;

	return x;

}


void my_print_bin8to32(unsigned char* arr) {

	u32 temp = 0;

	for (int i = 0; i < 4; i++) {
		temp = temp << 8;
		temp += arr[i];
	}

	printf("비트조합하기 : ");
	my_print_bin_32(temp);

}


void my_print_bin32to8(unsigned int x) {

	u8 arr[4];
	u8 mask = 0b11111111;

	for (int i = sizeof(arr) - 1; i >= 0; i--) {
		arr[i] = x & mask;
		x = x >> 8;
	}

	for (int i = 0; i < 4; i++) {
		printf("%d 번째 비트:", i + 1);
		my_print_bin_8(arr[i]);
	}

}


void my_print_bin_32(unsigned int x) {
	printf("Ob");

	for (int i = 0; i < 32; i++) {
		int digit = x / (1 << 31);
		x = x << 1;
		printf("%d", digit);

	}
	printf("\n");
}


void my_print_bin_8(unsigned char x) {
	printf("Ob");

	for (int i = 0; i < 8; i++) {
		int digit = x / 128;
		x = x << 1;
		printf("%d", digit);

	}
	printf("\n");
}


//void my_print_bin_8(unsigned char x) {
//	printf("Ob");
//	int temp[8];
//
//	for (int i = 7; i >= 0; i--) {
//		
//		if (x % 2 == 0) {
//			temp[i] = 0;
//		}
//		else {
//			temp[i] = 1;
//		}
//		x /= 2;
//	}
//
//	for (int i = 0; i < 8; i++) {
//		printf("%d",temp[i]);
//	}
//	printf("\n");
//}

int main() {

	unsigned char a = 0xAB; // 0xAB  0b 1010 1011
	unsigned char b = 0xFF; // 0xFF 0b 1111 1111
	unsigned char c = a | b; // 0xFF 0b 1111 1111


	u8 a2 = 0b10101011;
	u8 b2 = 0b11111111;
	u8 c2 = a2 | b2; // 0xFF 0b 1111 1111


	u8 d2 = 0b10100000;
	u8 d3 = 0b11111111;
	u32 d4 = 0b11111111000000001000000011111110;

	u8 x[4] = { 0b11111111 ,0b00000000, 0b10000000, 0b11111110 };


	my_print_bin_8(d3);
	my_print_bin_32(d4);
	my_print_bin32to8(d4);
	my_print_bin8to32(x);
	printf("%d\n", my_read_pin4(d2));
	printf("%d\n", my_read_pin4(d3));


	//u8 p = 0b00000001;

	//for (int i = 0; i < 10; i++) {
	//	p ^= 1;    // ^ 는 XOR 연산 같지않으면 1을 출력
	//	printf("%d\n", p);
	//}



}