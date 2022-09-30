#include <stdio.h>

int helper(char *s, int n)
{
		if (*s == '\0')
			    	{
							return(n);
							    	}
		    	++n;
				return(helper(s+1, n));
}

int helpertwo(char *s, char * h, int n, int m, int f)
{	
		if ((*(h + m) != *(s + n)) && m ==0)
				{
							if((*(h + m) == '*') && n != 0)
										{
														--n;
																	return(helpertwo(s,h,n,m,f));
																			}
									else if (*(h + m) == '*' && n == 0 && !f)
												{
																return (0);
																		}
											else  if((*(h + m) != '*') && m ==0)
														{
																		return (0);
																				}
													{
																	return (1);
																			}
														} 
			else if (*(h + m) == '*' && n != 0)
					{
								--n;
										return(helpertwo(s,h,n,m,f));
											}
				else if ((*(h + m) == *(s + n)) && n != 0)
						{
									--n;
											helpertwo(s,h,n,m,f);
												}
					else if (*(h + m) != *(s + n) && m > 0)
							{
										if (n != 0)
													{
																	--n;
																				return (helpertwo(s,h,n,m,f));
																						}
												else
															{
																			return (0);
																					}
													}
						/*

			n = 0;
				flag = 1;
					numone = helper(s1, n) - 1;
						numtwo = helper(s2, n) - 1;
							return (helpertwo(s1, s2, numone, numtwo,flag));
}

int main(void)
{
	    int r;
	        /*
		 *     r = wildcmp("main.c", "*.c");
		 *         printf("%d\n", r);
		 *             r = wildcmp("main.c", "m*a*i*n*.*c*");
		 *                 printf("%d\n", r);
		 *                     r = wildcmp("main.c", "main.c");
		 *                         printf("%d\n", r);
		 *                             r = wildcmp("main.c", "m*c");
		 *                                 printf("%d\n", r);
		 *                                     r = wildcmp("main.c", "ma********************************c");
		 *                                         printf("%d\n", r);
		 *                                             r = wildcmp("main.c", "*");
		 *                                                 printf("%d\n", r);
		 *                                                     r = wildcmp("main.c", "***");
		 *                                                         printf("%d\n", r);
		 *                                                             r = wildcmp("main.c", "m.*c");
		 *                                                                 printf("%d\n", r);
		 *                                                                     r = wildcmp("main.c", "**.*c");
		 *                                                                         printf("%d\n", r);
		 *                                                                             r = wildcmp("main-main.c", "ma*in.c");
		 *                                                                                 printf("%d\n", r);
		 *                                                                                     */
	        r = wildcmp("main", "main*d");
		    printf("%d\n", r);
		        /*
			 *     r = wildcmp("abc", "*b");
			 *         printf("%d\n", r);
			 *             */
		        return (0);
}

/*
 *  
 *  		if(*(h + m) == '*' && n != 0)
 *  				{
 *  							return(helpertwo(s,h,n,m));
 *  									}
 *  											else if((*(h + m) == '*') && n == 0)
 *  													{
 *  																return(1);
 *  																		}
 *  																				else
 *  																						{
 *  																									putchar(*(h + m));
 *  																												return (0);
 *  																														}
 *  																														 */

