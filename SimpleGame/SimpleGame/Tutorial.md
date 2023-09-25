# Youtube Reference (���ϱ����)
https://www.youtube.com/watch?v=KRGPNi9mEMo&list=PL6xSOsbVA1eb_QqMTTcql_3PdOiE928up&index=2

# SFML ���̺귯�� ��ġ (���� �۰� �Ϳ��� �׷����� �����ϴ� ���̺귯��)

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

- VS 2022 ������ ��� ���� > Solution Platform > x86���� ����
- Solution Explorer > SimpleGame �̸� ������ ��Ŭ�� > Drop Down Menu > Properties
- ��� ���� ����
    - Configuration > All Configuration
    - Platform > Win32
- C/C++ > General > Additional Include Directories
    - SFML���� ������ �� ����/������ �ִ� ��ġ(����)�� ����
    - $(SolutionDir) : ���� ������Ʈ ���� ǥ�� �Է�
    - ���� �Է� ���� : $(SolutionDir)\External\include
 
- Linker > General > Additional Library Directories
    - SFML���� ������ �� ����/������ �ִ� ��ġ(����)�� ���� 
    - ���� �Է� ���� : $(SolutionDir)\External\lib

- Linker > Input > Additional Dependencies
    - Configuraion > Release ī�װ��� ���� > �Ʒ� ������ �Է� �� OK ����
  
```
sfml-system.lib 
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
```

- Linker > Input > Additional Dependencies
    - Configuraion > Debug ī�װ��� ���� > �Ʒ� ������ �Է� �� OK ����

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
- Event Delegate : ���� ���� �̺�Ʈ�� ����
- Event Listening : �̺�Ʈ ����
- Event Handle : ������ �̺�Ʈ�� ���ؼ� ������ ����


# Game Loop

# SimpleGame ������Ʈ�� ������ Game Ŭ����

- ������ ���������� Control�ϴ� Ŭ����
- Enemy ����
- Player ����

