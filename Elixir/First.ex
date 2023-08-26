
defmodule HelloWorld do
def helloworld(msg)  do
  msg
end
end

defmodule App do
  def main do
    IO.puts(HelloWorld.helloworld("hi"))
  end
end

App.main()
