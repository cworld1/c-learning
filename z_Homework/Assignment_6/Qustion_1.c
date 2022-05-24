#include <stdio.h>
void get_data(int *sewage_amt, int *frequency);
void display(int *mil_gal, int array_size);
void display_freq(int *frequency, int array_size);

void main()
{
    int sewage_amt[100], frequency[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    get_data(sewage_amt, frequency);
}

// 读取数据
void get_data(int *sewage_amt, int *frequency)
{
    int length = 0, current;
    FILE *fp = fopen("./EX6_1.DAT", "r");
    while (!feof(fp))
    {
        fscanf(fp, "%d", &current);
        sewage_amt[length] = current;
        length++;
        switch ((current - 1) / 10)
        {
        case 8:
            frequency[0]++;
            break;
        case 9:
            frequency[1]++;
            break;
        case 10:
            frequency[2]++;
            break;
        case 11:
            frequency[3]++;
            break;
        case 12:
            frequency[4]++;
            break;
        case 13:
            frequency[5]++;
            break;
        case 14:
            frequency[6]++;
            break;
        case 15:
            frequency[7]++;
            break;
        default:
            break;
        }
    }
    display(sewage_amt, length);
    display_freq(frequency, 8);
}

// 打印数据
void display(int *mil_gal, int array_size)
{
    printf("DAY    CALLON(MILLON)\n");
    for (int i = 0; i < array_size; i++)
        printf("%2d       %5d\n", i, mil_gal[i]);
}

// 打印频率
void display_freq(int *frequency, int array_size)
{
    printf("DAILY CALLON(MILLON)    FREQUENCY\n");
    for (int i = 0; i < array_size; i++)
        printf("  %3d ~ %3d               %2d\n", 10 * i + 81, 10 * i + 90, frequency[i]);
}