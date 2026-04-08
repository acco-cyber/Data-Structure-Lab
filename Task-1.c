#include <stdio.h>

int main() {
    int DATA[14] = {0, 11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
    int BEG = 0, END = 14;
    int MID, ITEM;

    printf("Enter ITEM to search: ");
    scanf("%d", &ITEM);

    while (BEG <= END) {
        MID = (BEG + END) / 2;

        printf("BEG = %d, END = %d, MID = %d, DATA[MID] = %d\n",
               BEG, END, MID, DATA[MID]);

        if (ITEM == DATA[MID]) {
            printf("\nITEM found at position %d\n", MID);
            return 0;
        }

        else if (ITEM > DATA[MID]) {
            BEG = MID + 1;
        }

        else {
            END = MID - 1;
        }
    }

    printf("\nITEM does not belong to DATA\n");

    return 0;
}
