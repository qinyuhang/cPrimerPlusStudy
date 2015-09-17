//#include<stdio.h>
//
//int checkResult(int *base)
//{
//	int line;
//	int col;
//	for(line = 0; line < 8; line++)
//	{
//		for(col = 0; col < 8; col++)
//		{
//			if(base[line][col] == 0)
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int base[8][8];
//	int line;
//	int col;
//	for(line = 0; line < 8; line++)
//	{
//		for(col = 0; col < 8; col++)
//		{
//			base[line][col] = 9;
//			for(;col<8;col++)
//			{
//			base[line][col]	= 1;	
//			}
//		}
//	}
//	checkResult(int *base);
//}

#include<stdio.h>
#define nQuens 10
static int gEightQueen[nQuens] = { 0 }, gCount = 0;
void print()//输出每一种情况下棋盘中皇后的摆放情况
{
    for (int outer = 0; outer < nQuens; outer++)
    {
        for (int inner = 0; inner < gEightQueen[outer]; inner++)
        {
            printf("*");//用输出的＊代表格子
        }
        
        printf("#");//用＃输出皇后
        
        for (int inner = gEightQueen[outer] + 1; inner < nQuens; inner++)
        {
            printf("*");//用输出的＊代表格子
        }
        printf("\n");
    }
    printf("==========================\n");
}
int check_pos_valid(int loop, int value)//检查是否存在有多个皇后在同一行/列/对角线的情况
{
    int index;
    int data;
    for (index = 0; index < loop; index++)
    {
        data = gEightQueen[index];
        if (value == data)
            return 0;
        if ((index + data) == (loop + value))
            return 0;
        if ((index - data) == (loop - value))
            return 0;
    }
    return 1;
}
void eight_queen(int index)
{
    int loop;//行数
    for (loop = 0; loop < nQuens; loop++)
    {
        if (check_pos_valid(index, loop))
        {
            gEightQueen[index] = loop;
            if (nQuens-1 == index)//如果已经有nQuens行了，那就说明一个棋盘已经填满可以开始下一个棋盘了
            {
                gCount++;
                print();
                gEightQueen[index] = 0;
                return;
            }
            eight_queen(index + 1);
            gEightQueen[index] = 0;
        }
    }
}
int main(int argc, char*argv[])
{
    eight_queen(0);
    printf("total= %d\n",gCount);
    return 0;
}