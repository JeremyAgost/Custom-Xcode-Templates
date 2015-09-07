## File Templates for Xcode

Some custom file templates I developed for convenience when working with Xcode projects.

## What's Included

Two versions of a template for creating a custom CoreFoundation-style C class. One creates a source and a header file and the other creates one source and two header files (public and private interface). Check out [http://opensource.apple.com/source/CF/CF-1153.18/CFRuntime.h] for more info on custom CF classes.

## Usage

Xcode stores it's builtin file templates in 'Xcode.app/Contents/Developer/Library/Xcode/Templates/File Templates' but it will recognize templates placed in '~/Library/Developer/Xcode/Templates/File Templates'. Make sure you make a subfolder in the File Templates folder to represent the category name - e.g. 'File Templates/Custom Source/CF Class.xctemplate'

## License

This project is made available in the public domain, to be used freely without attribution. It is provided "As Is" without warranty, express or implied.
