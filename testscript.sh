#!/bin/bash
echo "**starting test for good inputs**"
files=( "hello_world" "good" )
for i in "${files[@]}"
do
  echo "== $i =="
  myparser $i.cl > $i.my
  diff $i.my $i.out
done
