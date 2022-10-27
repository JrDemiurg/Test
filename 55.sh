#!/bin/bash

if [ -z $1 -o -z $2 ]
then
  echo "значения не введены"
else
   cd $1
   for i in *
   do
   find $2 "$2/$i" || rm "$1/$i"
   done

   cd $2
   for i in *
   do
   find $1 "$1/$i" || cp -r "$2/$i" $1
   done
fi

