# Hashcode 2021
## Trafffic signaling
### Problem statement for the Online Qualications of Hash Code 2021

### Introduction

The world's first traffic light dates back to 1868. It was installed in London to control
traffic for... horse-drawn vehicles! Today, traffic lights can be found at street
intersections in almost every city in the world, making it safer for vehicles to go
through them.
Traffic lights have at least two states, and use one color (usually red) to signal "stop",
and another (usually green) to signal that cars can proceed through. The very first
traffic lights were manually controlled. Nowadays they are automatic, meaning that
they have to be carefully designed and timed in order to optimize the overall travel
time for all the paicipants in traffic.
Task
Given the description of a city plan and planned paths for all cars in that city,
optimize the schedule of traffic lights to minimize the total amount of time spent in
traffic, and help as many cars as possible reach their destination before a given
deadline.
``Problem description``
City plan
The city plan consists of one-way streets and intersections. Each street:
* is identied by a unique name,
* leads from one intersection to another,
* does not contain any intersections in between (if two streets need to cross
outside an intersection, a bridge or tunnel is used),
* has a xed amount of time L it takes a car to get from the beginning of the
street to the end. If it takes L seconds to drive through a street and a car
enters it at time T it will arrive at the end of the street precisely at T+L ,
independently of how many cars are on the street.
1
Figure 1. A city plan with 4 intersections (0, 1, 2, and 3) and 7 streets (a, b, ... ,
g-street). Intersections 0 and 2 are directly connected both ways through a-street
and b-street. c-street uses a bridge over a-street and b-street and does not
intersect with those two streets.
Note that while the streets are one-way, it is still possible to have two one-way
streets connecting two intersections in opposite directions (see intersections 0 and
2 and a-street and b-street in Figure 1). However, there will never be two streets
connecting two intersections in the same direction.
Each intersection:
* has a unique integer ID (for example 0, 1, 2 ...),
* has at least one street that comes into it, and at least one street coming out
of it.
## Traffic lights
There is a traffic light at the end of every street (just before the intersection). Each
traffic light has two states: a green light indicates that the cars from that street can
cross the intersection and head towards any other street, while a red light indicates
that the cars from that street need to stop. At most one traffic light will be green at
each intersection at any given time. While the light is green for an incoming street,
only cars from this street will be allowed to enter the intersection (and move to any
outcoming street), all other cars have to wait.
Queuing up
When the light at the end of a street is red, arriving cars queue up waiting for the
light to turn green. When the light is green, one car can cross the intersection
every second. This means that if a green light for a given street lasts for T i
2 
seconds then only the first T i cars from that street will continue their travel Others will need to wait for the following green light.

## Input data set

