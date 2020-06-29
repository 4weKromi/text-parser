### Properties of *.conf* file :

* Plain text file.
* Open/edit with any text-editor.
* Need not necessarily end with .conf extension.

------

### Text file parsing syntax :

**<*key*>*value*;**

*Text between left chevron ' **<** ' and right chevron ' **>** ' is assigned as key.*

*Text between right chevron ' **>** ' and semi colon ' **;** ' is assigned as value.*

------ 

### An example :

**<*option1*>*off*;**

**<*option2*>*on*;**

***. . .***

`getConfigKey(1)` returns first element of key. i.e The '*option1*' string.

`getConfigValue(2)` returns second element of value. i.e The '*on*' string.
