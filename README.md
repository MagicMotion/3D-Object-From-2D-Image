
# 3D Object From 2D Image

**3D Object From 2D Image** is an application of **Photometric Stereo** which is a technique in computer vision for estimating the surface normals of objects by observing that object under different lighting conditions. It is based on the fact that the amount of light reflected by a surface is dependent on the orientation of the surface in relation to the light source and the observer. By measuring the amount of light reflected into a camera, the space of possible surface orientations is limited. Given enough light sources from different angles, the surface orientation may be constrained to a single orientation or even over-constrained.

A key assumption used here is that the surfaces of the objects are purely *Lambertian*.

## S1

This program will locate the sphere in question, while also computing its center and radius. The sphere image used is `sphere0.pgm`.

![s1]

## S2

This program will compute the direction of the light source hitting the sphere. This will be computed for sphere `sphere1`, `sphere2`, and `sphere3`. The goal is to use these normals for the actual `object.pgm` images, which are placed in the same location and under the same lighting conditions.

![s2a]

![s2b]

## S3