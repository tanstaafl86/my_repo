#/home/user/.bashrc
#
# Some applications read the EDITOR variable to determine
#your favourite text editor. So uncomment the line
#below and enter the editor of your choice :-)
# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
PS1='[\u@\h \W]\$ '
#alias emacs="TERM=xterm-256color emacs -nw"
alias archey3="alsi -a"
alias emacs="emacs -nw"
alias mux="tmuxinator"
alias pianobar="aoss pianobar"
alias sleepy="redshift -O 3700"
export EDITOR='emacs'
