
## TextParse Class

#### List of all functions :
------
```cpp
bool loadFile();
```

* *return type boolean*

*Loads the text file (.conf) provided to TextParse constructor.*

------
```cpp
bool showBuffer();
```
* *return type boolean*

*Displays all the raw data loaded from the text (.conf) file, stored in the buffer(vector) memory.*

------
```cpp
bool dataParse();
```
* *return type boolean*

*Formats the raw data from buffer(vector) memory.*

------
```cpp
bool showFormattedDataAll();
```

* *return type boolean*

*Displays all the formatted data from key(vector) and value(vector).*

------
```cpp
string getConfigValue(int index);
```
* *One args : type int*

* *return type strings*

*Get the provided index data stored in value(vector).*

------
```cpp
string getConfigKey(int index);
```
* *One args : type int*

* *return type strings*

*Get the provided index data stored in key(vector).*

------
```cpp
bool sortBuffer();
```
* *return type boolean*

*Sorts data from buffer to another buffer, that can be written to a file.*

*using **std::stable_sort** (Merge sort)*

------
```cpp
bool writeSortedConf();
```
* *return type boolean*

*Writes data from the sorted buffer to a new file.*
