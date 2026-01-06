#!/usr/bin/env bash
set -euo pipefail

SRC="lab_1_8.c"
OUT="lab_1_8"

echo "Compiling $SRC..."
gcc -Wall -Wextra -std=c11 "$SRC" -o "$OUT" || { echo "Compilation failed" >&2; exit 1; }
echo "Compiled $SRC -> $OUT"

if [ $# -gt 0 ]; then
  printf '%s\n' "$@" | ./$OUT
else
  ./$OUT
fi
