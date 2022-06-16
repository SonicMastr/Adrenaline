- Follow the [PSPSDK](https://pspdev.github.io) instructions for the dependencies, but skip downloading the SDK
- Extract this `pspdev.7z` to your home directory
- Copy `psp-packer` into `pspdev/bin` and overwrite (chmod if you have a permissions error)
- run `sudo ln -s /usr/lib/x86_64-linux-gnu/libmpfr.so.6 /usr/lib/x86_64-linux-gnu/libmpfr.so.4`
- edit your `~/.bashrc` to add the following:
```
export PSPDEV=~/pspdev
export PATH=$PATH:$PSPDEV/bin
```