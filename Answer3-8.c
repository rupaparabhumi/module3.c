#include <stdio.h>

float max_num(float *array, size_t len)
{
    float max = array[0];
    for(size_t  i = 0; i < len; ++i)
    {
        if(array[i] > max)
            max = array[i];
    }

    return max;
}

int main(void)
{
    float nums[] = { 1.1, -2.2, 6,-12 };

    float max = max_num(nums, sizeof nums / sizeof *nums);

    printf("The max number is: %f\n", max);

    return 0;
}
