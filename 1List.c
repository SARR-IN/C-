var names = new List<string> { "<name>", "Falcon", "Supriya" };
foreach (var name in names)
{
  Console.WriteLine($"Hello {name.ToUpper()}!");
}


// Modify list Contents

Console.WriteLine();
names.Add("Mauli");
names.Add("Samuel");
names.Remove("Guzmaan");
foreach (var name in names)
{
  Console.WriteLine($"Hello {name.ToUpper()}!");
}

Console.WriteLine($"My name is {names[0]}.");
Console.WriteLine($"I've added {names[2]} and {names[3]} to the list.");

Console.WriteLine($"The list has {names.Count} people in it");
