#include <stddef.h>
#include <math.h>

enum matrix_weight { NONE, THIN, FAT, PERFECT };

enum matrix_weight thin_or_fat(size_t size, const int matrix[size][size]) {
    double srw = 0.0;
    double srh = 0.0;

    for (size_t i = 0; i < size; i++) {
        int sum1 = 0;
        int sum2 = 0;

        for (size_t j = 0; j < size; j++) {
            sum1 += matrix[i][j];
            sum2 += matrix[j][i];
        }

        if (sum1 < 0 || sum2 < 0)
            return NONE;

        srw += sqrt(sum1);
        srh += sqrt(sum2);
    }

    if (fabs(srw - srh) <= 1e-10)
        return PERFECT;

    return srh > srw ? THIN : FAT;
}
