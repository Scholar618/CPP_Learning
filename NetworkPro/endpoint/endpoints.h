#pragma once
/* client_end_point
 * �ͻ������ӷ�������
 * ��֪�������˵�IP��portת���ɶ˵�
 */
extern int client_end_point();

extern int server_end_point();

// �����ͻ���socket
extern int create_tcp_socket();

// ����������socket
extern int create_acceptor_socket();

// ������bind��socket��port/ip��
extern int bind_acceptor_socket();

// �ͻ���connect����
extern int connect_to_end();

// ��������
extern int dns_connect_to_end();

// ��������������
extern int accept_int_connection();