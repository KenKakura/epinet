/*
** EPITECH PROJECT, 2021
** Epinet
** File description:
** error
*/

#ifndef ERROR_H_
#define ERROR_H_

#define MAX_ERROR_LEN 1024

//////////////////////////////////////////////////////////////
/// \brief Epinet's perror equivalent (public)
///
/// \param message Message to display
//////////////////////////////////////////////////////////////
void epinet_perror(const char *message);

//////////////////////////////////////////////////////////////
/// \brief Getter used by perror to retrieve message (private)
//////////////////////////////////////////////////////////////
char *get_error(void);

//////////////////////////////////////////////////////////////
/// \brief Setter for the error message (private)
///
/// \param message Error message (MAX_ERROR_LEN-1 chars max)
//////////////////////////////////////////////////////////////
void set_error(const char *message);

#endif /* !ERROR_H_ */
