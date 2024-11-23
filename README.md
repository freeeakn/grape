# Conception

## Data types

- int (int16): integer number
- dec (decimal): floating point numbers
- string: type string
- obj: type object
- fn: type function
- void
- null: null

## Declaring variables

### Autotyping

const variable

- Example

- const number: 101 // number type of const int
- const amount: 1.5 // amount type of const dec
- const greeting: 'hello' // greeting type of const string
- const human: {
    name: 'ivan',
    gender: 'male',
    age: 23
  } // human typeof const obj(name=string, gender=string, age=int)

auto variable

- Example

- var number: 101 // number typeof int
- var amount: 1.5 // amount typeof dec
- var greeting: 'hello' // greeting typeof string
- var human: {
    name: 'ivan',
    gender: 'male',
    age: 23
} // human typeof obj(name=string, gender=string, age=int)

### Strong typing

const variable

// TODO

## Example code with entry point

```gr
space {
    сonst Greeting: 'hello'
    space.put: Greeting
}
```
