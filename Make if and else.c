int a = 5;
int b = 3;
if (a + b > 10)
//     Console.WriteLine("The answer is greater than 10");
// else
//     Console.WriteLine("The answer is not greater than 10");

    Console.WriteLine("The answer is less than 10");
else
    Console.WriteLine("The answer is not less than 10");



int a = 5;
int b = 3;
int c = 4;
if ((a + b + c > 10) && (a == b))
// {
//     Console.WriteLine("The answer is greater than 10");
//     Console.WriteLine("And the first number is equal to the second");
// }
// else
// {
//     Console.WriteLine("The answer is not greater than 10");
//     Console.WriteLine("Or the first number is not equal to the second");
// }

{
    Console.WriteLine("The answer is less than 10");
    Console.WriteLine("And the first number is equal to the second");
}
else
{
    Console.WriteLine("The answer is not less than 10");
    Console.WriteLine("Or the first number is not equal to the second");
}


int a = 5;
int b = 3;
int c = 4;
if ((a + b + c > 10) || (a == b))
// {
//     Console.WriteLine("The answer is greater than 10");
//     Console.WriteLine("Or the first number is equal to the second");
// }
// else
// {
//     Console.WriteLine("The answer is not greater than 10");
//     Console.WriteLine("And the first number is not equal to the second");
// }

{
    Console.WriteLine("The answer is less than 10");
    Console.WriteLine("Or the first number is equal to the second");
}
else
{
    Console.WriteLine("The answer is not less than 10");
    Console.WriteLine("And the first number is not equal to the second");
}
