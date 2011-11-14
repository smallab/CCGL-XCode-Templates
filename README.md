**CocoaCinderGL XCode Templates: [http://www.smallab.org/code/ccgl/](http://www.smallab.org/code/ccgl/)**

CocoaCinderGL eases the use of Cinder from within a typical XCode/Cocoa project. Thus allowing C++/Obj-C creative coders to build MacOS apps bearing several "Cinder sketches" as well as Cocoa sliders, buttons...

**These XCode templates provide starting points for applications that use Cinder from within a typical Cocoa environment.** The basic template features a MayaCam, a colored cube and a Cocoa slider to control the size of the cube.

To install the templates, **place their *.xctemplate folders** inside of **/Developer/Library/Xcode/Templates/Project Templates/Mac/Application**, besides "Cocoa Application Base.xctemplate", "Cocoa Application.xctemplate", etc.

When creating a new project, make sure to **save the project inside of a folder placed at the root of your Cinder folder**, besides the "samples", "lib", "boost" folders. Typically a folder named "CCGL" where all the examples sit... If you decide to do otherwise, you'll have to change the User-Defined CINDER_PATH setting of the project's target to comply with the relative location of the project you've just created.

