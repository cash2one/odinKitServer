----����������ʱ��Ҫ��ȡ��������Ϣ

------------------------------��������������---------------------------------
Sconf = {}

--//�������
Sconf.WorldID                  = 3

--//�������ip����
Sconf.CentralServer_ip         = "115.236.47.222"
Sconf.DataServer_ip            = "115.236.47.222"
Sconf.GateServer_ip            = "115.236.47.222"
Sconf.GateServer_inetip        = "115.236.47.222"
Sconf.LoginServer_ip           = "115.236.47.222"
Sconf.LoginServer_inetip       = "115.236.47.222"
Sconf.BIServer_ip              = "115.236.47.222"
Sconf.GameServer_ip            = "115.236.47.222"
Sconf.PaymentServer_ip         = "115.236.47.222"
Sconf.PaymentServer_inetip     = "115.236.47.222"

--//�������id����
Sconf.CentralServer_id         = Sconf.WorldID * 1000 + 1
Sconf.DataServer_id            = Sconf.WorldID * 1000 + 2
Sconf.WorldServer_id           = Sconf.WorldID * 1000 + 3
Sconf.LoginServer_id           = Sconf.WorldID * 1000 + 4
Sconf.BIServer_id              = Sconf.WorldID * 1000 + 5
Sconf.GameServer_id            = Sconf.WorldID * 1000 + 100
Sconf.GateServer_id            = Sconf.WorldID * 1000 + 200
Sconf.PaymentServer_id         = Sconf.WorldID * 1000 + 11

--//������̶˿�����
Sconf.CentralServer_port       = 20010
Sconf.DataServer_port          = 20020
Sconf.WorldServer_port         = 20030
Sconf.LoginServer_port         = 20040
Sconf.BIServer_port            = 20050
Sconf.GameServer_port          = 20100
Sconf.GateServer_port          = 20200
Sconf.PaymentServer_port       = 20001
Sconf.LoginServer_Client_port  = 20800
Sconf.GateServer_Client_port   = 20900
Sconf.PaymentServer_Client_port= 8080

--//�汾��
Sconf.Version                  = "1.0.0"

--//���ݿ����
Sconf.db_game_ip               = "115.236.47.222"
Sconf.db_game_port             = "27017"
Sconf.db_game_name             = "odin_gamedb_003"
Sconf.db_event_ip              = "115.236.47.222"
Sconf.db_event_port            = "27017"
Sconf.db_event_name            = "odin_gamedb_003"


------------------------------Key--------------------------------------
Key = {}

--//��Ϸ�������
Key.PlayerMax                  = 100                      	--������������
Key.PlayerLoadMax              = 3000                       --DBԤ��������

--//������Ϣ����
Key.server_net_connect         = 10                         --selectio���������
Key.packet_pool_size           = 10240                      --��Ϣ��������
Key.recv_buff_size             = 20480                      --selectio˫���������
Key.send_buff_size             = 20480                      --selectio˫���巢����
Key.client_net_buff            = 10240                      --��������˫������

--//�������״ζ��⿪��ʱ��,�·��������⿪��ʱ����
Key.ServerOpenTime	       = "2015-1-1-0:0:0"

--//�������·��
Key.MonitorPath               = "./monitor"


------------------------------CentralServer---------------------------------
CentralServer = {}
CentralServer.connect_count_max              = Key.server_net_connect     --���������
CentralServer.packet_pool_size               = Key.packet_pool_size       --packet pool��������С
CentralServer.recv_buff_size                 = Key.recv_buff_size         --���ջ�������С
CentralServer.send_buff_size                 = Key.send_buff_size         --���ͻ�������С


