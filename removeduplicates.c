#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int n = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            nums[n++] = nums[i];
        }
    }
  nums[n++] = nums[numsSize - 1];

    return n;
}

int main() {
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4};
    int length = removeDuplicates(arr, 11);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
