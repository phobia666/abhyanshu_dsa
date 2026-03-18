function colorHex(){
    const hex = '0123456789ABCDEF'
    var color = '#'

    for(var i = 0; i < 6; i++){
        color += hex[Math.floor(Math.random() * 16)]
    }
    return color;
}

var rep = 0
function intervalStart(){
    if(!rep){
        rep = setInterval(function(){
        const color = colorHex()
        document.querySelector('body').style.backgroundColor = `${color}`
        console.log(color)
    }, 1000)
    }
    
}
document.querySelector('#start').addEventListener('click', function(){
    intervalStart()
})

document.querySelector('#stop').addEventListener('click', function(){
    clearInterval(rep)
    rep = null 
    console.log('stopped')
})