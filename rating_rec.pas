unit rating_rec;

type
  rating = record
    n_zach: string[10];
    subject: record
      subject_name: string[20];
      rating: 1..5;
    end;
  end;

var
  b: array of rating;
  f2: file of rating;

procedure readfile1();
var
  i: integer;
begin
  i := 0;
  assign(f2, 'rating.dat');
  if FileExists('rating.dat') then
  begin
    reset(f2);
    while not eof(f2) do
    begin
      SetLength(b, i + 1);
      read(f2, b[i]);
      inc(i);
    end;
    close(f2);
  end else
  begin
    Rewrite(f2);
    close(f2);
  end;
end;

procedure writefile1();
begin
  assign(f2, 'rating.dat');
  rewrite(f2);
  for i: integer := 0 to b.Length - 1 do
  begin
    write(f2, b[i]);
  end;
  close(f2);
end;

begin
  SetLength(b, 1);
end.    