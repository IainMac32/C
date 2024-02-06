// #include <stdio.h>
// #include <float.h>

// int main(){
//     printf(" Precision :\n");
//     printf(" Float : %d digits \n", FLT_DIG);
//     printf(" Double : %d digits \n", DBL_DIG);
//     printf(" Long Double : %d digits \n\n", LDBL_DIG);
//     printf(" Minimum and Maximum Values :\n");
//     printf(" Float : Minimum : %e, Maximum : %e\n", FLT_MIN, FLT_MAX);
//     printf(" Double : Minimum : %e, Maximum : %e\n", DBL_MIN, DBL_MAX);
//     printf(" Long Double : Minimum : %Le , Maximum : %Le\n", LDBL_MIN, LDBL_MAX);
// }

// #include <stdio.h>
// int main()
// {
//     const double Ped = 1.23456789;
//     // Printing options with different placeholders
//     // Minimum width = 0 , 2 digits after decimal
//     printf(" Printing options for Ped = %.2f:\n", Ped);

//     // Minimum width = 10 , 4 digits after decimal
//     printf(" Printing options for Ped = %10.4f:\n", Ped);

//     // Minimum width = 6 , 8 digits after decimal
//     printf(" Printing options for Ped = %6.8f:\n", Ped);
// }

// #include <stdio.h>
// int main()
// {
//     const float F = 1.23456789f;
//     const double D = 1.23456789;
//     const long double L = 1.23456789L;
//     printf(" Original values :\n");
//     printf(" Float : %.8f\n", F);
//     printf(" Double : %.8lf\n", D);
//     printf(" Long Double : %.8Lf\n\n", L);
//     printf(" Rounded values :\n");
//     printf(" Float : %.20f\n", F);
//     printf(" Double : %.20lf\n", D);
//     printf(" Long Double : %.20Lf\n", L);
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     double result = num / 3; // Implicitly convert int to double
//     printf(" Result : %f\n", result);
//     int num2 = 10.6;
//     printf(" num2 : %d\n", num2); // Implicitly convert double to int
// }

#include <stdio.h>

int main() {
    const int num1 = 10;
    const int num2 = 3;

    // 1. Print the division using int placeholder, ignoring anything after the decimal
    int resultInt = num1 / num2;
    printf("Division without casting using int placeholder: %d\n", resultInt);

    // 2. Print the division using double placeholder without casting (warning expected)
    double resultDoubleNoCast = num1 / num2; // This should be casted to double
    printf("Division without casting floating-point placeholder %f\n", resultDoubleNoCast);

    // 3. Print the division by casting one of the operands
    printf("Division (double with cast): %f\n", (double)num1 / num2); // This should be casted to double

    // 4. Print the division by casting both operands
    double resultDoubleBothCasted = (double)num1 / (double)num2;
    printf("Division (double with both cast): %f\n", resultDoubleBothCasted);

    return 0;
}

