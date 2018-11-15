#include <stdio.h>
#include <math.h>

double babyloninan_sqrt(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lf \n",babyloninan_sqrt(n));
    return 0;
}

double babyloninan_sqrt(int n)
{
    double prev_guess = n/2.0;
    double r;
    double guess;
    r = n/prev_guess;
    guess = (prev_guess+r)/2;
    while(fabs(guess-prev_guess) > (prev_guess)/100)
    {
        prev_guess = guess;
        r = n/prev_guess;
        guess = (prev_guess+r)/2;
    }
    return guess;
}
