#!/bin/bash
ifconfig | grep ..:..:..:..:..:.. | awk '{ print $2 }' 
