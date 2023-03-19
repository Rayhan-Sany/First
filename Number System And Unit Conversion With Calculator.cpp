//------------------------Number System And Unit Conversion With Simple Calculator------------------------------

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int Binary_to_Decimal(long int);
long int Binary_to_Octal(long int);
long int Binary_to_Hexadecimal(long int);
long int Decimal_to_Binary(long int);
long int Decimal_to_Octal(long int);
long int Decimal_to_Hexadecimal(long int);
long int Octal_to_Binary(long int);
long int Octal_to_Decimal(long int);
long int Octal_to_Hexadecimal(long int);
void Hexadecimal_to_Binary(char[]);
void Hexadecimal_to_Decimal(char[]);
void Hexadecimal_to_Octal(char[]);
void Number_System_Conversion();
void Unit_Conversion();
void Calculator();
void D_calculator();
void B_calculator();
int Control = 1;
int main()
{
    int option;
Home:
    Control = 1;
    system("cls");
    printf("Press 1 For Number System Conversion\n");
    printf("Press 2 For Unit Conversion\n");
    printf("Press 3 For Calculator\n");
    while (1)
    {
        printf("\nFor Exit Press 0 \n");
        printf("\nChoose Your Option\n");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            exit(0);
        case 1:

            Number_System_Conversion();
            if (Control == 2)
                goto Home;
            break;
        case 2:

            Unit_Conversion();
            if (Control == 2)
                goto Home;
            break;
        case 3:

            Calculator();
            if (Control == 2)
                goto Home;
            break;
        default:
            printf("Wrong Input Press Again\n");
        }
    }
    return 0;
}

// Number System Function Calling Part

void Number_System_Conversion()
{
    int operations, numbers = 1, checking;
    long int b, o, d;
    char h[100];
    int x, y, spacebar;

    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");

    while (Control == 1)
    {
        system("cls");
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");

        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");

        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");

        printf("\n=> OCTAL <=\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");

        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &operations);

        switch (operations)
        {
        case 1:
            printf("\n***BINARY TO DECIMAL***\n");
        D:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &b);

            checking = b;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", b);
                    printf("***TRY AGAIN****\n");
                    goto D;
                }
                else
                    checking = checking / 10;
            }

            Binary_to_Decimal(b);
            break;

        case 2:
            printf("\n***BINARY TO OCTAL***\n");
        E:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &b);

            checking = b;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", b);
                    printf("***TRY AGAIN****\n");
                    goto E;
                }
                else
                    checking = checking / 10;
            }

            Binary_to_Octal(b);
            break;

        case 3:
            printf("\n***BINARY TO HEXA-DECIMAL***\n");
        F:
            printf("\nEnter the Number in Binary form (0s & 1s): ");
            scanf("%ld", &b);

            checking = b;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 1)
                {
                    printf("\n%d IS NOT BINARY NUMBER.\n", b);
                    printf("***TRY AGAIN****\n");
                    goto F;
                }
                else
                    checking = checking / 10;
            }

            Binary_to_Hexadecimal(b);
            break;

        case 4:
            printf("\n***DECIMAL TO BINARY***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &d);
            Decimal_to_Binary(d);
            break;

        case 5:
            printf("\n***DECIMAL TO OCTAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &d);
            Decimal_to_Octal(d);
            break;

        case 6:
            printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
            printf("\nEnter the Number in Decimal form (0 to 9): ");
            scanf("%ld", &d);
            Decimal_to_Hexadecimal(d);
            break;

        case 7:
            printf("\n***OCTAL TO BINARY***\n");
        A:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &o);
            // CHECKING INPUT IS IN OCTAL FORM
            checking = o;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", numbers);
                    goto A;
                }
                else
                {
                    checking = checking / 10;
                    x++;
                }
            }
            Octal_to_Binary(o);
            break;

        case 8:
            printf("\n***OCTAL TO DECIMAL***\n");
        B:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &o);
            // CHECKING INPUT IS IN OCTAL FORM
            checking = o;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", numbers);
                    goto B;
                }
                else
                {
                    checking = checking / 10;
                    x++;
                }
            }
            Octal_to_Decimal(o);
            break;

        case 9:
            printf("\n***OCTAL TO HEXA-DECIMAL***\n");
        C:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &o);

            checking = o;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", numbers);
                    goto C;
                }
                else
                {
                    checking = checking / 10;
                    x++;
                }
            }
            Octal_to_Hexadecimal(o);
            break;

        case 10:
            printf("\n***HEXA-DECIMAL TO BINARY***\n");
        X:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &h);
            // check
            for (x = strlen(h) - 1; x >= 0; x--)
            {
                if (h[x] > 'f' && h[x] <= 'z' || h[x] > 'F' && h[x] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", h[x]);
                    goto X;
                }
            }
            Hexadecimal_to_Binary(h);
            break;

        case 11:
            printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
        Y:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &h);
            // check
            for (x = strlen(h) - 1; x >= 0; x--)
            {
                if (h[x] > 'f' && h[x] <= 'z' || h[x] > 'F' && h[x] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", h[x]);
                    goto Y;
                }
            }
            Hexadecimal_to_Decimal(h);
            break;

        case 12:
            printf("\n***HEXA-DECIMAL TO OCTAL***\n");
        Z:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &h);
            // check
            for (x = strlen(h) - 1; x >= 0; x--)
            {
                if (h[x] > 'f' && h[x] <= 'z' || h[x] > 'F' && h[x] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", h[x]);
                    goto Z;
                }
            }
            Hexadecimal_to_Octal(h);
            break;

        default:
            printf("\n***INVALID NUMBER***\n");
            break;
        }
        printf("\n\nDO YOU WANT TO CONTINUE NUMBER SYSTEM CONVERTION press 1 :\n");
        printf("DO YOU WANT TO BACK IN THE HOMEPAGE press 2 :\n");
        printf("DO YOU WANT TO Exit press 0 :\n");
        scanf("%d", &Control);
        if (Control == 2)
            break;

        if (Control == 0)
            exit(0);
    }
}

