# pp-is

## Getting Started

In the web project include pp-is.js with:

```html
<script src="https://cdn.jsdelivr.net/npm/pp-is@latest/pp-is.min.js" ></script>
```

Or

## Install

```console
npm i pp-is --save
```
## Methods

#### `isArray`

Checks if value is classified as an Array object.

---
#### `isBoolean`

Checks if value is either true or false.

---
#### `isDate`

Checks if value is a Date

---
#### `isElement`

Checks if value is a DOM element.

---
#### `isFunction`

Checks if value is a Function.

---
#### `isNull`

Checks if value is a Null.

---
#### `isNumber`

Checks if value is a Number.

---
#### `isObject`

Checks if value is classified as an Object.

---
#### `isString`

Checks if value is a string.

---
#### `isUndefined`

Checks if value is a undefined.

---

## How to use ?

```javascript

var value = "string...";

if( ppIs.isString(value) ){
  // Enter your code here
}
```

### or

```javascript

var value = "string...";

ppIs.isString( value , function( val ){
    // Enter your code here
})

```
