#!/bin/bash
# shellcheck disable=SC2039
# shellcheck disable=SC2034

# race condition manifests itself pretty fast
# critical region is reading information (last line of the file)

for i in {1..100}
do
#  until ln ex2.txt ex2.txt.lock &> /dev/null
#  do
#    sleep 0.01
#  done
  LAST_LINE=$(tail -n 1 ex2.txt)
  echo $((LAST_LINE+1)) >> ex2.txt
#  rm ex2.txt.lock
done
exit 0

# commented part of the code between comments
# resolves the problem and everything works well