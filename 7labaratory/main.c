#include<stdio.h>
#include"logic.h"
#include"randnumber.h"
#include"world.h"
int main() {
	hidecursor();
	printf("Write Size of box: NumberOfString and NumberOfColumn\n");
	int NumberOfString;
	int NumberOfColumn;
	scanf_s("%d %d", &NumberOfString, &NumberOfColumn);
	printf("Write Time\n");
	int Time;
	scanf_s("%d", &Time);
	system("cls");
	while (1) {
		World W1 = MakeFullWorld(NumberOfString, NumberOfColumn);
		Point* points = MakePointsInWorld(15, W1);
		FreeAllPoints(&W1, points, 15);
		PrintfWorld(W1, Time);
	}
	return 0;
}