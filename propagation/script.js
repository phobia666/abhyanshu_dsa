const click = document.querySelector('#click')
// now if you click on it 

click.addEventListener('click', function(e){
    console.log(e) //it contains many target properties
}, false)
// type, timestamp, defaultPrevented
// target, toElement, srcElement, currentTarget
// clientX, clientY, screenX, screenY
// altkey, ctrlkey, shiftkey, keycode

//true false ka kya mtlb actually
// Event propagation do tariko se hota
// Event Bubbling jese 
document.querySelector('.pics').addEventListener('click', function(e){
    // console.log('div clicked bubb')
}, false)
document.querySelector('.img').addEventListener('click', function(e){
    // console.log('image clicked bubb')
}, false)
// false condition me bubbling hogi like chote se bade me jayega regardless of the order of the code in javascript


// Event Capturing
document.querySelector('.pics').addEventListener('click', function(e){
    // console.log('div clicked capp')
}, true)
document.querySelector('.img').addEventListener('click', function(e){
    // console.log('image clicked capp')
}, true)
// true condition me capturing hoti like phele outer ki chize consider hongi then andar

// agr stop karna toh 

document.querySelector('.pics').addEventListener('click', function(e){
    console.log('div clicked')
}, false)
document.querySelector('.img').addEventListener('click', function(e){
    console.log('image clicked')
    e.stopPropagation()
}, false)