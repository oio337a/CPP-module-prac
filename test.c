#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int ft_putstr_fd(char *str, char *path)
{
  while (*str)
    write(2, str++, 1);
  if (path)
    while (*path)
      write(2, path++, 1);
  write(2, "\n", 1);
  return (1);
}

int ft_execute(char **av, int i, int temp, char **env)
{
  av[i] == NULL;
  dup2(temp, STDIN_FILENO);
  close(temp);
  execve(av[0], av, env);
  return (ft_putstr_fd("error", av[0]));
}

int main(int ac, char **av, char **env)
{
  int i;
  int fd[2];
  int temp;
  (void)ac;

  i = 0;
  temp = dup(STDIN_FILENO);
  while (av[i] && av[i + 1])
  {
    av = &av[i + 1];
    i = 0;
    while (av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
      i++;
    if (strcmp(av[0], "cd") == 0)
    {
      if (i != 2)
        ft_putstr_fd("error", NULL);
      else if (chdir(av[1]) != 0)
        ft_putstr_fd("error", av[1]);
    }
    else if (i != 0 && (av[i] == NULL || strcmp(av[i], ";") == 0))
    {
      if (fork() == 0)
      {
        if (ft_execute(av, i, temp, env))
          return (1);
      }
      else
      {
        close(temp);
        while (waitpid(-1, NULL, 0) == 0)
          ;
        temp = dup(STDIN_FILENO);
      }
    }
    else if (i != 0 && strcmp(av[i], "|") == 0)
    {
      pipe(fd);
      if (fork() == 0)
      {
        dup2(fd[1], STDOUT_FILENO);
        close(fd[0]);
        close(fd[1]);
        if (ft_execute(av, i, temp, env))
          return (1);
      }
      else
      {
        close(fd[1]);
        close(temp);
        temp = fd[0];
      }
    }
  }
  close(temp);
  return (0);
}