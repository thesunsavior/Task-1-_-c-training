#ifndef DECL12_H
#define DECL12_H

#define DECL_12(prefix)  \
	void prefix##_one(); \
	void prefix##_two();

DECL_12(prepare)
DECL_12(work)

#endif