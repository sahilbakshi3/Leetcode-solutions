Date.prototype.nextDay = function() {

    this.setDate(this.getDate() + 1);

    return this.toISOString().split("T")[0];
  
};
