unit rec;

type
  stud = record
    fam: string[30];
    name: string[30];
    otc: string[30];
    n_zach: string[10];
    n_tel: string[11];
    date: record
      dd: 1..31;
      mm: 1..12;
      gggg: integer;
    end;
  end;
  {rating = record
    n_zach: string[10];
    subject: string[20];
    ratign: 1..5;
  end;}

var
  f: file of stud;
  a: array of stud;

procedure readfile();
var
  i: integer;
begin
  i := 0;
  assign(f, 'st.dat');
  if FileExists('st.dat') then
  begin
    reset(f);
    while not eof(f) do
    begin
      SetLength(a, i + 1);
      read(f, a[i]);
      inc(i);
    end;
    close(f);
  end else
  begin
    Rewrite(f);
    close(f);
  end;
  setlength(a,a.Length-1);
end;

procedure writefile();
begin
  assign(f, 'st.dat');
  rewrite(f);
  for i: integer := 0 to a.Length - 1 do
  begin
    write(f, a[i]);
  end;
  close(f);
end;

procedure add;
begin
  var str: string;
  readfile();
  SetLength(a, a.Length + 1); // +1 к размерности массива
  write('Введите фамилию студента: ');
  readln(str);
  a[a.Length - 1].fam := str;
  write('Введите имя студента: ');
  readln(str);
  a[a.Length - 1].name := str;
  write('Введите отчество студента: ');
  readln(str);
  a[a.Length - 1].otc := str;
  writeln('Введите дату рождения студента дд мм гггг (каждый с новой строки): ');
  readln(str);
  a[a.Length - 1].date.dd := str.ToInteger;
  readln(str);
  a[a.Length - 1].date.mm := str.ToInteger;
  readln(str);
  a[a.Length - 1].date.gggg := str.ToInteger;
  write('Введите номер зачетки студента: ');
  readln(str);
  a[a.Length - 1].n_zach := str;
  write('Введите номер телефона студента: ');
  readln(str);
  a[a.Length - 1].otc := str;
  writefile();
end;

procedure see;
begin
  writeln('Вся база:');
  readfile();
  for i: integer := 0 to a.Length - 1 do
  begin
    writeln(i, ' ', a[i]);
  end;
end;

begin
  SetLength(a, 1);
end.