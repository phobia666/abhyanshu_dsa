// setTimeout(()=>{
//     console.log('timeout')
// }, 1000)

const changeText = function(){
    document.querySelector('h2').innerHTML = 'Fucking Fucked'
}
const changeMe = setTimeout(changeText, 2000)

// you can stop it as well 
document.querySelector('#stop').addEventListener('click', ()=>{
    clearTimeout(changeMe)
    console.log('Stopped')
})

setInterval(function(){
    const date = new Date()
    console.log(`current time : ${date.toLocaleTimeString()}`)
}, 1000)
