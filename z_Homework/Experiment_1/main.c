#include <stdio.h>
#include <stdlib.h>

int chooseMenu();
void printData(int data[], int length);
int readFile(int data[]);
void bubbleSort(int data[], int length);
void exchanMaxSort(int data[], int length);
int binarySearch(int data[], int key, int low, int high);

// 主函数
void main()
{
    // 初始化主函数变量
    int length, choose, readReady = 0, sortReady = 0, data[100];
    printf("Welcome to use the program. Please enter the number to choose.\n");
    do
    {
        choose = chooseMenu();
        printf("---------------------------------------------\n");
        // 先对选择是否合格进行初步判断
        if ((choose == 21 || choose == 22 || choose == 3) && readReady == 0)
        {
            printf("Please read data first.\n");
            continue;
        }
        if (choose == 3 && sortReady == 0)
        {
            printf("Please sort data first.\n");
            continue;
        }

        // 功能调用
        switch (choose)
        {
        // 选择退出
        case 0:
            break;
        // 选择读取数据
        case 1:
            length = readFile(data);
            if (length == 0)
                return;
            readReady = 1;
            break;
        // 选择冒泡排序
        case 21:
            bubbleSort(data, length);
            sortReady = 1;
            break;
        // 选择选择排序
        case 22:
            exchanMaxSort(data, length);
            sortReady = 1;
            break;
        // 选择二分算法搜索
        case 3:;
            int key;
            printf("Enter a value to search: ");
            scanf("%d", &key);
            int pos = binarySearch(data, key, 0, length - 1);
            if (pos != -1)
            {
                // 查找失败就插入数据
                printf("Opps. We couldn't found it. But we'll add it into the array (position %d).\n", pos + 1);
                length++;
                for (int i = length; i > pos - 1; i--)
                    data[i + 1] = data[i];
                data[pos] = key;
                printData(data, length);
            }
            break;
        // 选择其他数字
        default:
            printf("Entering wrong! (Tips: enter 0 to exit)\n");
        }
    } while (choose != 0);
    printf("Thanks for using~");
}

// 用来打印菜单并返回结果
int chooseMenu()
{
    int choose;
    printf("\
---------------------------------------------\n\
    1. Reading the data from the file\n\
    2. Sorting algorithms\n\
    3. Binary search algorithm\n\
You choose: ");
    scanf("%d", &choose);
    if (choose != 2)
        return choose;
    printf("\
---------------------------------------------\n\
    2.1 Bubble sort algorithm\n\
    2.2 Exchange Maximum sort (select) Algorithm\n\
You choose: ");
    scanf("%d", &choose);
    if (choose == 1)
        return 21;
    else if (choose == 2)
        return 22;
    else
        return choose;
}

// 用来打印数据
void printData(int data[], int length)
{
    printf("We have seccesfully completed. Here's the data: \n");
    for (int i = 0; i < length; i++)
        printf("%2d   ", data[i]);
    printf("\n");
}

// 用来打开并读取文件
int readFile(int data[])
{
    int length = 0;
    FILE *file;
    if ((file = fopen("./data.txt", "r")) == NULL)
    {
        printf("File open error!\n");
        return 0;
    };
    while (!feof(file))
    {
        fscanf(file, "%d ", &data[length]);
        length++;
    }

    if (fclose(file))
    {
        printf("Sorry. I can not close the file :(\n");
        return 0;
    }
    printData(data, length);
    return length;
}

// 用来冒泡排序
void bubbleSort(int data[], int length)
{
    int temp;
    for (int j = 0; j < length - 1; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
            if (data[i] > data[i + 1])
            {
                // 调换数据
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
    }
    printData(data, length);
}

// 用来选择排序
void exchanMaxSort(int data[], int length)
{
    int min, temp;
    for (int i = 0; i < length - 1; i++)
    {
        min = i;
        for (int j = i; j < length; j++)
            if (data[min] > data[j])
                min = j;
        // 调换数据
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
    printData(data, length);
}

// 用来二分查找
int binarySearch(int data[], int key, int low, int high)
{
    int mid = (low + high) / 2;
    if (data[mid] < key)
        low = mid + 1;
    else if (data[mid] > key)
        high = mid - 1;
    else
    {
        printf("We've found the value in the position: %d\n", mid + 1);
        return -1;
    }
    if (low >= high)
        return low;
    return binarySearch(data, key, low, high);
}
