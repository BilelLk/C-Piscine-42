#!/bin/bash
find . -name \* | wc -l |  grep ' '  |  sed 's/ //g'
