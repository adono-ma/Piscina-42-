echo &FT_NBR1 + $FT_NBR2 | tr 'mrdoc'' '01234' | sed "s/'/0/g" | tr '\\\"\?\!' '1234' \ xargs -I {} echo "obase=13; ibase=5;{}" | bc | tr '0123456789ABC' 'gtao luSnemf'
