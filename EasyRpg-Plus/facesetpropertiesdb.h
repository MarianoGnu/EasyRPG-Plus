#ifndef FACESETPROPERTIESDB_H
#define FACESETPROPERTIESDB_H

#include <QWidget>

namespace Ui {
class FaceSetPropertiesDB;
}

class FaceSetPropertiesDB : public QWidget
{
    Q_OBJECT
    
public:
    explicit FaceSetPropertiesDB(QWidget *parent = 0);
    ~FaceSetPropertiesDB();
    
private:
    Ui::FaceSetPropertiesDB *ui;
};

#endif // FACESETPROPERTIESDB_H
