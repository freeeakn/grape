# Grape Programming Language Concept

Grape is a programming language focused on creating atomic programs, each representing an independent module performing a specific computation and returning a result. Interaction between these modules and external systems is managed through a context mechanism.

## Core Principles

- Atomicity: Each file is a separate program performing a single, specific task. This promotes modularity, code reuse, and parallelism.

- Functionality: Grape aims for a functional programming paradigm, where functions are the primary building blocks. State changes are managed through data passing rather than side effects.

- Context: The central concept is the context – a dictionary containing data accessible to the program. The context is passed to the program on startup and modified by the program to pass results or interact with the outside world. External programs and systems can provide data to the context, and Grape's atomic programs can access it.

- Explicit Data Management: Interaction between atomic programs occurs exclusively through the context. There's no direct access to the memory or resources of other programs.

- Typing: Grape will utilize static typing to improve performance and enable error detection at compile time.

- Minimalism: Grape's syntax will strive for minimalism and simplicity, avoiding redundancy.

## Program Structure

An atomic program in Grape will consist of the following parts:

- Header: Defines the program's name, input and output parameters, and data types.

- Body: Contains the program's code, which performs the computations.

- Return Value: The program returns the result of its computations by modifying the context.

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

### Composite data type

- ctx: type context
- arr: type array(type)
- obj: type object
- fun: type function

## Declaring variables

### Strong typing

constant variables

- Example

```gr
const<int> number = 101 // number typeof int
const<dec> amount = 1.5 // amount typeof dec
const<str> greeting = 'hello' // greeting typeof string
const<bool> toggle = false // toggle type of bool
type HumanType = {
      name: str,
      gender: str,
      age: int
} // HumanType
obj<HumanType> human = {
    name: 'ivan',
    gender: 'male',
    age: 23
} // human typeof obj<HumanType>
fun<int, int> increment = (number) => {
    return number++
} // increment type of fn<int, int>
```

dynamic variable

- Example

```gr
let<int> number = 101 // number typeof int
let<dec> amount = 1.5 // amount typeof dec
let<str> greeting = 'hello' // greeting typeof string
let<bool> toggle = false // toggle type of bool
ivl<int> years = 1995..2000 // years type of ivl<int> (1995, 1996, 1997, 1998, 1999, 2000)
arr<int> array = [1, 2, 3] // array type of const arr<int> [1, 2, 3]
```

## Example code with entry point

- Greeting

```gr
# file: space.gr

ctx branch { put: str, in: void }

space (branch) {
    сonst<str> Greeting = 'hello, world\n'
    branch.put = Greeting
}
```

- Math

```gr
# file: space.gr

ctx branch {
    put: int,
    in: int,
    cfg: {
        threshold: int
    }
}

space (branch) {
    сonst<int> value = branch.in
    if (value > branch.cfg.threshold) {
        branch.put = value * 2;
    } else {
        branch.put = value + 1;
    }
}
```

- Atomic conception

```gr
# file: add.gr
ctx addCtx {
    put: int,
    in: (
        a: int,
        b: int
    )
}

fun add (addCtx) {
    const<int> a, b = addCtx.in
    addCtx.put = a + b;
}
```

```gr
#file: space.gr
ctx branch {
    put: int,
    in: int,
}

space (branch) {
    cosnt<int> result = call("./add.gr", {
        put: branch.put,
        in: (
            10,
            5
        )
    });
    branch.put = result;
}

```


## Arsagyr's proposal

I think we should replace "put" with "out" and "=" with brackets "()".

- Greeting

```gr
# file: space.gr

ctx branch { out: str, in: void }

space (branch) {
    сonst<str> Greeting = 'hello, world\n'
    branch.out(Greeting)
}
```


- Atomic conception

```gr
# file: berry.gr
ctx berry {
    out: int,
    in: (
        a: int,
        b: int
    )
}

fun add (berry) {
      const<int> a = berry.in.a
      const<int> b = berry.in.b
      berry.out = a + b;
}
```

```gr
#file: branch.gr
ctx branch {
    out: int,
    in: int,
}

space (branch) {
    cosnt<int> result = call("./add.gr", {
        out: branch.out,
        in: (
            10,
            5
        )
    });
    branch.out = result;
}

```

