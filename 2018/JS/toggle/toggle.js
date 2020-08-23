let ch1 = 0;

function colorChange(){
    let target = document.querySelector('body').style;
    
    if(ch1 == 0){
        target.backgroundColor = 'black';
        target.color = 'white';
        ch1 = 1;
    } else {
        target.backgroundColor = 'white';
        target.color = 'black';
        ch1 = 0;
    }
}