#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define mp make_pair
#define pb push_back
#define input(s) freopen(s, "r", stdin)
#define output(s) freopen(s, "w", stdout)
#define forn(i, n) for (int i = 0; i < n; i++)

typedef long long int ll;
typedef long double ld;

class Car
{
public:
  vector<int> streetsId;

  void print()
  {
    for (int i = 0; i < streetsId.size(); i++)
    {
      cout << streetsId[i] << " " << endl;
    }
  }
};

class Street
{
public:
  int id;
  int start;
  int end;
  int time;
  string name;

  Street(int id, int start, int end, int time, string name)
  {
  this->id = id;
  this->start = start;
  this->end = end;
  this->time = time;
  this->name = name;
  }

  void print()
  {
    cout << id << start << end << time << name << endl;
  }
};

class Intersection
{
public:
  unordered_map<int, int> streetToCount;
};

class Schedule
{
public:
  int id;
  vector<pair<string, int>> streetAndTime;
};

int main(int argc, char *argv[])
{
  input(argv[1]);
  output(argv[2]);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int D, I, S, V, F;
  unordered_map<string, int> streetNameToId;
  vector<Street> streets;
  vector<Car> cars;

  cin >> D >> I >> S >> V >> F;

  for (int i = 0; i < S; i++)
  {
    int B, E,timeTaken;
    string name;
    cin >> B >> E >> name >> timeTaken;

    Street street(i,B,E,timeTaken,name);

    streets.push_back(street);

    streetNameToId[street.name] = street.id;
  }

  for (int i = 0; i < V; i++)
  {
    int P;
    cin >> P;

    Car car;

    for (int i = 0; i < P; i++)
    {
      string name;
      cin >> name;

      int streetId = streetNameToId[name];

      car.streetsId.push_back(streetId);
    }

    cars.push_back(car);
  }

  vector<Intersection> intersections(I);
  for (const Car &car : cars)
  {
    for (const int streetId : car.streetsId)
    {
      intersections[streets[streetId].end].streetToCount[streetId]++;
    }
  }

  vector<Schedule> result;
  for (int i = 0; i < intersections.size(); ++i)
  {
    if (intersections[i].streetToCount.size() == 0)
      continue;

    Schedule s;
    s.id = i;

    int totalNumberOfCars = 0;
    const int secondsInCycle = intersections[i].streetToCount.size();
    for (const auto &streetToCount : intersections[i].streetToCount)
    {
      totalNumberOfCars += streetToCount.second;
    }
    for (const auto &streetToCount : intersections[i].streetToCount)
    {
      s.streetAndTime.push_back({streets[streetToCount.first].name, secondsInCycle * streetToCount.second / totalNumberOfCars + 1});
    }
    result.push_back(s);
  }

  cout << result.size() << endl;

  for (const auto &schedule : result)
  {
    cout << schedule.id << endl;
    cout << schedule.streetAndTime.size() << endl;

    for (const auto &streetAndTime : schedule.streetAndTime)
    {

      cout <<  streetAndTime.first << " " << streetAndTime.second << endl;
    }
  }
  return 0;
}
