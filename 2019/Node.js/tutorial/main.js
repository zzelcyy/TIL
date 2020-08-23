let events = require("events");

let eventEmitter = new events.EventEmitter();

let connectHandler = function connected() {
  console.log("Connection Successful");

  eventEmitter.emit("data_received");
};

eventEmitter.on("connection", connectHandler);

eventEmitter.on("data_received", () => {
  console.log("data received");
});

eventEmitter.emit("connection");

console.log("Program has ended");