------------------------------DataServer---------------------------------
DataServer = {}
DataServer.connect_count_max             	   = Key.server_net_connect     --���������
DataServer.packet_pool_size                  = Key.packet_pool_size       --packet pool��������С
DataServer.recv_buff_size                    = Key.recv_buff_size         --���ջ�������С
DataServer.send_buff_size                    = Key.send_buff_size         --���ͻ�������С
DataServer.user_count_max                    = Key.PlayerMax              --user����
DataServer.player_count_max                  = Key.PlayerMax              --player����
DataServer.item_count_max                  	 = Key.PlayerMax*100          --��������
DataServer.hero_count_max                    = Key.PlayerMax*50           --hero
DataServer.save_logic_interval               = 10                         --����ʱ����ms
DataServer.db_operator_max                   = 10000


------------------------------GateServer---------------------------------
GateServer = {}
GateServer.connect_count_max             	   = Key.server_net_connect     --���������
GateServer.packet_pool_size                  = Key.packet_pool_size       --packet pool��������С
GateServer.recv_buff_size                    = Key.recv_buff_size         --���ջ�������С
GateServer.send_buff_size                    = Key.send_buff_size         --���ͻ�������С
GateServer.user_count_max                    = Key.PlayerMax              --user����
GateServer.player_count_max                  = Key.PlayerMax              --player����
GateServer.gateway_connect_max               = GateServer.user_count_max
GateServer.gateway_queue_max                 = 40960
GateServer.gateway_recv_size                 = Key.client_net_buff
GateServer.gateway_send_size                 = Key.client_net_buff * 10
GateServer.user_heart_timeout                = 60				  		--������ʱʱ��
GateServer.user_key_timeout					         = 30						  --������Կ��ʱʱ��
GateServer.user_pack_limit					         = 30						  --ƽ��ÿ�뷢������


------------------------------GameServer---------------------------------
GameServer = {}
GameServer.connect_count_max             	   = Key.server_net_connect     --���������
GameServer.packet_pool_size                  = Key.packet_pool_size       --packet pool��������С
GameServer.recv_buff_size                    = Key.recv_buff_size         --���ջ�������С
GameServer.send_buff_size                    = Key.send_buff_size         --���ͻ�������С
GameServer.user_count_max                    = Key.PlayerMax              --user����
GameServer.player_count_max                  = Key.PlayerMax              --player����
GameServer.item_count_max                  	 = Key.PlayerMax*100          --��������
GameServer.hero_count_max                    = Key.PlayerMax*50           --hero


------------------------------LoginServer---------------------------------
LoginServer = {}
LoginServer.connect_count_max             	 = Key.server_net_connect     --���������
LoginServer.packet_pool_size                 = Key.packet_pool_size       --packet pool��������С
LoginServer.recv_buff_size                   = Key.recv_buff_size         --���ջ�������С
LoginServer.send_buff_size                   = Key.send_buff_size         --���ͻ�������С
LoginServer.user_count_max                   = Key.PlayerMax              --user����
LoginServer.gateway_connect_max              = LoginServer.user_count_max
LoginServer.gateway_queue_max                = 40960
LoginServer.gateway_recv_size                = Key.client_net_buff
LoginServer.gateway_send_size                = Key.client_net_buff
LoginServer.user_heart_timeout				       = 15                         --������ʱʱ��
LoginServer.db_operator_max                  = 1000


------------------------------BIServer---------------------------------
BIServer = {}
BIServer.connect_count_max                   = Key.server_net_connect     --���������
BIServer.packet_pool_size                    = Key.packet_pool_size       --packet pool��������С
BIServer.recv_buff_size                      = Key.recv_buff_size         --���ջ�������С
BIServer.send_buff_size                      = Key.send_buff_size         --���ͻ�������С
BIServer.db_operator_max                     = 1000

------------------------------PaymentServer---------------------------------
PaymentServer = {}
PaymentServer.connect_count_max                   = Key.server_net_connect     --���������
PaymentServer.packet_pool_size                    = Key.packet_pool_size       --packet pool��������С
PaymentServer.recv_buff_size                      = Key.recv_buff_size         --���ջ�������С
PaymentServer.send_buff_size                      = Key.send_buff_size         --���ͻ�������С
