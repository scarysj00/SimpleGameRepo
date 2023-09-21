# SFML ���̺귯�� ��ġ

## ������Ʈ
https://www.sfml-dev.org/download/sfml/2.6.0/

## �ٿ�ε�
- C++ 17 : 2022 / 32��Ʈ

## ���� ����

```
- SimpleGame - External - include
                        - lib
             - SimpleGame
             - SimpleGame.sln
```

- SFML > include ��ü ����/���� => SimpleGame > External > include
- SFML > lib ��ü ����/���� => SimpleGame > External > lib
- SFML > bin ��ü ���� => SimpleGame > SimpleGame

# VS(Visual Studio) 2022 ȯ�� ����

- Solution Explorer > Drop Down Menu > Properties
- ��� ���� ����
    - Configuration > All Configuration
    - Platform > Win32
- C/C++ > General > Additional Include Directories
    - SFML���� ������ �� ����/������ �ִ� ��ġ(����)�� ����
    - $(SolutionDir) : ���� ������Ʈ ����
 
- Linker > General > Additional Library Directories
    - SFML���� ������ �� ����/������ �ִ� ��ġ(����)�� ���� 

- Linker > Input > Additional Dependencies
    - Configuraion > Release 
  
```
sfml-system.lib 
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
```

- Linker > Input > Additional Dependencies
    - Configuraion > Debug 

```
sfml-system-d.lib 
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
```

# Event

## Event ����
- ���, ��Ȳ�� ��ȭ
- Interface�� �����ؼ� ����� ��Ȳ�� ��ȭ
- Ű����, ���콺�� ����� ��Ȳ�� ��ȭ
    - Ű���� �̺�Ʈ : Ű �Է�
    - ���콺 �̺�Ʈ : ���콺 Ŭ��( Press / Release ), �� ��ũ��, ������
- ��ġ ��ũ�� : ��ġ, ��������, ��ġ ��
- �ε�

## Event Handling
- Event Delegate
- Event Listening