// Number System Convertion Functions Defination Part

long int Binary_to_Decimal(long int bin)
{
    int remainder, summation = 0, x = 0;
    while (bin != 0)
    {
        remainder = bin % 10;
        bin = bin / 10;
        summation = summation + remainder * pow(2, x);
        x++;
    }

    printf("\nEquivalent Decimal Number : %d", summation);
}

long int Binary_to_Octal(long int bin)
{
    int x = 0, remainder, sum = 0, remaining[100], length = 0;

    while (bin != 0)
    {
        remainder = bin % 10;
        bin = bin / 10;
        sum = sum + remainder * pow(2, x);
        x++;
    }
    x = 0;
    while (sum != 0)
    {
        remaining[x] = sum % 8;
        sum = sum / 8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        printf("%d", remaining[x]);
    }
}

long int Binary_to_Hexadecimal(long int bin)
{
    int remainder, x = 0, summation = 0, remaining[100], length = 0;

    while (bin != 0)
    {
        remainder = bin % 10;
        bin = bin / 10;
        summation = summation + remainder * pow(2, x);
        x++;
    }
    x = 0;
    while (summation != 0)
    {
        remaining[x] = summation % 16;
        summation = summation / 16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        switch (remaining[x])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d", remaining[x]);
        }
    }
}

long int Decimal_to_Binary(long int dec)
{
    int remainder[50], x = 0, length = 0;
    do
    {
        remainder[x] = dec % 2;
        dec = dec / 2;
        x++;
        length++;
    } while (dec != 0);

    printf("\nEquivalent Binary Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        printf("%d", remainder[x]);
    }
}

long int Decimal_to_Octal(long int dec)
{
    int remainder[50], x = 0, length = 0;
    do
    {
        remainder[x] = dec % 8;
        dec = dec / 8;
        x++;
        length++;
    } while (dec != 0);

    printf("\nEquivalent Octal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        printf("%d", remainder[x]);
    }
}

long int Decimal_to_Hexadecimal(long int dec)
{
    int remainder[50], x = 0, length = 0;
    do
    {
        remainder[x] = dec % 16;
        dec = dec / 16;
        x++;
        length++;
    } while (dec != 0);

    printf("\nEquivalent Hexa-Decimal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        switch (remainder[x])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d", remainder[x]);
        }
    }
}

long int Octal_to_Binary(long int oct)
{
    int remainder[50], length = 0, decimals = 0, x = 0, numbers, answers;

    while (oct != 0)
    {
        answers = oct % 10;
        decimals = decimals + answers * pow(8, x);
        x++;
        oct = oct / 10;
    }

    x = 0;
    do
    {
        remainder[x] = decimals % 2;
        decimals = decimals / 2;
        x++;
        length++;
    } while (decimals != 0);

    printf("\nEquivalent Binary Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        printf("%d", remainder[x]);
    }
}

long int Octal_to_Decimal(long int oct)
{
    int decimals = 0, x = 0, numbers, answers;

    while (oct != 0)
    {
        answers = oct % 10;
        decimals = decimals + answers * pow(8, x);
        x++;
        oct = oct / 10;
    }
    printf("\nEquivalent Decimal Number : %d", decimals);
}

