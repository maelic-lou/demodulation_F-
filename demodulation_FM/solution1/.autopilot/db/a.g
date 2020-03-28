#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/louart/Documents/these/partie_pratique/experience/c/demodulation_FM/demodulation_FM1/solution1/.autopilot/db/a.g.bc ${1+"$@"}
