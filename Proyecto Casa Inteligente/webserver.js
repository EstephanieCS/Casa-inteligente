var http = require('http').createServer(handler); 
var fs = require('fs'); 
var io = require('socket.io')(http) 

http.listen(8080); 

function handler (req, res) { 
  fs.readFile(__dirname + '/public/index.html', function(err, data) {
    if (err) {
      res.writeHead(404, {'Content-Type': 'text/html'}); 
      return res.end("404 Not Found");
    }
    res.writeHead(200, {'Content-Type': 'text/html'}); 
    res.write(data); 
    return res.end();
  });
}

const { SerialPort, ReadlineParser } = require('serialport')
const port = new SerialPort({
    path: '/dev/tty.usbmodem141301',
    baudRate: 9600 })
const parser = port.pipe(new ReadlineParser({ delimiter: '\r\n' }))



io.sockets.on('connection', function (socket) {
  var A = 0;
  socket.on('A', function(data) { 
    A = data;

    port.write('A'+ '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })
    if (A) {
      console.log("Habitacion 1 Encendida");
    }
  });
});

io.sockets.on('connection', function (socket) {
    var B = 0; 
    socket.on('B', function(data) { 
      B = data;

      port.write('B' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (B) {
        console.log("Habitacion 1 Apagada");
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var C = 0; 
    socket.on('C', function(data) { 
      C = data;

      port.write('C' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (C) {
        console.log("Habitacion 2 Encendida"); 
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var D = 0; 
    socket.on('D', function(data) { 
      D = data;

      port.write('D' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (D) {
        console.log("Habitacion 2 Apagada"); 
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var E = 0; 
    socket.on('E', function(data) { 
      E = data;

      port.write('E' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (E) {
        console.log("Bano Encendido");
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var F = 0; 
    socket.on('F', function(data) { 
      F = data;

      port.write('F' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (F) {
        console.log("Bano Apagado"); 
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var G = 0; 
    socket.on('G', function(data) { 
      G = data;

      port.write('G' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (G) {
        console.log("Sala Encendida"); 
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var H = 0; 
    socket.on('H', function(data) { 
      H = data;

      port.write('H' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (H) {
        console.log("Sala Apagada"); 
      }
    });
  });

  io.sockets.on('connection', function (socket) {
    var V = 0; 
    socket.on('V', function(data) { 
        V = data;

      port.write('V' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (V) {
        console.log("Comedor Encendido"); 
      }
    });
  });
  io.sockets.on('connection', function (socket) {// WebSocket Connection
    var Z = 0; //static variable for current status
    socket.on('Z', function(data) { //get light switch status from client
      Z = data;

      port.write('Z' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (Z) {
        console.log("Comedor Apagado"); //turn LED on or off, for now we will just show it in console.log
      }
    });
  });

  io.sockets.on('connection', function (socket) {// WebSocket Connection
    var K = 0; //static variable for current status
    socket.on('K', function(data) { //get light switch status from client
      K = data;

      port.write('K' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (K) {
        console.log("Cocina Encendida"); //turn LED on or off, for now we will just show it in console.log
      }
    });
  });

  io.sockets.on('connection', function (socket) {// WebSocket Connection
    var L = 0; //static variable for current status
    socket.on('L', function(data) { //get light switch status from client
      L = data;

      port.write('L' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (L) {
        console.log("Cocina Apagada"); //turn LED on or off, for now we will just show it in console.log
      }
    });
  });

  io.sockets.on('connection', function (socket) {// WebSocket Connection
    var O = 0; //static variable for current status
    socket.on('O', function(data) { //get light switch status from client
      O = data;

      port.write('O' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })

      if (O) {
        console.log("Casa Encedida"); //turn LED on or off, for now we will just show it in console.log
      }
    });
  });

  io.sockets.on('connection', function (socket) {// WebSocket Connection
    var P = 0; //static variable for current status
    socket.on('P', function(data) { //get light switch status from client
      P = data;

      port.write('P' + '\n', (err) => {
        if (err) 
        {
            return console.log('Error on write: ', err.message)
        }
      })


      if (P) {
        console.log("Casa Apagada"); //turn LED on or off, for now we will just show it in console.log
      }
    });
  });