long int Octal_to_Hexadecimal(long int oct)
{
    int remainder[50], length = 0, decimal = 0, x = 0, numbers, answers = 0;
    while (oct != 0)
    {
        answers = oct % 10;
        decimal = decimal + answers * pow(8, x);
        x++;
        oct = oct / 10;
    }
    x = 0;
    while (decimal != 0)
    {
        remainder[x] = decimal % 16;
        decimal = decimal / 16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        switch (remainder[x])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d", remainder[x]);
        }
    }
}

void Hexadecimal_to_Binary(char hex[])
{
    int x = 0;
    printf("\nEquivalent Binary Number : ");
    for (x = 0; x < strlen(hex); x++)
    {
        switch (hex[x])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;

        default:
            printf("\n Invalid hexa digit %c ", hex[x]);
        }
    }
}

void Hexadecimal_to_Decimal(char hex[])
{
    int x, numbers = 0, powered = 0, decimal = 0;

    for (x = strlen(hex) - 1; x >= 0; x--)
    {
        if (hex[x] == 'A' || hex[x] == 'a')
        {
            numbers = 10;
        }
        else if (hex[x] == 'B' || hex[x] == 'b')
        {
            numbers = 11;
        }
        else if (hex[x] == 'C' || hex[x] == 'c')
        {
            numbers = 12;
        }
        else if (hex[x] == 'D' || hex[x] == 'd')
        {
            numbers = 13;
        }
        else if (hex[x] == 'E' || hex[x] == 'e')
        {
            numbers = 14;
        }
        else if (hex[x] == 'F' || hex[x] == 'f')
        {
            numbers = 15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            numbers = hex[x] - 48;
        }

        decimal = decimal + numbers * pow(16, powered);
        powered++;
    }
    printf("\nEquivalent Decimal Number : %d", decimal);
}

void Hexadecimal_to_Octal(char hex[])
{
    int x, length, numbers = 0, powered = 0, decimal = 0, remainder[100];

    for (x = strlen(hex) - 1; x >= 0; x--)
    {
        if (hex[x] == 'A' || hex[x] == 'a')
        {
            numbers = 10;
        }
        else if (hex[x] == 'B' || hex[x] == 'b')
        {
            numbers = 11;
        }
        else if (hex[x] == 'C' || hex[x] == 'c')
        {
            numbers = 12;
        }
        else if (hex[x] == 'D' || hex[x] == 'd')
        {
            numbers = 13;
        }
        else if (hex[x] == 'E' || hex[x] == 'e')
        {
            numbers = 14;
        }
        else if (hex[x] == 'F' || hex[x] == 'f')
        {
            numbers = 15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            numbers = hex[x] - 48;
        }

        decimal = decimal + numbers * pow(16, powered);
        powered++;
    }

    x = 0, length = 0;
    while (decimal != 0)
    {
        remainder[x] = decimal % 8;
        decimal = decimal / 8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        printf("%d", remainder[x]);
    }
}

// -----------------Unit Conversion Function Small Small Part---------

void Fahrenheit_To_Celsius()
{
    float celsius, fahrenheit;

    /* Input temperature in fahrenheit */
    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of celsius */
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
}
void Fahrenheit_To_Kelvin()
{
    float kelvin, fahrenheit;
    printf("Enter temperature in fahrenheit: \n");
    scanf("%f", &fahrenheit);

    kelvin = ((fahrenheit - 32) * (5 / 9) + 273.15);
    printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
}

void Celsius_To_Fahrenheit()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &celsius);
    // celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}
void Celsius_To_Kelvin()
{
    float celsius, kelvin;

    // Asking for input
    printf("Enter the temperature in Celsius: \n");
    scanf("%f", &celsius);

    // Converting celsius to kelvin
    kelvin = celsius + 273.15;

    // Displaying output
    printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
}

