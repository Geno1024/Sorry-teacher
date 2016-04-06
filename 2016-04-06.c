#include <stdio.h>

/* 0 1 2 3 4 5 6 7 8 9 A B C D E F 
4    A B C D E F G H I J K L M N O
5  P Q R S T U V W X Y Z
**********************************
A 41   E 45   I 49   O 4F   U 55
A 0100 0001
E 0100 0101
I 0100 1001
O 0100 1111
U 0101 0101
   654 3210
*/

int main()
{
	char c;
	int a[1] = {0};
	int b[7];
	int i;
	while (c = getchar())
	{
		switch (c)
		{
			case EOF:
				return 0;
				break;
			case '\n':
				printf("A: %d, E: %d, I: %d, O: %d, U: %d\n", 0[a], 1[a], 2[a], 3[a], 4[a]);
				break;
			default:
				if (((c & 65) == 65) & (c & 2) / 2 == (((c & 4) / 4) & ((c & 8) / 8)))
					a[(c & 28) / 4]++;
		}
	}
}
