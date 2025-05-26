# Design Patterns Overview

Design patterns are divided into 3:

1. Creational: Object instantiation
2. Structuaral: class relationships and hierarchies
3. Behavioral: object intercommunication

Crerational Design patterns:
1. Factory method
2. Abstract Factory
3. Builder
4. Prototype
5. Singleton

The goal of creational patterns is to efficiently create objects to increase flexibility. It does this by moving the creation of object out of the main code and into spearate clsses, thereby encapsulating it. The main code would no longer have explicit references to concrete classes and their instantion. It makes the concrete classes independent of the rest of the code base. In short making the creation of objects seperate than the main class to make the code more maintainable.

Classes & inheritance
Class explosion - so many classes and hard to maintain. Use boolean for slight variation.
Use conposition over inheritance. 
Compoisiton: property referenced by another class. Latte HAS a milk or flavor. More flexibility and effectiveness
Inheritance: One class extends another class. Latter IS a drink
