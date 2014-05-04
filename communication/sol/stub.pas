Program stub;
uses communication;
var
  a, b: longint;
  fifoin, fifoout: text;

begin
  assign(fifoin, argv[2]);
  assign(fifoout, argv[1]);
  reset(fifoin);
  rewrite(fifoout);
  readln(fifoin, a, b);
  writeln(fifoout, add(a, b));
  flush(fifoout);
  close(fifoin);
  close(fifoout);
end.
