/*
- We wanna represent these 3 animals, which are mammals
- There are 3 common functions as in the class
- 2 of them are common behavior
- but the sound is unique for each element

- More importantly, the design means EVERY mammal should have these functionalities
- But Platypus lays eggs and doesn't give birth

- Why the designer made this mistake?
- Initial requirements were to model these 3 animals.
- As the 3 functionalities are common, they all added in the mammal superclass

- Whenever you have a parent class, make sure it is VALID for all possible future sub-classes, not only current ones. Your teammates will extend your work in the future!

Reading: https://www.clear.rice.edu/comp201/07-spring/lectures/lec06/
*/