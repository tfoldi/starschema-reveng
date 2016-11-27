from radare/radare2

# Set correct environment variables.
ENV HOME /root

# Install all necessary editors (vim for me, mcedit for n00bz) and frida
RUN apt-get update && apt-get -y install vim nano zsh gdb strace ltrace && pip install frida && mkdir /reveng

ADD hello* /reveng/
