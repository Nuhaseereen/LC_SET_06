int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i = 0;
    int* a = (int*)calloc(accountsSize, sizeof(int)); 
    while (i < accountsSize) {
        int j = 0;
        for (j = 0; j < accountsColSize[i]; j++) {
            a[i] += accounts[i][j];
        }
        i++;
    }
    int maxWealth = 0;
    for (i = 0; i < accountsSize; i++) {
        if (a[i] > maxWealth) {
            maxWealth = a[i];
        }
    }
    free(a); 
    return maxWealth;
}
