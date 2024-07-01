p = wp = ken_data;
do {
	p++;
	wp->next = p;
	wp = p;
} while (p->code != DATA_END);

