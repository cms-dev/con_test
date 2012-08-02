Program batch;
var
	inf, outf: text;
	a, b: integer;

begin
	assign(inf, 'input.txt');
	assign(outf, 'output.txt');
	reset(inf);
	rewrite(outf);
	readln(inf, a, b);
	writeln(outf, a+b);
	close(inf);
	close(outf);
end.
