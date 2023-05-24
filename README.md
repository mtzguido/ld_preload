Quick example of `LD_PRELOAD`

    $ make
    $ ./use
    Here are 5 random numbers!
    1804289383
    846930886
    1681692777
    1714636915
    1957747793

    $ LD_PRELOAD=./fakelib.so ./use
    Here are 5 random numbers!
    4
    4
    4
    4
    4
