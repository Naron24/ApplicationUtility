# ApplicationUtility

The experimental project that can facilitate the development from the abstraction layers

The solution of the exercises (MatchSticks and FactorialFromNumber) is located in the Matches folder.

But feel free to browse through all the code I've read, as I was developing usefull functionality classes,
that can help me develop any applications in the future.

### The code is divided into two parts the easy to create and the architecturally sophisticated:

## The easy one
```C++
///Main class with the logic inside
Exercise exer;
///2 different implementations in 2 methods
 exer.MatchSticksMenu();
 exer.FactorialMenu();
```
## The Sophisticated one
```C++
///The preparation variables
///Algorythm - is a class that's 
///responsible for the main program logic 
IAlgorythm* algo = new MatchesAlgo();

///The presentation part - responsible for showing the information to the users
IMenu* menu = new MatchesMenu(algo);

///Application the main workflow part of the application
IApplication* app = new MatchesApplication();

///Initialization part 
///for Matches exercise
app->Initialize()
  .SetAlgo(*algo).SetMenu(*menu)
	.Start();
algo = new FactorialAlgo();
menu = new FactorialMenu(algo);
///for Factorial exercise
app->Initialize()
	.SetAlgo(*algo).SetMenu(*menu)
	.Start();
```
