#include <stdio.h>

/*
 * 当farh = 0, 20, ..., 300，
 * 分别打印华氏温度与摄氏温度对照表
 */
int main()
{
    float fahr;
    float celsius;
    
    int lower = 0; // 温度表的下限
    int upper = 300; // 温度表的上限
    int step = 20; // 步长

    fahr = lower;

    // printf("%3s\t%3s\n", "fahr", "celsius");

    // while(fahr <= upper) {
    //     celsius = (5.0/9.0) * (fahr-32.0);
    //     // 输出对齐%3.1f表明至少占3个字符宽，且小数点后面有1位数字
    //     printf("%3.0f%%\t%3.1f%%\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

    printf("%3s\t%3s\n", "fahr", "celsius");
    
    for(fahr = 0; fahr <= upper; fahr = fahr + step)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f%%\t%3.1f%%\n", fahr, celsius);
    }
    
    
    return 0;
}