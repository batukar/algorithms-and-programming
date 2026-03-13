#include <stdio.h>
struct deste {
	char *kart;
	char *tip;
};
int main(void)
{
	struct deste kart_tipi;
	kart_tipi.kart = "Vale";
	kart_tipi.tip = "Sinek";
	struct deste *destePtr = &kart_tipi; // assign address of aCard to cardPtr
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", kart_tipi.kart, " - ", kart_tipi.tip,
		destePtr->kart, " - ", destePtr->tip,
		(*destePtr).kart, " - ", (*destePtr).tip);
}
