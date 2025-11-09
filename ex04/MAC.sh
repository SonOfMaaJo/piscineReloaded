ifconfig -a | grep -e 'ether'|sed 's/\s*ether\s\(\S*\)\s*txq.*/\1/g'
