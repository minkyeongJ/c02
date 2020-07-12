#!/bin/bash

id -Gn $FT_User | sed 's/ /,/g' | tr -d '\n'
