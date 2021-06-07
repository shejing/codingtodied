########################################################################
# File Name: test.sh
# Author: shejing
# mail: 2016192403@qq.com
# Created Time: 2021年06月07日 星期一 22时31分55秒
########################################################################
#!/bin/bash

var="1234"
var1="${var}567"
var2='${var}567'

echo "var:  $var"
echo "var1: $var1"
echo "var2: $var2"

var3=$(pwd)
echo "pwd: ${var3}"
echo "return value: ${?}"

unset var
echo "var after unset ${var}"

echo "\$0: ${0} \$1: ${1} \$#: ${#}"
echo "\$*: ${*}"
echo "\$@: ${@}"

echo "PID : ${$}"

read -p "input a:" a
read -p "input b:" b 
echo "a : ${a}, b: ${b}"
c=$((a+b))
echo "a+b=${c}" 
exit 10
