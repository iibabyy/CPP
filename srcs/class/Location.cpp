/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Location.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:00:53 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/08 20:30:23 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Location.hpp"

Location::Location() {
	_location = "";

	_root = "";
	_cgi = "";
	_redirect = "";
	_allowedMethods = "";
	_client_max_body_size = -1; // no limit (?)

	_index = "";
	_autoIndex = false;

	_file_upload = false;
	_uploadFolder = "";
}

Location::~Location() {
}

/*; 	copy needed ?	*/
// Location::Location( const Location &other ) {
// 	(*this) = other;
// }

// Location& Location::operator=( const Location &other ) {
// 	_root = other._root;
// 	_cgi = other._cgi;
// 	_redirect = other._redirect;
// 	_allowedMethods = other._allowedMethods;
// 	_client_max_body_size = other._client_max_body_size;

// 	_index = other._index;
// 	_autoIndex = other._autoIndex;

// 	_file_upload = other._file_upload;
// 	_uploadFolder = other._uploadFolder;
//	return *this;
// }

/*	GETTER	*/

const std::string&	Location::location( void ) const {
	return _location;
} // LOCATION

const std::string&	Location::root( void ) const {
	return _root;
} // string
const std::string&	Location::cgi( void ) const {
	return _cgi;
} // string
const std::string&	Location::redirect( void ) const {
	return _redirect;
} // string
const std::string& Location::allowedMethods( void ) const {
	return _allowedMethods;
} // allowedMethods
int	Location::maxBodySize( void ) const {
	return _client_max_body_size;
} // maxBodySize

const std::string&	Location::index( void ) const {
	return _index;
} // string
bool	Location::autoIndex( void ) const {
	return _autoIndex;
} // autoIndex

bool	Location::fileUpload( void ) const {
	return _file_upload;
} // fileUpload
const std::string&	Location::uploadFolder( void ) const {
	return _uploadFolder;
} // string

/*	SETTER	*/

void	Location::location( std::string newLocation ) {
	_location = newLocation;
} // location

void	Location::root( std::string newRoot ) {
	_root = newRoot;
} // root
void	Location::cgi( std::string newCgi ) {
	_cgi = newCgi;
} // cgi
void	Location::redirect( std::string newRedirect ) {
	_redirect = newRedirect;
} // redirect
void	Location::allowedMethods( std::string newAllowedMethods ) {
	_allowedMethods = newAllowedMethods;
} // allowedMethods
void	Location::maxBodySize( int newMaxBodySize ) {
	_client_max_body_size = newMaxBodySize;
} // maxBodySize

void	Location::index( std::string newIndex ) {
	_index = newIndex;
} // index
void	Location::autoIndex( bool newAutoIndex ) {
	_autoIndex = newAutoIndex;
} // autoIndex

void	Location::fileUpload( bool newFileUpload ) {
	_file_upload = newFileUpload;
} // fileUpload
void	Location::uploadFolder( std::string newUploadFolder ) {
	_uploadFolder = newUploadFolder;
} // uploadFolder

