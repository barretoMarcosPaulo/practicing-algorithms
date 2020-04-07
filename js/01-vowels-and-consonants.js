function vowelsAndConsonants(s) {
    vogais = ""
    consoantes = ""
    for (i in s) {
        if (s[i] == "a" || s[i] == "e" || s[i] == "i" || s[i] == "o" || s[i] == "u") {
            vogais += s[i]
        } else {
            consoantes += s[i]
        }
    }
    for(i in vogais){
        console.log(vogais[i])
    }
    for (i in consoantes) {
        console.log(consoantes[i])
    }
}

vowelsAndConsonants("javascript")