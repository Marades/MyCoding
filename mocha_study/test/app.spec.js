const sayHello = require('../app').hello

if (sayHello) {
    if (sayHello() === 'hello') {
        console.log('success')
    } else {
        console.log('fail')
    }
}

describe('App test', function () {
    it('hello must be return', function (done) {
        if (sayHello() === 'hello') {
            done()
        }
    })
})