#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculateDistances(int n, float** points, float** distances) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0, k = 0; j < n; ++j) {
            if (i != j) {
                float x1 = points[i][0];
                float y1 = points[i][1];
                float x2 = points[j][0];
                float y2 = points[j][1];
                float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
                distances[i][k] = distance;
                ++k;
            }
        }
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);

    float** points = (float**)malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++) {
        points[i] = (float*)malloc(2 * sizeof(float));
    }

    for (int i = 0; i < n; i++) {
        printf("Òî÷êà %d: ", i + 1);
        scanf("%f %f", &points[i][0], &points[i][1]);
    }

    float** distances = (float**)malloc(n * sizeof(float*));
    for (int i = 0; i < n; i++) {
        distances[i] = (float*)malloc((n - 1) * sizeof(float));
    }

    calculateDistances(n, points, distances);

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Òî÷êà %d: ", i + 1);
        for (int j = 0; j < n - 1; j++) {
            printf("%.2f ", distances[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(points[i]);
        free(distances[i]);
    }
    free(points);
    free(distances);

    return 0;
}
