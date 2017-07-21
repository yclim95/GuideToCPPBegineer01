# Lecture09 (Files Processing)

## Include Header Files
```cpp
#include <fstream>
```

## Input File Stream
```cpp
int main()
{
  ifstream inFile;
  inFile("FileName.txt");

  inFile >> name;
}
```

## Output File Stream
```cpp
int main()
{
  ofstream outFile;
  outFile("FileName.txt");

  outFile >> name;
}
```
