## GSS (General Server Script) Interpreter
The General Server Script interpreter is a new startup scripting language built off C. While enforcing strong typing without compromising usability, the syntax and functions will be consistent and clean to allow the language to maintain tidy-ness.

## Motivation
This project was more of a project for me to learn from, however I believe it can be used by others for the same purpose and possibly more.

## Latest Version
The latest version is currently [alpha], more information will be available on this update in the mere future.

## Documentation
All documentation for GSS usage can be found in /docs.

## Building from Source
1) Ensure you have a C++ compiler installed such as gcc.<br />
2) Clone or download a zip of the source from the official GitHub page.<br />
3) Build the interpreter via the makefile in the parent directory.<br />

## Testing
If you wish to test the GSS Interpreter to ensure it's functioning properly, load the file from "./test/test.gss" into the interpreter via command line using;
```
./gss ./test/test.gss
```

## Contributors
Created by Specter (GitHub: Cryptogenic), with help from zi.

## License
GSS is distributed under the GPL License, meaning you are free to modify, distribute, and use for commercial/private use, however the developers of GSS will not be held liable, and the distributer must include but not limited to the disclosing of the source as well as the license and copyright notice. For more information, please view the GNU GPL v2.0 license before distribution or modification.
