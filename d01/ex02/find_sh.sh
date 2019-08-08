#!/bin/sh

find . -name "*.sh" | sed 's_\.sh__g' | sed 's_.*\/__g'
