c CLASS = C
c  
c  
c  This file is generated automatically by the setparams utility.
c  It sets the number of processors and the class of the NPB
c  in this directory. Do not modify it by hand.
c  
        integer nx, ny, nz, maxdim, niter_default
        parameter (nx=512, ny=512, nz=512, maxdim=512)
        parameter (niter_default=20)
        integer kind2
        parameter (kind2=4)
        logical  convertdouble
        parameter (convertdouble = .false.)
        character compiletime*11
        parameter (compiletime='02 Apr 2019')
        character npbversion*3
        parameter (npbversion='3.4')
        character cs1*8
        parameter (cs1='gfortran')
        character cs2*5
        parameter (cs2='$(FC)')
        character cs3*6
        parameter (cs3='(none)')
        character cs4*6
        parameter (cs4='(none)')
        character cs5*12
        parameter (cs5='-O3 -fopenmp')
        character cs6*9
        parameter (cs6='$(FFLAGS)')
        character cs7*6
        parameter (cs7='randi8')
