# Code Challenge Week 4
Challenge for the week starting 9th March 2015

In computer science, a stream is a sequence of data elements made available over time. A stream can be thought of as items on a conveyor belt being processed one at a time rather than in large batches. Streams commonly consist of a head method to output the first value and a tail method to get the rest of the values minus the head. 

[Streams](http://en.wikipedia.org/wiki/Stream_(computing))


##Part 1: Complete the Stream

```javascript
var Stream = function(start, output, step) {
  // create constructor here...
};
Stream.prototype = {
  //create the rest...
};

var step = function(n) {return n + 1};
var output = function(n) {return n};
var normalNumbers = new Stream(0, output, step);
console.log(normalNumbers.head()); // 0
console.log(normalNumbers.tail().head()); //1
console.log(normalNumbers.tail().tail().head()) //2
var output = function(n) {return n * 2};
var evenNumbers = new Stream(0, output, step);
console.log(evenNumbers.head()) //0
console.log(evenNumbers.tail().head()) //2
```
**Tail consistently returns a new object!**

Additional Help

1. The first param to Stream is the start value.
2. The second param to Stream is the output function. This usually controls the head.
3. The third param to Stream is the stepper.

##Part 2: Re create the stream in a programming language you have never used before.
