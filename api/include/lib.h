// Copyright 2023 Eu

#ifndef API_INCLUDE_LIB_H_
#define API_INCLUDE_LIB_H_

#ifdef API_SHARED_LIBRARY
#define API_PUBLIC_INTERFACE __declspec(dllexport)
#else  // API_SHARED_LIBRARY
#define API_PUBLIC_INTERFACE __declspec(dllimport)
#endif  // API_SHARED_LIBRARY

#include <QObject>

class API_PUBLIC_INTERFACE ApiClass : public QObject {
  Q_OBJECT

 signals:
  void S1(int a);

 public slots:
  void emit_signal(int a);
};

#endif  // API_INCLUDE_LIB_H_
