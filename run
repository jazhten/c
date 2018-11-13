set -e

sourcename=$1

clang -g -Wall -I../c/library/include -L../c/library/lib $1 -lcs1010 -lm
echo "Compiled successfully, running $1..."
./a.out
