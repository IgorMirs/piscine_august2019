#!/bin/sh

ifconfig -a | grep ether | grep -v ethernet | sed 's_.*ether __g' | sed 's_.$__'
