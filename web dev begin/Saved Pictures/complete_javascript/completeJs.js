//console.log('hello world')

/* variable 
var myname="v"; --valid
var 1myname="v";--invalid
var var="v"; --invalid
var $myname="v"; --valid
var my&name="v" --invalid
*/

/* datatypes -->
1.undefined  2.boolean  3.number 4.string  5.bigInt  6.symbol
 var myname="v";
console.log(myname)
console.log(typeof(myname))
var myage= 20;
console.log(myage)
console.log(typeof(myage)) 
var areYouV=true
console.log(areYouV=true)
console.log(typeof(areYouV=true))
console.log($myname) // --> undefined
*/
/* ✨challenge- 1✨
console.log(10+"20") //--> 1020 concatenation insted of addition
//console.log(9-"5")  // --> 4 😁bug😁- it show substraction
//console.log("v "- "k"); --> NaN- not a number
//console.log(true+true); --> 2 true=1 i.e. 1+1=2
//console.log(false-true); --> -1
*/
/*🤹‍♂️🙋‍♀️ 1.interview question
// difference between null and undefined
//var useless_var= null;
//console.log(useless_var)  --> no value assign
//console.log(typeof(useless_var))-->object 😁 2nd bug js😁not object
//var standby_var;
//console.log(standby_var);--> only not defined right now
//console.log(typeof(standby_var))-->its datatype undefined
*/
/*🤹‍♂️🙋‍♀️2. interview question
NaN=Not a no.-> when we wanna subtract two string
NaN is property of global object i.e. variable in global scope
 the initial value is in Not-A-Number
 var myNo= 8746576509;
 console.log(myNo)
 console.log(isNaN(myNo)) -->false cuz its no
 var myName= "v";
 console.log(myName)
 console.log(isNaN(myName))--> true its not a no.
*/
//✨challenge- 2✨
// NaN===NaN;
// Number.NaN===NaN;
// isNaN(NaN);
// isNaN(Number.NaN)
// Number.isNaN(NaN)
/* console.log(NaN===NaN)
 console.log(Number.NaN===NaN)
 debugger;
 console.log(isNaN(Number.NaN) )
 console.log(Number.isNaN(NaN))*/

//  🤩function😎
// 1.function defination
//  function sum()
//  {
//     var a=10, b=5, sum=a+b;
//     console.log("total of "+ a+" and "+b+" = "+sum);
    
//  }

// 2. function calling
// sum()


// 3.function Parameter
function sum(a,b)
 {
    
    return ("total of "+ a+" and "+b+" = "+(a+b));
    
 }

sum(10,20)
