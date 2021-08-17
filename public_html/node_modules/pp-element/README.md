# pp-element

## Getting Started
In the web project include pp-element.js with:

```html
<script src="https://cdn.jsdelivr.net/npm/pp-element@latest/pp-element.min.js" ></script>
```

Or

## Install

```console
npm i pp-element --save
```
## Methods

### addClass
Add class the element.

```javascript
var elem = ppElement("#title")
//Option1 - Single class
elem.addClass('title')
//Option2 - Array Class
elem.addClass(['primary','center','middle'])
//Options3 - String multi class
elem.addClass('text-blue text-xs text-bold')
```
### removeClass
Remove class the element.

```javascript
var elem = ppElement("#title")
//Option1 - Single class
elem.removeClass('title')
//Option2 - Array Class
elem.removeClass(['primary','center','middle'])
//Options3 - String multi class
elem.removeClass('text-blue text-xs text-bold')
```

### hasClass
Check if exists the class name

```javascript
var elem = ppElement("#title")
if( elem.hasClass('active') ){

}
```

### attr
Read , set or remove attributes.

```javascript
var elem = ppElement("#title")
//Read attribute
console.log( elem.attr('myAttribute') );
//Set Attributes
elem.attr('myAttribute','myValue')
//OR
elem.attr({
  'myAttribute1':'myValue1',
  'myAttribute2':'myValue2'
})
//remove Attribute
elem.attr('myAttribute',null);
```



### data
Read , set or remove attributes with prefix ´data-´

```javascript
var elem = ppElement("#title")
//Read attribute
console.log( elem.data('myAttribute') );
//Set Attributes
elem.data('myAttribute','myValue')
//OR
elem.data({
  'myAttribute1':'myValue1',
  'myAttribute2':'myValue2'
})
//remove Attribute
elem.data('myAttribute',null);
```

### css
Read , set or remove css propertys.

```javascript
var elem = ppElement("#title")
//Read attribute
console.log( elem.css('backgroundColor') );
//Set Attributes
elem.css('backgroundColor','blue')
//OR
elem.css({
  'backgroundColor':'blue',
  'zIndex':'20',
  'textAlign':'center'
})
//remove Attribute
elem.css('zIndex',null);
```

### text
Add text in element call innerText Function

```javascript
var elem = ppElement("#title")
elem.text('Hello');
```

### html

add html code in element call innerHTML Function

```javascript
var elem = ppElement("#title")
elem.html('Hello <strong>World</strong>');
```

### on  
Lisen event

```javascript
var elem = ppElement("#title")
elem.on('click',function( event , element ){
    //Single Element
    element.addClass('green');
});

```

### trigger

trigger event

```javascript
var elem = ppElement("#title")
elem.trigger('click')
```
