Question 6

#!/bin/bash

read -p "enter a file name: " filename
count=0

while  read -r line ;
 do
   let count=$count+1;
done < "$filename"

echo $count
