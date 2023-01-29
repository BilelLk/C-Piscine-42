#!/bin/bash
cat /etc/passwd | sed '/^#/d' | cut -d: -f1 | sed -n 'n;p' | rev | sort -r | sed "$FT_LINE1,$FT_LINE2 ! d " | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
