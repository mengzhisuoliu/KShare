#ifndef SETTINGSDIALOG_HPP
#define SETTINGSDIALOG_HPP

#include <QDialog>

#include <uploaders/uploader.hpp>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog {
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();
    void setScheme(QString scheme);

public slots:
    void on_uploaderList_clicked(const QModelIndex &);
    void on_uploaderList_doubleClicked(const QModelIndex &);
    void on_delay_valueChanged(double arg1);
    void on_hotkeys_doubleClicked(const QModelIndex &i);
    void on_settingsButton_clicked();
    void on_quickMode_clicked(bool checked);
    void on_hideToTray_clicked(bool checked);
    void on_captureCursor_clicked(bool checked);
    void on_formatBox_currentIndexChanged(int index);
    void on_imageFormatBox_currentIndexChanged(int index);
    void on_pushButton_clicked();
    void on_nameScheme_textChanged(const QString &arg1);
    void newUploader(Uploader *u);
    void uploaderChanged(QString newName);

private:
    Ui::SettingsDialog *ui;
};

#endif // SETTINGSDIALOG_HPP
