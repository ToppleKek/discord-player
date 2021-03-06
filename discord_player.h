#ifndef DISCORD_PLAYER_H
#define DISCORD_PLAYER_H

#include <QMainWindow>

namespace Ui {
class discord_player;
}

class discord_player : public QMainWindow
{
    Q_OBJECT

public:
    explicit discord_player(QWidget *parent = 0);
    ~discord_player();

private slots:
    void on_webEngineView_titleChanged(const QString &title);

    void on_webEngineView_iconChanged(const QIcon &arg1);

    void on_webEngineView_urlChanged(const QUrl &arg1);

private:
    Ui::discord_player *ui;
};

#endif // DISCORD_PLAYER_H
