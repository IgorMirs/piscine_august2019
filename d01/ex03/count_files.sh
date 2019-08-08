#!/bin/sh

find ./ | wc -l | sed 's_       __g'
