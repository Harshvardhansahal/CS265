Question 4

#!/bin/bash

read -p "Enter integers followed by a space: " integers
sum=0
count=0

for i in $integers
do
  let sum=$sum+$i
  let count=$count+1
done
let average=$sum/$count
echo "Your average is: " $average
