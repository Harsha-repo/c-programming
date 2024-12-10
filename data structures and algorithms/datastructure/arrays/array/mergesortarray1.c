#include <stdio.h>

int main() {
    int nums1[] = {0, 4, 8, 9, 0, 0, 0, 0}; // nums1 has extra space
    int nums2[] = {5, 6};
    int nums3[] = {2, 3};

    int m = 4; // Size of valid elements in nums1
    int n = 2; // Size of nums2
    int o = 2; // Size of nums3

    int p1 = m - 1;         // Pointer for nums1
    int p2 = n - 1;         // Pointer for nums2
    int p3 = o - 1;         // Pointer for nums3
    int p = m + n + o - 1;  // Pointer for the end of nums1

    // Merge nums2 and nums3 into nums1
    while (p1 >= 0 || p2 >= 0 || p3 >= 0) {
        if (p1 >= 0 && (p2 < 0 || nums1[p1] >= nums2[p2]) && (p3 < 0 || nums1[p1] >= nums3[p3])) {
            nums1[p] = nums1[p1];
            p1--;
        } else if (p2 >= 0 && (p3 < 0 || nums2[p2] >= nums3[p3])) {
            nums1[p] = nums2[p2];
            p2--;
        } else if (p3 >= 0) {
            nums1[p] = nums3[p3];
            p3--;
        }
        p--;
    }

    // Print the merged and sorted array
    printf("Merged array: ");
    for (int i = 0; i < m + n + o; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}

// inside if p1>0 elements are still present in the array 
//p1<0 is ensuring that the p2 array having some elements left in the array if this is false then there is no comparison done in next step
//nums1[p1] >= nums2[p2] comparing the elements of the two array 1 and 2 checking nullity of arrays before comparison
// same way 1 and 3 are compared  p3 < 0 || nums1[p1] >= nums3[p3])
