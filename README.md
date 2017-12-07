# NFL Tour [![waffle.io](https://img.shields.io/badge/waffle-io-78BDF2.svg)](https://waffle.io/Jesus0342/CS1D-Project-2)
CS1D Project 2

## Coding Standards
Use [Linux kernel coding style](https://www.kernel.org/doc/html/latest/process/coding-style.html) standards that are applicable to C++.

### Variables
* Descriptive names
* Minimal abbreviations

### Functions
* Opening bracket on following line for functions only

Example:
```
void func()
{
```

```
if (boolVal) {
```

### Classes
* Name classes to begin with a capital letter
* Follow encapsulation paradigm (keep data members and helper functions private)

### Misc.
* Include guards in header file
* Test build and features before pushing to avoid compilation errors or crashes
* Verify data from file after implementation
* Descriptive commit messages

## Team Rules
* Notify others before working on a user story
* Let others know when you've completed something
* No fighting please
* Keep yourself online on Discord as much as possible. Never know when something new will come up that we have to fix quickly.

## Program Requirements

Your agile team is to write an application that stores the given National Football League (NFL) information into an ordered or unordered map (not using the map or unordered map STL or the QT map). The underlying data structure of the map is the choice of the team. The map should store either the stadiums and/or the souvenirs. The application will allow football fans to plan their dream vacation.   


1.	Write at least 10 agile stories (including description, tasks, test scenarios, and story points) before any software development.
2.	Display all the information related to a particular football team (team name, stadium name, seating capacity, location, conference, surface type, stadium roof type, star player). 
3.	Create a list of the NFL teams sorted by team name.
4.	Create a list of NFL stadiums and their corresponding team name sorted by stadium name.
5.	Create a list of only the American Football Conference teams sorted by team name.
6.	Create a list of only the National Football Conference teams sorted by team name.
7.	Create a list of only the stadiums that have an “open” stadium roof type and their corresponding team name sorted by stadium name. Display the number of stadiums have an “open” roof.
8.	Create a list of NFL star players and their corresponding team name sorted by team name.
9.	Create a list of NFL stadiums and their corresponding team names sorted by seating capacity (smallest to largest).  Be sure to display seating capacity.  Display the total capacity of all NFL teams.
10.	Create a list of NFL teams, their stadium names, their surface type, and their corresponding location sorted by surface type.

Planning a vacation:

1.	Provide the capability for a football fan to visit any other stadium of their choice starting at the Los Angeles Memorial Coliseum traveling the shortest distance.  Your Agile team should implement Dijkstra’s or the A* algorithm. Display the total distance travelled.
2.	Provide the capability for a football fan to plan his/her dream vacation by allowing a football fan to choose their starting stadium and all the other stadiums they would like to visit using the order specified.  Display the total distance travelled.
3.	Provide the capability to visit the all the stadiums starting at Ford Field traveling the shortest distance.
a.	Display the total distance traveled
4.	Provide the capability for a football fan to plan his/her dream vacation by allowing a football fan to choose their starting stadium
a.	Then allow a football fan to select all other stadiums campuses they wish to visit
b.	Plan the trip starting with the selected stadium then visit each of the other stadiums in the most efficient order (recursively choose the stadium closest to the previous stadium)    
c.	Display the total distance traveled
5.	Determine the minimum spanning tree (MST) connecting all the NFL stadiums using Prim’s or Kruskal’s algorithm. Display the associated mileage.
6.	Perform a DFS starting at Hard Rock Stadium.   Display the associated mileage.
7.	Perform a BFS starting at Lambeau Field.   Display the associated mileage.
8.	When taking any trip:
a.	A football fan can purchase multiple souvenirs  
b.	Your Agile team must keep track of the number of souvenirs purchased at each stadium Ag
c.	Display the total amount spent at each stadium and a grand total for all stadiums visited
9.	Maintenance (administrator only - requires a password to gain access)
a.	Provide the capability to add a new stadium and its corresponding souvenirs by having your program read from an input file given to the class
b.	Provide the capability to change the prices of the traditional souvenirs
c.	Provide the capability to add new traditional souvenirs
d.	Provide the capability to delete traditional souvenirs
10.	Provide the ability to modify stadium information including capacity if a team moves into a new stadium. (administrator only) (The Los Angeles Rams are planning to move to Farmers Field in 2019).
11.	What is the total seating capacity of the NFL teams?

The initial souvenir list is follows:
a.	Signed helmets		 	  $71.99

b.	Autographed Football		  $79.39

c.	Team pennant			  $17.99

d.	Team picture 			  $19.99

e.	Team jersey			$189.99

(Each team needs its own souvenir list so it can be modified)

Please let me know your partners by October 18th (three points will be deducted from your score if you do not meet this deadline). All projects are due by December 11th.   No late projects will be accepted.  Your team must demonstrate your project to me before it will be graded.   Each teammate must identify their accomplishments on the project. Not all team members will necessarily earn the same score. 
1.	Design a very readable, easy to use interface to demonstrate your program.  
2.	Contingency handling should include addressing invalid input. 
3.	Team must submit their Agile stories.  The team must follow the Scrum process (the Scrum master must document all meetings and the product owner must document the backlog).
4.	Submit a UML class diagram, at least three use cases, and at least three state diagrams with your project.
5.	Submit a test plan.
6.	Identify all data structures used.
7.	All changes must be persistent between executions. 
8.	Submit a discussing the Big-Oh of your project for at least five methods. 
9.	Identify all the data structures used. 
10.	Submit your coding standards and team rules.
11.	Each team must use a version control system, graphical user interface tool, automated documentation tool, and an Agile management tool. (GITHUB, DOXYGEN, WAFFIO.IO, QT, etc.)


Schedule:
First checkpoint – November 1st – 5 points

Second checkpoint – November 15th – 5 points

Final checkpoint – December 11th – 30 points
