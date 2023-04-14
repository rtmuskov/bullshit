#include <stdio.h>

int main() {
    int n, m = 0;
    int t;
    int k,l,g,f;
    int flag = 1;
    int fl = 1;
    while (flag) {
        printf("If you want to initialize the array press 1, if you want to stop programm press 0\n");
        k = scanf("%d", &flag);
        if (k == EOF) {
            return 0;
        }
        while (k != 1) {
            printf("This program works only with numbers\n");
            scanf("%*[^\n]");
            printf("If you want to initialize the array press 1, if you want to stop programm press 0\n");
            k = scanf("%d", &flag);

        }
        if (flag == 1) {
            printf("n=");
            g = scanf("%d", &n);
            if (g == EOF) {
                return 0;
            }
            while (g != 1) {
                printf("This program works only with numbers\n");
                scanf("%*[^\n]");
                printf("n=");
                g = scanf("%d", &n);
            }
            while(n<3) {
                printf( " n must be greater than 3\n");
                printf("n=");
                g = scanf("%d", &n);
                if (g == EOF) {
                    return 0;
                }
                while (g != 1) {
                    printf("This program works only with numbers\n");
                    scanf("%*[^\n]");
                    printf("n=");
                    g = scanf("%d", &n);
                }

            }
            printf("m=");
            l = scanf("%d", &m);
            if (l == EOF) {
                return 0;
            }
            while (l != 1) {
                printf("This program works only with numbers\n");
                scanf("%*[^\n]");
                printf("m=");
                l = scanf("%d", &m);
            }
            while (m<3) {
                printf( " n must be greater than 3\n");
                printf("m=");
                l = scanf("%d", &m);
                if (l == EOF) {
                    return 0;
                }
                while (l != 1) {
                    printf("This program works only with numbers\n");
                    scanf("%*[^\n]");
                    printf("m=");
                    l = scanf("%d", &m);
                }
            }
            int arr[n][m];
            printf("Enter elements\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; ++j) {
                    scanf("%d", &arr[i][j]);
                }

            }
            while (fl) {
                printf("if you want to print the initial array press 1, if you want to print the changed array press 2, if you want to exit press 0\n");
                f = scanf("%d", &fl);
                if (f == EOF) {
                    return 0;
                }
                while (f != 1) {
                    printf("This program works only with numbers\n");
                    scanf("%*[^\n]");
                    printf("if you want to print the initial array press 1, if you want to print the changed array press 2, if you want to exit press 0\n");
                    f = scanf("%d", &fl);

                }
                if (fl == 1) {
                    printf("The matrix:\n");
                    for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) {
                            printf("%d ", arr[i][j]);
                        }
                        printf("\n");
                    }
                }
                if (fl == 2) {
                    int arr2[n][m];
                    for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) {
                            arr2[i][j]=arr[i][j];
                        }
                        printf("\n");
                    }
                    for (int j = 0; j < m; ++j) {
                        t = arr2[1][j];
                        arr2[1][j] = arr2[n - 2][j];
                        arr2[n - 2][j] = t;

                    }
                    printf("\n");
                    printf("The matrix:\n");
                    for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) {
                            printf("%d ", arr2[i][j]);
                        }
                        printf("\n");
                    }
                }


            }
        }
        if (flag == 0) {
            break;
        }
    }
    return 0;
}
