# Operating-System-Kernel-64-bit
We run the following command to build a docker image 
docker build buildenv -t myos-buildenv

After making docker image we made a container to hold that image by running the command on window cmd
docker run --rm -it -v "%cd%":/root/env myos-buildenv



After that we use the following command to build x86_64 by running the following command
make build-x86_64
After that exit from the docker 
and we run our qemu to check if an OS is created
![Picture1](https://user-images.githubusercontent.com/61909305/115426544-0912ab80-a21a-11eb-84a6-3607c7693ef1.png)

Next after elevating our OS to 64 bit and adding c code we have the following output
![Picture2](https://user-images.githubusercontent.com/61909305/115426830-53942800-a21a-11eb-8283-53b7c3cc74d1.png)

