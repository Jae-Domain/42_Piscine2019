#!/bin/bash

ifconfig > output 
grep "ether " output
rm output 
