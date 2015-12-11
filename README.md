## Custom Templates for Xcode

Some custom file and program templates I developed for convenience

## What's Included

Two versions of a file template for creating a custom CoreFoundation-style C class. One creates a source and a header file and the other creates one source and two header files (public and private interface). Check out http://opensource.apple.com/source/CF/CF-1153.18/CFRuntime.h for more info on custom CF classes.

One project template for a project that builds a universal iOS app for launching an specific URL. The URL Launcher Application project wizard has a field for a URL/URI that the built app will open at launch. This can be used to simulate the behavior of webclips and URL shortcuts on an iOS device. I included a launch image for all device sizes and you can provide your own icons.

## Usage

Xcode stores it's built-in templates in `Xcode.app/Contents/Developer/Library/Xcode/Templates/` but it will recognize templates placed in `/Library/Developer/Xcode/Templates/` or `~/Library/Developer/Xcode/Templates/`. Inside these locations there may be a 'Project Templates' or 'File Templates' folder where you can put your own templates for projects and files. Make sure you make a subfolder in the Project/File Templates folders to represent the category name - e.g. `File Templates/Custom Source/CF Class.xctemplate`

I also structure this repository such that you can clone it into the user-level location just by executing `git clone https://github.com/JeremyAgost/Custom-Xcode-Templates.git ~/Library/Developer/Xcode/Templates`.

## License

This project is made available in the public domain, to be used freely without attribution. It is provided "As Is" without warranty, express or implied. Any derivative works created from the contents of this project are considered the authorship of their own creator and Jeremy Agostino makes no claim to such works.
