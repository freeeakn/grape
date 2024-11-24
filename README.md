# Conception

## Data types

### Simple data types

- int (int16): integer number
- bit: bit type (0,1)
- dec (decimal): floating point numbers
- str: type string
- bool: boolean type (true/false)
- ivl: interval type
- void
- null: null
- type: type
- any: any of types

### Composite data type

- cxt: type context
- arr: type array(type)
- obj: type object
- fun: type function

## Declaring variables

### Autotyping

const variable

- Example
```gr
const number: 101 // number type of const int
const amount: 1.5 // amount type of const dec
const greeting: 'hello' // greeting type of const str
const toggle: true // toggle type of const bool
const years: 1995..2000 // years type of const ivl<int> (1995, 1996, 1997, 1998, 1999, 2000)
const array: [1, 2, 3] // array type of const arr<int> [1, 2, 3]
const human: {
    name: 'ivan',
    gender: 'male',
    age: 23
  } // human type of const obj<name:string, gender:str, age:int>
const increment: (number) => {
    return number++
} // increment type of fn<any, any>
```

dynamic variable

- Example

```gr
var number: 101 // number typeof int
var amount: 1.5 // amount typeof dec
var greeting: 'hello' // greeting typeof str
var toggle: false // toggle type of bool
var years: 1995..2000 // years type of ivl<int> (1995, 1996, 1997, 1998, 1999, 2000)
var array: [1, 2, 3] // array type of const arr<int> [1, 2, 3]
var human: {
    name: 'ivan',
    gender: 'male',
    age: 23
} // human typeof obj<name:string, gender:str, age:int>
var increment: (number) => {
    return number++
} // increment type of fn<any, any> but it is stupid
```
### Strong typing

dynamic variable

- Example
```gr
int number: 101 // number typeof int
dec amount: 1.5 // amount typeof dec
str greeting: 'hello' // greeting typeof string
bool toggle: false // toggle type of bool
ivl<int> years: 1995..2000 // years type of ivl<int> (1995, 1996, 1997, 1998, 1999, 2000)
arr<int> array: [1, 2, 3] // array type of const arr<int> [1, 2, 3]
type HumanType: {
      name: str,
      gender: str,
      age: int
} // HumanType
obj<HumanType> human: {
    name: 'ivan',
    gender: 'male',
    age: 23
} // human typeof obj<HumanType>
fn<int, int> increment: (number) => {
    return number++
} // increment type of fn<int, int>
```
## Example code with entry point

```gr
space {
    сonst Greeting: 'hello'
    space.put: Greeting
}
```
