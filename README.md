HPC 
CPP CODES - 
g++ -fopenmp filename.cpp -o filename
./filename

CUDA codes on google colab-
nvcc -- version

(if nvcc not installed)
!pip install git+https://github.com/afnan47/cuda.git

%load_ext nvcc_plugin

!nvcc filename.cu -o filename (compile)
!./filename (run)
