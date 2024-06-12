#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()	{
}


PmergeMe::PmergeMe( const PmergeMe & src )	{
	this->_dataV = src._dataV;
	this->_pyraV = src._pyraV;
	this->_dataD = src._dataD;
	this->_pyraD = src._pyraD;
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()	{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )	{
	if ( this != &rhs )	{
		this->_dataV = rhs._dataV;
		this->_pyraV = rhs._pyraV;
		this->_dataD = rhs._dataD;
		this->_pyraD = rhs._pyraD;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PmergeMe const & i )	{
	(void)i;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- VECTOR ---------------------------------
*/


void PmergeMe::pushBackVector(int n)	{
	this->_dataV.push_back(n);
}

std::size_t PmergeMe::getVectorDataSize() const	{
	return this->_dataV.size();
}

void PmergeMe::displayVector() const	{
	for (size_t i = 0; i < this->_dataV.size(); i++)	{
		std::cout << this->_dataV[i] << " ";
	}
	std::cout << std::endl;
}

std::string	PmergeMe::displayVectorString(int *arr, std::size_t n) const	{
	std::string out = "";
	for (size_t i = 0; i < n; i++)	{
		std::stringstream ss;
		ss << arr[i];
		std::string str = ss.str();
		out += str + " ";
	}
	return out;
}

void PmergeMe::sortVectorNbis(int *first, int *second, std::size_t nF, std::size_t nS)	{
	std::size_t	fSize = 0;
	std::size_t	sSize = 0;
	std::size_t i = 0;
	std::vector<int> tmp;

	if (DEBUG_SORT) std::cout << "nF : " << nF << std::endl;
	if (DEBUG_SORT) std::cout << "nS : " << nS << std::endl;
	if (DEBUG_SORT) std::cout << "first : " << displayVectorString(first, nF) << std::endl;
	if (DEBUG_SORT) std::cout << "second : " << displayVectorString(second, nS) << std::endl;

	if (nF == 2 || nF == 3)	{
		if (first[0] > first[1])	{
			std::swap(first[0], first[1]);
		}
		if (nF == 3 && first[1] > first[2])	{
			std::swap(first[1], first[2]);
		}
		if (nF == 3 && first[0] > first[1])	{
			std::swap(first[0], first[1]);
		}
	}
	if (nS == 2 || nS == 3)	{
		if (second[0] > second[1])	{
			std::swap(second[0], second[1]);
		}
		if (nS == 3 && second[1] > second[2])	{
			std::swap(second[1], second[2]);
		}
		if (nS == 3 && second[0] > second[1])	{
			std::swap(second[0], second[1]);
		}
	}

	while (i < nF + nS)	{
		if (fSize == nF)	{
			while (sSize < nS)	{
				tmp.push_back(second[sSize]);
				sSize++;
			}
			break;
		}
		if (sSize == nS)	{
			while (fSize < nF)	{
				tmp.push_back(first[fSize]);
				fSize++;
			}
			break;
		}

		if (first[fSize] < second[sSize])	{
			tmp.push_back(first[fSize]);
			fSize++;
			continue;
		}
		if (first[fSize] > second[sSize])	{
			tmp.push_back(second[sSize]);
			sSize++;
			continue;
		}
		i++;
	}
	if (DEBUG_SORT)	{
		std::cout << "TMP : debut :" << std::endl;
		for (size_t i = 0; i < tmp.size(); i++){
			if (DEBUG_SORT) std::cout << tmp[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "TMP : fin :" << std::endl;
	}

	/*	copie tmp dans le vector	*/
	for (size_t i = 0; i < nF; i++)	{
		first[i] = tmp[i];
	}
	for (size_t i = 0; i < nS; i++)	{
		second[i] = tmp[i + nF];
	}
}

// return true if pyra is < 2
bool PmergeMe::checkVectorPyra()	{
	for (size_t i = 1; i < _pyraV.size(); i++)	{
		if (_pyraV[i] <= 2 || _pyraV[i] == 3)	{
			return true;
		}
		else
			return false;
	}
	return false;
}

void PmergeMe::createVectorPyra()	{
	std::size_t n = getVectorDataSize();
	std::size_t res1 = 0;
	std::size_t res2 = 0;
	if (n % 2 == 0)	{
		res1 = n / 2;
		res2 = n / 2;
	}
	else	{
		res1 = n / 2;
		res2 = (n / 2) + 1;
	}
	_pyraV.insert(_pyraV.begin(), -1);	// -1 = Marker in pyra
	_pyraV.insert(_pyraV.begin(), res1);
	_pyraV.insert(_pyraV.begin(), res2);
	_pyraV.insert(_pyraV.begin(), -1);	// -1 = Marker in pyra

	while (!checkVectorPyra())	{
		bool foundFirstMarker = false;
		std::vector<int> tmp;
		for (std::vector<int>::iterator it = _pyraV.begin(); it != _pyraV.end(); ++it) {
			if (*it == -1) {
				if (foundFirstMarker) {
					break;
				} else {
					foundFirstMarker = true;
				}
			} else if (foundFirstMarker) {
				if (*it % 2 == 0)	{
					tmp.push_back(*it / 2);
					tmp.push_back(*it / 2);
				}
				else	{
					tmp.push_back(*it / 2 + 1);
					tmp.push_back(*it / 2);
				}
			}
		}
		for (std::vector<int>::reverse_iterator rit = tmp.rbegin(); rit != tmp.rend(); ++rit) {
			_pyraV.insert(_pyraV.begin(), *rit);
		}
		_pyraV.insert(_pyraV.begin(), -1);	// -1 = Marker in pyra
	}

	if (DEBUG_PYRA)	{
		std::cout << "pyra :";
		for (size_t i = 0; i < _pyraV.size(); i++)	{
			if (_pyraV[i] == -1)
				std::cout << std::endl;
			else
				std::cout << _pyraV[i] << " ";
		}
		std::cout << std::endl;
	}
}

void PmergeMe::verifyVectorResult()	{
	for (size_t i = 1; i <= this->_dataV.size() - 1; i++)	{
		if (this->_dataV[i - 1] != static_cast<int>(i)) {
			std::cout << "Error at index : " << i << " value : " << this->_dataV[i] << std::endl;
			return;
		}
	}
	std::cout << "All good" << std::endl;
}
void PmergeMe::sortVector()	{
	std::size_t index = 0;

	for (size_t i = 0; i < _pyraV.size(); i++)	{
		if (_pyraV[i] == -1)	{
			index = 0;
			continue;
		}
		else	{
			if (DEBUG_SORT) std::cout << "index : " << index << " pyra : " << _pyraV[i] << std::endl;
			if (DEBUG_SORT) std::cout << "index : " << index << " pyra +1 : " << _pyraV[i + 1] << std::endl;
			sortVectorNbis(&this->_dataV[index], &this->_dataV[index + _pyraV[i]], _pyraV[i], _pyraV[i + 1]);
			index += _pyraV[i] + _pyraV[i + 1];
			i++;
		}
	}
}


/*
** --------------------------------- VECTOR ---------------------------------
*/


/*
** --------------------------------- DEQUE ---------------------------------
*/

void PmergeMe::pushBackDeque(int n) {
    this->_dataD.push_back(n);
}

std::size_t PmergeMe::getDequeDataSize() const {
    return this->_dataD.size();
}

void PmergeMe::displayDeque() const {
    for (size_t i = 0; i < this->_dataD.size(); i++) {
        std::cout << this->_dataD[i] << " ";
    }
    std::cout << std::endl;
}

std::string PmergeMe::displayDequeString(std::size_t arr, std::size_t n) const {
    std::string out = "";
    for (size_t i = 0; i < n; i++) {
        std::stringstream ss;
        ss << _dataD[arr + i];
        std::string str = ss.str();
        out += str + " ";
    }
    return out;
}

void PmergeMe::sortDequeNbis(std::size_t first, std::size_t second, std::size_t nF, std::size_t nS) {
    std::size_t fSize = 0;
    std::size_t sSize = 0;
    std::size_t i = 0;
    std::deque<int> tmp;

    if (DEBUG_SORT) std::cout << "nF : " << nF << std::endl;
    if (DEBUG_SORT) std::cout << "nS : " << nS << std::endl;
    if (DEBUG_SORT) std::cout << "first : " << displayDequeString(first, nF) << std::endl;
    if (DEBUG_SORT) std::cout << "second : " << displayDequeString(second, nS) << std::endl;

    if (nF == 2 || nF == 3) {
        if (_dataD[first] > _dataD[first + 1]) {
            std::swap(_dataD[first], _dataD[first + 1]);
        }
        if (nF == 3 && _dataD[first + 1] > _dataD[first + 2]) {
            std::swap(_dataD[first + 1], _dataD[first + 2]);
        }
        if (nF == 3 && _dataD[first] > _dataD[first + 1]) {
            std::swap(_dataD[first], _dataD[first + 1]);
        }
    }
    if (nS == 2 || nS == 3) {
        if (_dataD[second] > _dataD[second + 1]) {
            std::swap(_dataD[second], _dataD[second + 1]);
        }
        if (nS == 3 && _dataD[second + 1] > _dataD[second + 2]) {
            std::swap(_dataD[second + 1], _dataD[second + 2]);
        }
        if (nS == 3 && _dataD[second] > _dataD[second + 1]) {
            std::swap(_dataD[second], _dataD[second + 1]);
        }
    }

    while (i < nF + nS) {
        if (fSize == nF) {
            while (sSize < nS) {
                tmp.push_back(_dataD[second + sSize]);
                sSize++;
            }
            break;
        }
        if (sSize == nS) {
            while (fSize < nF) {
                tmp.push_back(_dataD[first + fSize]);
                fSize++;
            }
            break;
        }

        if (_dataD[first + fSize] < _dataD[second + sSize]) {
            tmp.push_back(_dataD[first + fSize]);
            fSize++;
            continue;
        }
        if (_dataD[first + fSize] > _dataD[second + sSize]) {
            tmp.push_back(_dataD[second + sSize]);
            sSize++;
            continue;
        }
        i++;
    }
    if (DEBUG_SORT) {
        std::cout << "TMP : debut :" << std::endl;
        for (size_t i = 0; i < tmp.size(); i++) {
            if (DEBUG_SORT) std::cout << tmp[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "TMP : fin :" << std::endl;
    }

    /* copie tmp dans le deque */
    for (size_t i = 0; i < nF; i++) {
        _dataD[first + i] = tmp[i];
    }
    for (size_t i = 0; i < nS; i++) {
        _dataD[second + i] = tmp[i + nF];
    }
}

bool PmergeMe::checkDequePyra() {
    for (size_t i = 1; i < _pyraD.size(); i++) {
        if (_pyraD[i] <= 2 || _pyraD[i] == 3) {
            return true;
        } else
            return false;
    }
    return false;
}

void PmergeMe::createDequePyra() {
    std::size_t n = getDequeDataSize();
    std::size_t res1 = 0;
    std::size_t res2 = 0;
    if (n % 2 == 0) {
        res1 = n / 2;
        res2 = n / 2;
    } else {
        res1 = n / 2;
        res2 = (n / 2) + 1;
    }
    _pyraD.insert(_pyraD.begin(), -1); // -1 = Marker in pyra
    _pyraD.insert(_pyraD.begin(), res1);
    _pyraD.insert(_pyraD.begin(), res2);
    _pyraD.insert(_pyraD.begin(), -1); // -1 = Marker in pyra

    while (!checkDequePyra()) {
        bool foundFirstMarker = false;
        std::deque<int> tmp;
        for (std::deque<int>::iterator it = _pyraD.begin(); it != _pyraD.end(); ++it) {
            if (*it == -1) {
                if (foundFirstMarker) {
                    break;
                } else {
                    foundFirstMarker = true;
                }
            } else if (foundFirstMarker) {
                if (*it % 2 == 0) {
                    tmp.push_back(*it / 2);
                    tmp.push_back(*it / 2);
                } else {
                    tmp.push_back(*it / 2 + 1);
                    tmp.push_back(*it / 2);
                }
            }
        }
        for (std::deque<int>::reverse_iterator rit = tmp.rbegin(); rit != tmp.rend(); ++rit) {
            _pyraD.insert(_pyraD.begin(), *rit);
        }
        _pyraD.insert(_pyraD.begin(), -1); // -1 = Marker in pyra
    }

    if (DEBUG_PYRA) {
        std::cout << "pyra :";
        for (size_t i = 0; i < _pyraD.size(); i++) {
            if (_pyraD[i] == -1)
                std::cout << std::endl;
            else
                std::cout << _pyraD[i] << " ";
        }
        std::cout << std::endl;
    }
}

void PmergeMe::verifyDequeResult() {
    for (size_t i = 1; i <= this->_dataD.size() - 1; i++) {
        if (this->_dataD[i - 1] != static_cast<int>(i)) {
            std::cout << "Error at index : " << i << " value : " << this->_dataD[i] << std::endl;
            return;
        }
    }
    std::cout << "All good" << std::endl;
}

void PmergeMe::sortDeque() {
    std::size_t index = 0;

    for (size_t i = 0; i < _pyraD.size(); i++) {
        if (_pyraD[i] == -1) {
            index = 0;
            continue;
        } else {
            if (DEBUG_SORT) std::cout << "index : " << index << " pyra : " << _pyraD[i] << std::endl;
            if (DEBUG_SORT) std::cout << "index : " << index << " pyra +1 : " << _pyraD[i + 1] << std::endl;
            sortDequeNbis(index, index + _pyraD[i], _pyraD[i], _pyraD[i + 1]);
            index += _pyraD[i] + _pyraD[i + 1];
            i++;
        }
    }
}

/*
** --------------------------------- DEQUE ---------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
