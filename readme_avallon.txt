Инструкция по применению исправленного лайма.

git clone --recursive https://github.com/AvallonAlliance/lime

Настроить хакс на использование девелоперского лайма:
haxelib dev lime lime
последнее слово это путь к репозиторию лайма

Персобрать лайм:
lime rebuild android -Dlegacy
Если при сборке возникает ошибка с++ 11, то это значит что у вас старый ndk. Указать новый ndk можно через lime setup android