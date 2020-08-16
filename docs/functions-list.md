
## TextParse Class

#### List of all functions :
------
```cpp
bool loadFile();
```
*Loads the text file (.conf) provided to TextParse constructor.*

------
```cpp
bool showBuffer();
```
*Displays all the raw data loaded from the text (.conf) file, stored in the buffer(vector) memory.*

------
```cpp
bool dataParse();
```
*Formats the raw data from buffer(vector) memory.*

------
```cpp
bool showFormattedDataAll();
```
*Displays all the formatted data from key(vector) and value(vector).*

------
```cpp
string getConfigValue(int index);
```
*Get the provided index data stored in value(vector).*

------
```cpp
string getConfigKey(int index);
```
*Get the provided index data stored in key(vector).*

------
```cpp
int getParseDataSize();
```
*Get the parsed data size from key(vector) memory.*

------
```cpp
bool sortBuffer();
```
*Sorts data from buffer to another buffer, that can be written to a file.*

*using **std::stable_sort** (Merge sort)*

------
```cpp
bool writeSortedConf();
```
*Writes data from the sorted buffer to a new file.*
