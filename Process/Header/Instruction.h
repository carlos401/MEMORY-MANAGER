//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_INSTRUCTION_H
#define TP4_OPER_INSTRUCTION_H

/**
 * The compiler's result
 */
class Instruction {
public:
    /**
     * Possible types of Instruction.The syntax is the following:
     * - LOAD: memAddress to register
     * - LOADI: constantVal to register
     * - STORE: register to memAddress
     * - ADD: in DestRegister the OrigRegister plus OrigRegister
     */
    enum Operation { LOAD, LOADI, STORE, ADD};

    /**
     * The constructor for standard operation
     * @param operation the type of Instruction
     * @param origin the origin of the value
     * @param destination the destination of the value
     */
    Instruction(Operation operation, int origin, int destination);

    /**
     * The constructor for ADD operation
     * @param operation the type of Instruction
     * @param origin the origin of the value
     * @param originD the origin of the value
     * @param destination the destination of the value
     */
    Instruction(Operation operation, int origin, int originD, int destination);

    /**
     * To know what operation includes the instruction
     * @return the Operation that must execute
     */
    Operation getOperation() const;

    /**
     * where will the value read
     * @return the origin of the value
     */
    int getOrigin() const;

    /**
     * where will the value read
     * @return the origin of the value
     */
    int getOriginD() const;

    /**
     * where will the value located
     * @return the destination of the value
     */
    int getDestination() const;

private:
    /**
     * the Operation that must execute
     */
    Operation operation;

    /**
     * the origin of the value
     */
    int origin;

    /**
     * the special value for add instructions
     */
    int originD;

    /**
     * the destination of the value
     */
    int destination;

};


#endif //TP4_OPER_INSTRUCTION_H
