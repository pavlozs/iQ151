//
//  TestCpp.h
//  iQ151
//
//  Created by Pavel Duroň on 16.9.12.
//

#pragma once

#define INS_ARG cpu8080* p

class cpu8080 
{
public:
    cpu8080(void);
    ~cpu8080(void);
    
    void Run(int cycles);

public:
    
    typedef void (*tInsFunc)(INS_ARG);
    
    // Instruction table
    static const tInsFunc mInsTab[256];
    
    // Instructions
    static void nul(INS_ARG);
    static void aci(INS_ARG);
    static void adc(INS_ARG);
    static void add(INS_ARG);
    static void ana(INS_ARG);
    static void adi(INS_ARG);
    static void call(INS_ARG);
    static void cc(INS_ARG);
    static void cm(INS_ARG);
    static void cma(INS_ARG);
    static void cmc(INS_ARG);
    static void cmp(INS_ARG);
    static void cnc(INS_ARG);
    static void cnz(INS_ARG);
    static void cp(INS_ARG);
    static void cpe(INS_ARG);
    static void cpi(INS_ARG);
    static void cpo(INS_ARG);
    static void cz(INS_ARG);
    static void daa(INS_ARG);
    static void dad(INS_ARG);
    static void dcr(INS_ARG);
    static void dcx(INS_ARG);
    static void di(INS_ARG);
    static void ei(INS_ARG);
    static void in(INS_ARG);
    static void inr(INS_ARG);
    static void inx(INS_ARG);
    static void jc(INS_ARG);
    static void jm(INS_ARG);
    static void jmp(INS_ARG);
    static void jnc(INS_ARG);
    static void jnz(INS_ARG);
    static void jp(INS_ARG);
    static void jpe(INS_ARG);
    static void jpo(INS_ARG);
    static void jz(INS_ARG);
    static void lda(INS_ARG);
    static void ldax(INS_ARG);
    static void lhld(INS_ARG);
    static void lxi(INS_ARG);
    static void mov(INS_ARG);
    static void mvi(INS_ARG);
    static void nop(INS_ARG);
    static void ora(INS_ARG);
    static void ori(INS_ARG);
    static void out(INS_ARG);
    static void pchl(INS_ARG);
    static void pop(INS_ARG);
    static void push(INS_ARG);
    static void ral(INS_ARG);
    static void rar(INS_ARG);
    static void rc(INS_ARG);
    static void ret(INS_ARG);
    static void rlc(INS_ARG);
    static void rm(INS_ARG);
    static void rnc(INS_ARG);
    static void rnz(INS_ARG);
    static void rp(INS_ARG);
    static void rpe(INS_ARG);
    static void rpo(INS_ARG);
    static void rrc(INS_ARG);
    static void rst(INS_ARG);
    static void rz(INS_ARG);
    static void sbb(INS_ARG);
    static void sbi(INS_ARG);
    static void shld(INS_ARG);
    static void sphl(INS_ARG);
};