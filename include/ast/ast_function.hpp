#ifndef ast_function_hpp
#define ast_fucntion_hpp

#include "ast_block.hpp"

class Function : public Block {
private:
    std::string specifier;
    BlockPtr declarator;
    BlockPtr cstatement;
// protected:
public:
    Function(std::string s, BlockPtr d, BlockPtr c) : specifier(s), declarator(d), cstatement(c) {}
    
    virtual ~Function() {
        delete declarator;
        delete cstatement;
    }
    
    std::string getSpecifier() const {
        return specifier;
    }

    BlockPtr getDeclarator() const {
        return declarator;
    }

    BlockPtr getStatement() const {
        return cstatement;
    }

    virtual void print(std::ostream &dst) const override {
        dst<<"New Function: [";
        dst<<" Function Type: ";
        dst<<"[ "<<getSpecifier()<<" ] ";
        dst<<"Function Name: [ ";
        getDeclarator()->print(dst);
        dst<<" ] ] [\n";
        getStatement()->print(dst);
        dst<<"\n] ";
    }

//     virtual void print(std::ostream &dst, unsigned indentLevel = 0) const override {
//     std::string indent(indentLevel * 4, ' ');
//     dst << indent << "Function: " << specifier << std::endl;
//     dst << indent << "├─ Declarator: " << std::endl;
//     declarator->print(dst, indentLevel + 1);
//     dst << std::endl << indent << "└─ Statement: " << std::endl;
//     cstatement->print(dst, indentLevel + 1);
// }


    virtual void evaluate(std::ostream &dst) const override { 
        dst<<getSpecifier()<<":\n";
        dst<<"addi sp,sp,-16\nsd s0,8(sp)\naddi s0,sp,16";
        getStatement()->evaluate(dst);
        dst<<"mv a0,a5\nld s0,8(sp)\naddi sp,sp,16\njr ra\n";
    }

    //virtual void generateRISC(std::ostream &dst, Context &context, int destReg) const override {
    //     dst<<"addi sp,sp,-16\nsd s0,8(sp)\naddi s0,sp,16\n";
    //     getStatement()->generateRISC(dst, context, destReg);
    //     dst<<"mv a0,a5\nld s0,8(sp)\naddi sp,sp,16\njr ra\n";
    // }
};

#endif