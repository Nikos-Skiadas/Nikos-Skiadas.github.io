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
