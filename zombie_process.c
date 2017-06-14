#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main()
{
	pid_t  pid;
	//ѭ�������ӽ���
	while (1)
	{
		pid = fork();
		if (pid < 0)
		{
			perror("fork error:");
			exit(1);
		}
		else if (pid == 0)
		{
			printf("I am a child process.\nI am exiting.\n");
			//�ӽ����˳�����Ϊ��ʬ����
			exit(0);
		}
		else
		{
			//����������20s���������ӽ���
			sleep(20);
			continue;
		}
	}
	return 0;
}