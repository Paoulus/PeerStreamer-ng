/*
 *  Copyright (c) 2010 Marco Biazzini
 *
 *  This is free software; see lgpl-2.1.txt
 */

#include "net_helper.h"
#include "topmanager.h"
#include "tman.h"

int topoChangeMetadata(struct nodeID *peer, void *metadata, int metadata_size);

int topoAddNeighbour(struct nodeID *neighbour, void *metadata, int metadata_size, tmanRankingFunction rfun);

int topoParseData(const uint8_t *buff, int len, tmanRankingFunction f);

const struct nodeID **topoGetNeighbourhood(int *n);

const void *topoGetMetadata(int *metadata_size);

int topoGrowNeighbourhood(int n);

int topoShrinkNeighbourhood(int n);

int topoRemoveNeighbour(struct nodeID *neighbour);
