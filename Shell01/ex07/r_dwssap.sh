#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | awk -F : '{print $1}' | rev | sort -r | awk -v com=$FT_LINE1 -v fim=$FT_LINE2 'NR>=com && NR<=fim' | awk '{printf $0", "}' | sed "s/, $/./" | tr -d "\n"
