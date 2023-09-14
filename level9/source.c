/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsung <rsung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:59:20 by rsung             #+#    #+#             */
/*   Updated: 2023/08/14 15:01:09 by rsung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class N {
	public:
		N(int n) : _n(n) {}
		void setAnnotation(char *str) {
			int len = strlen(str);	
			memcpy(this->buf, str, len);
		}
		int operator+(N &lhs) {
			return this->_n += lhs._n;
		}
		int operator-(N &lhs) {
			return this->_n -= lhs._n;
		}

	private:
		char *buf;
		int _n;
};

int main(int ac, char **av) {
	if (ac <= 1)
		exit(1);

	N *st1 = new(N(5));
	N *st2 = new(N(6));
	st1->setAnnotation(av[1]);
	return st2->operator+(st1);	
}
