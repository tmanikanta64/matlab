# include <stdio.h>
// S# include <math.h>

int main(int argc, const char** argv){

    float a[2];
    float b[2];
    float x; // initialize ??
    float f; // initialize ??
    printf("\n enter the intervals:");
    for(int i = 0; i < 2; i++) {
        scanf("%f", &a[i]);
        b[i] = pow(a[i], 3) - 25;
    }

    if(b[0] * b[1] > 0) {

        printf("root doesn't lies between intervals");

    } else {
        int i=0;
        while(abs(b[1]) > 0.0001f) {
            x = (a[0] + a[1]) / 2;
            f = pow(x, 3) - 25;
            i++;
            if(f * b[0] < 0) {
                a[1] = x;
                b[1] = f;
                printf("\n root lies between %f & %f ", a[0], a[1]);
            } else {
                a[0]=x;
                b[0]=f;
                printf("\n root lies bw %f & %f",a[0],a[1]);
            }
        }
    }
    printf("\n root is %2.4f",a[1]);
}
