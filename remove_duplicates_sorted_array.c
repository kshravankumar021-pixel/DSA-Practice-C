#include <stdio.h>

/*
 * Remove duplicates from a SORTED array in-place.
 * Returns the number of unique elements.
 */
int removeDuplicates(int nums[], int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int k = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main(void) {
    int nums[] = {2, 2, 3, 3, 3, 5, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, size);

    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates: ");

    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}