### File format
Each input data set is provided in a plain text le. The le contains only ASCII
characters with lines ending with a single '\n' character (also called “UNIX-style” line
endings). When multiple numbers are given in one line, they are separated by a
single space between each two numbers.
* The first line contains ve numbers:
6
○ an integer D (1 ≤ D ≤ 10 4
) - the duration of the simulation, in seconds,
○ an integer I (2 ≤ I ≤ 10 5
) - the number of intersections (with IDs from 0
to I -1 ),
○ an integer S (2 ≤ S ≤ 10 5
) - the number of streets,
○ an integer V (1 ≤ V ≤ 10 3
) - the number of cars,
○ an integer F (1 ≤ F ≤ 10 3
) - the bonus points for each car that reaches
its destination before time D .
* The next S lines contain descriptions of streets. Each line contains:
○ two integers B and E (0 ≤ B < I , 0 ≤ E < I ) - the intersections at the sta
and the end of the street, respectively,
○ the street name (a string consisting of between 3 and 30 lowercase
ASCII characters a -z and the character - ),
○ an integer L (1 ≤ L ≤ D ) - the time it takes a car to get from the
beginning to the end of that street.
* The next V lines describe the paths of each car. Each line contains:
○ an integer P (2 ≤ P ≤ 10 3
) - the number of streets that the car wants to
travel,
○ followed by P names of the streets: The car stas at the end of the
first street (i.e. it waits for the green light to move to the next street)
and follows the path until the end of the last street. The path of a car is
always valid, i.e. the streets will be connected by intersections.
### Example
7
6 4 5 2 1000
2 0 rue-de-londres 1
0 1 rue-d-amsterdam 1
3 1 rue-d-athenes 1
2 3 rue-de-rome 2
1 2 rue-de-moscou 3
4 rue-de-londres rue-d-amsterdam
rue-de-moscou rue-de-rome
3 rue-d-athenes rue-de-moscou
rue-de-londres
The simulation lasts 6 seconds, there are 4
intersections, 5 streets, and 2 cars; and a car
scores 1000 points for reaching the destination
on time.
Street rue-de-londres starts at intersection 2,
ends at 0, and it takes L=1 seconds to go from
the beginning to the end.
Street rue-d-amsterdam starts at intersection 0,
ends at 1 and has L=1.
Street rue-d-athenes starts at intersection 3,
ends at 1 and has L=1.
Street rue-de-rome starts at intersection 2,
ends at 3 and has L=2.
Street rue-de-moscou starts at intersection 1,
ends at 2, and has L=3.
The fifirst car starts at the end of
rue-de-londres and then follows the given path.
The second car starts at the end of
rue-d-athenes and then follows the given path.
Note that the input le does not contain any blank lines. Blank lines and line
wrapping in the example above are added for clarity.
Figure 5. The streets and intersections, as given by the example input data set, as
well as the two cars at their initial positions.
Submissions
Your submission describes the traffic light schedules you want to set for specic
intersections.
### File format
The first line must contain a single integer A (0 ≤ A ≤ I ), the number of intersections
for which you specify the schedule.
Then, the submission le must describe the intersection schedules, in any order.
Each schedule must be described by multiple lines:
* the first line containing a single integer i (0 ≤ i < I ) – the ID of the
intersection,
* the second line containing a single integer E i
(0 < E i) – the number of
incoming streets (of the intersection i ) covered by this schedule,
* E i
lines describing the order and duration of green lights. Each of those lines
must contain (separated by a single space):
○ the street name,
○ an integer T (1 ≤ T ≤ D ) – for how long each street will have a green
light.
8
Each intersection can only be listed once in the submission le. And each street
name can only be listed once per schedule. If the street name is not present in
intersection conguration it means its traffic light is always red. If an intersection
conguration is not present in the submission le then all of its traffic lights are
always red.
### Example
Note that the input le does not contain any blank lines. Blank lines and line
wrapping in the example above are added for clarity.
### Scoring
A score is awarded for each car that nishes its path before the end of the
simulation. For a car that nishes its path at time T , the awarded score is (F ) points
(xed award for nishing the path) and additionally (D - T ): one point for each
second le when the car nished the path.
In other words: if a car nishes at time T it scores
* F + (D – T) points if T ≤ D ,
* or 0 points otherwise.
The score for the solution is the sum of scores for all cars.
9
3
1
2
rue-d-athenes 2
rue-d-amsterdam 1
0
1
rue-de-londres 2
2
1
rue-de-moscou 1
There are 3 intersections with traffic light schedules:
On intersection 1 the traffic lights are green for
2 different incoming streets, namely
rue-d-athenes for 2 seconds, then green for
rue-d-amsterdam for 1 second, then again rue-d-athenes.
On intersection 0 the traffic lights are green for
1 incoming street only, namely
rue-de-londres for 2 seconds per cycle (it's always green
for rue-de-londres).
On intersection 2 the traffic lights are green for
1 incoming street only, namely
rue-de-moscou for 1 second per cycle (it's always green for
rue-de-moscou).
### Example
For instance, in the example above, the first car:
* T = 0s: crosses immediately intersection 0, as the traffic light there is always
green,
* T = 1s: one second later, it has gone through rue-d-amsterdam. However,
the traffic light is red (as for intersection 1, the submission has set the
duration for rue-d-athenes's light to be green for 2 seconds),
* T = 2s: the car now crosses the intersection and continues to rue-demoscou,
* T = 5s: the car has reached the end of rue-de-moscou, nds a green light at
intersection 2, crosses it and continues to rue-de-rome.
This first car would have reached the end of rue-de-rome at T = 7s, but this is past
the deadline of the run (dened in the input data set). Meaning that 0 points are
assigned to this car.
The second car:
* T = 0s: nds a green light at intersection 1 and continues to rue-de-moscou,
* T = 3s: reaches the end of rue-de-moscou, nds a green light at intersection
2 and no cars waiting, so it immediately crosses the intersection and heads
towards rue-de-londres,
* T = 4s: the car reaches the end of rue-de-londres, which is its destination.
So the second car nishes before the deadline, and gets a score of 1000 + (6 - 4) =
1002 points.
* The final score for this submission is 1002.
* Note that there are multiple data sets representing separate instances of the
problem. The final score for your team will be the sum of your best scores for
the individual data sets