void Temparature_Conversion()
{ 
    int option;
    while (Control == 1)
    {
        system("cls");
printf("----------------Temparature Conversion----------------\n\n");
        printf("\nPress 1 For Fahrenheit To Celsius\n");
        printf("Press 2 For Fahrenheit To Kelvin\n");
        printf("Press 3 For Celsius To Fahrenheit\n");
        printf("Press 4 For Celsius To Kelvin\n");

        printf("Choose Your Option : \n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            Fahrenheit_To_Celsius();
            break;

        case 2:
            Fahrenheit_To_Kelvin();
            break;
        case 3:
            Celsius_To_Fahrenheit();

            break;
        case 4:
            Celsius_To_Kelvin();
            break;
        default:
            printf("\nPlease press Any Valid Option\n");
        }

        printf("\n\n'Do YOU WANT TO CONTINUE Temparature Conversion' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO  Go Back ' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);
    }
}
void Mass_Conversion()
{
   

    int option;

    while (Control == 1)
    {  system("cls");
    printf("------------Mass_Conversion------------\n\n");
        printf("\nPress 1 For Milligram To Gram\n");
        printf("Press 2 For Gram To kilogram \n");
        printf("Press 3 For Kilogram To Gram\n");
        printf("Press 4 For Milligram To Kilogram \n");
        printf("Press 5 For Kilogram To Pound\n");
        printf("Press 0 For exit\n");

        printf("Choose Your Option : ");
        scanf("%d", &option);
        if (option == 0)
        {
            exit(0);
        }
        else if (option == 1)

        {
            float m;
            printf("Enter Milligram Value : \n");
            scanf("%.3f", &m);
            printf("%.3f Milligram  =  %.2f Gram ", m, m / 1000);
        }

        else if (option == 2)
        {
            float g;
            printf("Enter Gram Value : \n");
            scanf("%f", &g);
            printf("%.3f Gram  =  %.2f Kilogram ", g, g / 1000);
        }

        else if (option == 3)
        {
            float k;
            printf("Enter kilogram Value : \n");
            scanf("%f", &k);
            printf("%.3f kilogram  =  %.2f Gram ", k, k * 1000);
        }
        else if (option == 4)
        {
            float m;
            printf("Enter Milligram Value : \n");
            scanf("%f", &m);
            printf("%.3f Milligram  =  %.6f Kilogram ", m, m / 1000000);
        }
        else if (option == 5)
        {
            float k;
            printf("Enter Kilogram Value : \n");
            scanf("%f", &k);
            printf("%.3f Kilogram  =  %.6f Pound ", k, k * 2.2);
        }

        else
        {
            printf("\nPlease press Any Valid Option\n");
        }

        printf("\n\n'Do YOU WANT TO CONTINUE Mass Conversion' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO  Go Back ' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);
    }
}
void Length_Conversion()
{
    system("cls");
    printf("-------------Length Conversion-------------");

    int option;

    while (Control== 1)
    {
        printf("\nPress 1 For Centimeter To Meter\n");
        printf("Press 2 For Meter To kilometer \n");
        printf("Press 3 For Feet To Meter \n");
        printf("Press 4 Meter To Feet \n");
        printf("Press 5 For Kilometer To Meter\n");
        printf("Press 0 For exit\n");

        printf("Choose Your Option : ");
        scanf("%d", &option);
        if (option == 0)
        {
            exit(0);
        }
        else if (option == 1)

        {
            float c;
            printf("Enter Centimeter Value : \n");
            scanf("%f", &c);
            printf("%.3f Centimeter  =  %.2f Meter ", c, c / 100);
        }

        else if (option == 2)
        {
            float m;
            printf("Enter Meter Value : \n");
            scanf("%f", &m);
            printf("%.3f Meter  =  %.2f kilometer ", m, m / 1000);
        }

        else if (option == 3)
        {
            float f;
            printf("Enter  Value in Feet Unit : \n");
            scanf("%f", &f);
            printf("%.3f Feet  =  %.2f Meter ", f, f * 0.304);
        }
        else if (option == 4)
        {
            float m;
            printf("Enter Meter Value : \n");
            scanf("%f", &m);
            printf("%.3f Meter  =  %.6f Feet ", m, m * 3.28084);
        }
        else if (option == 5)
        {
            float k;
            printf("Enter Kilometer Value : \n");
            scanf("%f", &k);
            printf("%.3f Kilometer  =  %.6f Meter ", k, k * 1000);
        }

        else
        {
            printf("\nPlease press Any Valid Option\n");
        }

        printf("\n\n'Do YOU WANT TO CONTINUE Length Conversion' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO  Go Back ' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);
    }
}
// Unit Conversion Function Part

void Unit_Conversion()
{ system("cls");
    printf("------------Welcome To Unit Conversion-----------\n");

    int option;

    while (Control == 1)
    {
        printf("\nPress 1 For Length Conversion\n");
        printf("Press 2 For Temperature Conversion\n");
        printf("Press 3 For Mass Conversion\n");
        printf("Press 0 For exit\n");

        printf("Choose Your Option : ");
        scanf("%d", &option);
        if (option == 0)
        {
            exit(0);
        }
        switch (option)
        {
        case 0:
            exit(0);
        case 1:
            Length_Conversion();
            break;
        case 2:
            Temparature_Conversion();
            break;
        case 3:
            Mass_Conversion();
            break;
        default:
            printf("\nPlease press Any Valid Option\n");
        }
        printf("\n\n'Do YOU WANT TO CONTINUE Unit Conversion' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO Back HOMEPAGE' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);
    }
}

//---------------------- Calculator Function Part------------------------

void Calculator()
{
    int option;
    while(Control==1)
    {
    system("cls");
    printf("----------Welcome To Calculator----------\n");

    printf("For Binary Calculator press 1 \n");
    printf("For Decimal Calculator press 2 \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        B_calculator();
        break;
    case 2:
        D_calculator();
        break;
    default:
        printf("Wrong Input Press Again : ");
        break;
    }
printf("\n\n'Do YOU WANT TO CONTINUE Calculator' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO Back HOMEPAGE' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);

    }
}

void D_calculator()
{
    char ch;
    int t;
    double a, b;
    while (Control == 1)
    {
        printf("Enter  First operand: ");
        scanf("%lf", &a);
        printf("Enter an operator (+, -, *, /) : ");
        scanf(" %c", &ch);
        printf("Enter Second operand: ");
        scanf("%lf", &b);
        // Using switch case we will differentiate
        // operations based on different operator
        switch (ch)
        {
        // For Addition
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;
        // For Subtraction
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;
        // For Multiplication
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;
        // For Division
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
        // If operator doesn't match any case constant
        default:
            printf("Error! please write a valid operator\n");
        }
        printf("\n\n'Do YOU WANT TO CONTINUE Decimal Calculator' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO Go Back' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);
    }
}

void B_calculator()
{
    int option;
    printf("\n\n'--------Binary Calculator--------\n\n");
    while (Control == 1)
    {

        printf("For Addition press 1 \n");
        printf("For Subtraction press 2 \n");
        scanf("%d", &option);
        if (option == 1 || option == 2)
        {
            if (option == 1)
            {
                long binary1, binary2;
                int i = 0, remainder = 0, sum[20];

                printf("Enter the first binary number: ");
                scanf("%ld", &binary1);
                printf("Enter the second binary number: ");
                scanf("%ld", &binary2);
                while (binary1 != 0 || binary2 != 0)
                {
                    sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
                    remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
                    binary1 = binary1 / 10;
                    binary2 = binary2 / 10;
                }
                if (remainder != 0)
                    sum[i++] = remainder;
                --i;
                printf("Sum of two binary numbers: ");
                while (i >= 0)
                    printf("%d", sum[i--]);
            }
            else

            {
                long int bin1, bin2, dec, bintemp1, bintemp2;
            M:
                printf("Enter lst Largest binary number : \n");
                scanf("%ld", &bin1);
                bintemp1 = bin1;
                printf("Enter 2nd Smallest binary number :\n ");
                scanf("%ld", &bin2);
                bintemp2 = bin2;
                int remainder, summation1 = 0, summation2 = 0, x = 0;
                while (bin1 != 0)
                {
                    remainder = bin1 % 10;
                    bin1 = bin1 / 10;
                    summation1 = summation1 + remainder * pow(2, x);
                    x++;
                }

                x = 0;
                while (bin2 != 0)
                {
                    remainder = bin2 % 10;
                    bin2 = bin2 / 10;
                    summation2 = summation2 + remainder * pow(2, x);
                    x++;
                }

                dec = (summation1 - summation2);
                if (dec >= 0)
                {

                    x = 0;
                    int remainders[50], length = 0;
                    do
                    {
                        remainders[x] = dec % 2;
                        dec = dec / 2;
                        x++;
                        length++;
                    } while (dec != 0);

                    printf("\n%ld - %ld = ", bintemp1, bintemp2);
                    for (x = length - 1; x >= 0; x--)
                    {
                        printf("%d", remainders[x]);
                    }
                }
                else
                {
                    printf("Please Enter Largest Binaray Number As 1st Input\n");
                    goto M;
                }
            }
        }
        else
        {
            printf("Wrong Input Press Again ");
        }

        printf("\n\n'Do YOU WANT TO CONTINUE Binary Calculator' press 1\n");
        printf("'Do YOU WANT TO Exit' press 0\n");
        printf("'Do YOU WANT TO GO Back' press 2\n");
        scanf("%d", &Control);
        if (Control == 0)
            exit(0);
    }
}
     //--------------------------The End------------------------------//