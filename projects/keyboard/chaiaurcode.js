const insert = document.getElementById('insert')
const keyDiv = document.createElement('div')
keyDiv.className = 'key'
insert.appendChild(keyDiv)

document.addEventListener('keypress', function(e){
    // console.log(e);
    console.log(e.key);
    keyDiv.innerHTML = `${e.key} key pressed`
})