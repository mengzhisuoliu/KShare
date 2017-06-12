#ifndef RECORDINGFORMATS_HPP
#define RECORDINGFORMATS_HPP

#include <QDir>
#include <QFile>
#include <QImage>
#include <QString>
#include <formats.hpp>
#include <functional>

#include <recording/encoders/encoder.hpp>

class RecordingFormats {
public:
    RecordingFormats(formats::Recording f);
    ~RecordingFormats();
    std::function<void(QImage)> getConsumer();
    std::function<bool(QSize)> getValidator();
    std::function<QByteArray()> getFinalizer();
    QImage::Format getFormat();
    QString getAnotherFormat();

private:
    std::function<void(QImage)> consumer;
    std::function<bool(QSize)> validator;
    std::function<QByteArray()> finalizer;
    std::vector<QImage> frames;
    QImage::Format iFormat;
    QDir tmpDir;
    Encoder *enc = NULL;
    QString anotherFormat;
};

#endif // RECORDINGFORMATS_HPP