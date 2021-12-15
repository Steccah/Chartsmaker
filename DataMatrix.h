#ifndef DATAMATRIX_H
#define DATAMATRIX_H
#include <vector>
#include <string>

class DataMatrix
{
private:
    std::vector<std::vector<double>> *data; //reference of a 2D vector
    std::vector<std::string> *rowLabel;     //vector of labels for the rows
    std::vector<std::string> *columnLabel;  //vector of labels for the columns

public:
    DataMatrix() : data(nullptr), rowLabel(nullptr), columnLabel(nullptr) {}

    /**
     * @brief Construct a new Data Matrix object
     * 
     * @param data reference of a 2d vector
     * @param rowLabel reference of a string vector
     * @param columnLabel reference of a string vector
     */
    DataMatrix(std::vector<std::vector<double>> &data, std::vector<std::string> &rowLabel, std::vector<std::string> &columnLabel);

    /**
     * @brief Copy constructor of a new Data Matrix object
     * 
     * @param table 
     */
    DataMatrix(DataMatrix &table);
    /**
     * @brief Destructor of Data Matrix object
     * 
     */
    ~DataMatrix();

    /**
     * @brief adds a row in n poition
     * 
     * @param a reference to the vector to add
     * @param n index in which to insert the row
     */
    void addRow(std::vector<double> &a, unsigned int n = 0);

    /**
     * @brief adds a column in n position
     * 
     * @param a reference to the vector to add
     * @param n index in which to insert the column
     */
    void addColumn(std::vector<double> &a, unsigned int n = 0);

    /**
     * @brief deletes the row in n index
     * 
     * @param n index of the row to remove
     */
    void deleteRow(unsigned int n);

    /**
     * @brief deletes the column in n index
     * 
     * @param n index of the column to remove
     */
    void deleteColumn(unsigned int n);

    /**
     * @brief Get the Data object
     * 
     * @return std::vector<std::vector<double>> 
     */
    std::vector<std::vector<double>> *getData();

    /**
     * @brief Get the Row Label object
     * 
     * @return std::vector<string>* 
     */
    std::vector<std::string> *getRowLabel();

    /**
     * @brief Get the Column Label object
     * 
     * @return std::vector<std::string>* 
     */
    std::vector<std::string> *getColumnLabel();
};

#endif