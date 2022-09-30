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
						 * 	else if (n > 0 && m > 0)
						 * 		{
						 * 				putchar(*(h + m));
						 * 						if (*(h + m) != *(s + n))
						 * 								{
						 * 											f = 0;
						 * 													}
						 * 															--m;
						 * 																	return (helpertwo(s,h,n,m,f));
						 * 																		}
						 * 																			*/
						else
								{
											return (1);
												}
											
}

int wildcmp(char *s1, char *s2)
{
		int numone, numtwo, n, flag;

			n = 0;
				flag = 1;
					numone = helper(s1, n) - 1;
						numtwo = helper(s2, n) - 1;
							return (helpertwo(s1, s2, numone, numtwo,flag));
}
