int counter = 0;
while (counter < 10)
{
  Console.WriteLine($"Hello World! The counter is {counter}");
  counter++;
}


// The while loop tests the condition before executing the code following the while. The do ... while loop executes the code first, and then checks the condition. It looks like this:

int counter = 0;
do
{
  Console.WriteLine($"Hello World! The counter is {counter}");
  counter++;
} while (counter < 10);
