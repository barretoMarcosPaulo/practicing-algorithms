let area = function(altura,largura){
    console.log("Area do retângulo = ",(altura*largura))
}

let perimetro = function(altura , largura){
    console.log("Perimêtro do retângulo = ", (2 * (altura+largura) ))

}

module.exports = {
    area,
    perimetro
}