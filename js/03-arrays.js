let my_array = [1,2,3,4,5,6,7,8,9,0,10]

// Adicionando elementos no final de um array
my_array.push(90,32,31)

// Adicionando elementos no inicio de uma array
my_array.unshift(13,45,67)

// Removendo elementos do final
my_array.pop()

// Usando array map para dobrar todos os numeros do array
let new_array = my_array.map(function(num){
    return num*2
})


// Usando o filter para pegar todos os elementos pares de um array
function par(value){
    return value%2 == 0
}

let num_pares = my_array.filter(par)

console.log(num_pares)