#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/louart/Documents/these/partie_pratique/experience/c/demodulation_FM1/DemodulationFM/solution2/.autopilot/db/a.g.bc ${1+"$@"}
