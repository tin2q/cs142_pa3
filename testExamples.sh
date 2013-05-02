#!/bin/bash
echo "**starting test for inputs in examples directory**"
for file in ./examples/*.cl
do
  echo "==file: $file"
  mycoolc $file > $file.my
  coolc $file > $file.out
  diff $file.my $file.out
done
