#include <stdio.h>
#include "replace.h"

int replace_str(char *input_p, char *output_p, char *old, char *new);

void main()
{
    FILE *input, *output;
    char input_name[MAXSIZES] = "D:\\Project\\C-Project\\z_Homework\\Experiment_2\\1.txt",
         output_name[MAXSIZES] = "D:\\Project\\C-Project\\z_Homework\\Experiment_2\\2.txt",
         old_word[MAXSIZES] = "max",
         new_word[MAXSIZES] = "MAX";
    char cur_line[MAXSIZES], cur_line_new[MAXSIZES];

    // 打开文件
    if ((input = fopen(input_name, "r+")) == NULL || (output = fopen(output_name, "w")) == NULL)
    {
        printf("fail to open the file!\n");
        return;
    }

    // 循环读取
    while (!feof(input))
    {
        memset(cur_line, 0, sizeof cur_line);
        fgets(cur_line, MAXSIZES, input);
        // if (replace_str(cur_line, cur_line_new, old_word, new_word) == FOUNDED)
        //     printf("We found this line: %s -> Correct: %s", cur_line, cur_line_new);
        // fputs(cur_line_new, output);
        puts(cur_line);
    }

    // 关闭文件
    fclose(input);
    fclose(output);
}