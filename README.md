# InteroperabilityDemo2

## Purpose
The idea of this project is to show a demo of how to call unmanaged code from a managed codebase.

## Resumé(Non-Technical)
In this example I've created a COM server, with a COM object(class) in it.
There after a C# project have been created, with a reference to the COM library file generated from the COM Server.
With all that in place it's possible to call the COM object as if it were a normal .NET object. But why?
It's possible because of marshalling, which comes in the form of the RCW(Runtime Callable Wrapper) or the CCW(COM Callable Wrapper).
(Depends if you are going from .NET -> COM or COM -> .NET)

## Technical Walkthrough
hmmm maybe...
