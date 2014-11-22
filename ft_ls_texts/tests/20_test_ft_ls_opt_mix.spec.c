char *cmd = "-la";

reset_sandbox();
sandbox_cmd("mkdir dir{1..5} .hdir{1..5}");
sandbox_cmd("touch dir1/file{1..5} dir1/.hfile{1..5}");
sandbox_cmd("touch .hdir1/file{1..5} .hdir1/.hfile{1..5}");
sandbox_cmd("touch .hdir1/file{1..5} .hdir1/.hfile{1..5}");
sandbox_cmd("touch a && ln -s a symlink");

printf("\n=====  ls  ========\n");
printf("%s", ls(cmd));
printf("===== ft ls =======\n");
printf("%s", ft_ls(cmd));
printf("==================\n");

UT_ASSERT(strcmp(ls(cmd), ft_ls(cmd)) == 0);
