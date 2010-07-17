#ifndef CARDDRAGITEM_H
#define CARDDRAGITEM_H

#include "abstractcarddragitem.h"

class CardItem;

class CardDragItem : public AbstractCardDragItem {
private:
	int id;
	bool faceDown;
	CardZone *currentZone;
public:
	CardDragItem(CardItem *_item, int _id, const QPointF &_hotSpot, bool _faceDown, AbstractCardDragItem *parentDrag = 0);
	void updatePosition(const QPointF &cursorScenePos);
protected:
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif