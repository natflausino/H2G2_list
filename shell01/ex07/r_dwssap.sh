#!bin/sh
cat /etc/passwd | awk '(NR+1) % 2' | awk -F ':' '{print$1}' | rev | sort --reverse | awk 'NR=='$FT_LINE1' , NR=='$FT_LINE2' {print$0}' | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g'