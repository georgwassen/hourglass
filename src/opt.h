/*
 * =====================================================================================
 *
 *       Filename:  opt.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25.07.2014 15:02:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Georg Wassen (gw) (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __OPT_H__
#define  __OPT_H__

struct opt {
    unsigned secs;
};

int opt(int argc, char *argv[], struct opt *opt);

#endif  // __OPT_H__
