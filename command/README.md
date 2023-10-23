# Working with the command line

## `bandit0`

I used the command `ssh -p 2220 bandit0@bandit.labs.overthewire.org` in order to log in to the game.

## `bandit1`

`ls`: See what is in the home directory.\
`cat readme`: Read the password from `readme`.\
`logout`: Log out of `bandit0`.\
`ssh -p 2220 bandit1@bandit.labs.overthewire.org`: Log in to `bandit1` with the password I found in the previous step.

## `bandit2`

`ls`: See what is in the home directory.\
`cat ./-`: Make sure that `-` is read as a file and not as an option.\
`logout`: Log out of `bandit1`.\
`ssh -p 2220 bandit2@bandit.labs.overthewire.org`: Log in to `bandit2` with the password I found in the previous step.

## `bandit3`

`ls`: See what is in the home directory.\
`cat "spaces in this filename"`: Make sure that it reads it as the name of the file and not as the name of 4 different files.\
`logout`: Log out of `bandit2`.\
`ssh -p 2220 bandit3@bandit.labs.overthewire.org`: Log in to `bandit3` with the password I found in the previous step.

## `bandit4`

`cd inhere`: Move to directory `inhere`\
`ls -a`: See what is in the current directory using the option `-a` to see all hidden files.\
`cat .hidden`: Read the password inside the file.\
`logout`: Log out of `bandit3`.\
`ssh -p 2220 bandit4@bandit.labs.overthewire.org`: Log in to `bandit4` with the password I found in the previous step.

## `bandit5`

`cd inhere`: Move to directory `inhere`\
`ls`: See what is in the current directory.\
`file ./-file0*`: To see what kind of files there are in `inhere` directory.\
`logout`: Log out of `bandit4`.\
`ssh -p 2220 bandit5@bandit.labs.overthewire.org`: Log in to `bandit5` with the password I found in the previous step.

## `bandit6`

`cd inhere`: Move to directory `inhere`\
`ls`: See what is in the current directory.\
`find -type f -size 1033c ! -executable -exec file {} \; | grep 'ASCII'`: Search for non-executable (`! -executable`) files of size 1033 bytes (`-size 1033c`), that are human-readable (`grep 'ASCII'`).\
`cat './maybehere07/.file2'`: To see the password inside the file.
`logout`: Log out of `bandit5`.\
`ssh -p 2220 bandit6@bandit.labs.overthewire.org`: Log in to `bandit5` with the password I found in the previous step.