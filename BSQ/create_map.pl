# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    create_map.pl                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adono-ma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 00:48:12 by adono-ma          #+#    #+#              #
#    Updated: 2023/11/28 00:49:42 by adono-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
			if (int(rand($y) * 2) < $density) {
				print "o";
			}
			else {
				print ".";
			}
		}
		print "\n";
}
