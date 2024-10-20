/*
1) We can sum from 1 to N in 2 ways
A) Loop to sum from 1 to N. Easy to code, but slow. E.g. for N = 10^10
B) Use formula (N * (N+1))/2. Now this is very efficient

In many cases, the same task can be done in several ways
- Some are clearly written and some are not
- Fast or slow
- Memory hungry or reasonable
- Heavy computations (you mobile become hot) or more efficient
- Consume your mobile data package (video call) or save it!

It is not easy to build efficient software!


////////////////////////////////////////////////


2) Like most of the provided systems, we know what the service provides us NOT how it works
 E.g. you use messenger to chat. You care what are the possible things to do
  You don't care about how it is done or scaled to support 1 Billion user
  
 Same logic in your TV & Car. 


As we provide support for Android, IOS, IPAD, we should be very careful from code duplication.
- Most of the system will be actually common code, e.g. fill rectangle color
- Some functionality will be more system dependency, e.g. loading an image from the storage

- DRY (Don’t Repeat Yourself)
 - Whatever common, design the system to reuse it
 - E.g. Has a library class of handling shapes that is common
 - A separate one for functions with the SAME NAME but DIFFERENT BEHAVIOUR, such as load image

*/