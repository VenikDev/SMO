#ifndef SMO_MAIN_WINDOW_H
#define SMO_MAIN_WINDOW_H

#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>

#include "InputField.h"
#include "Logger.h"

class MainWindow : public QWidget {
  Q_OBJECT
 public:
  explicit MainWindow(QApplication& app);
  ~MainWindow() override;

 private slots:
  void StartDecision();

 private:
  // app
  QApplication& m_app;
  // layout
  QVBoxLayout* m_vbox;
  // logger
  logger::Logger* m_logger;
  // line edit
  // заявок в минуту (лямбда)
  field::InputField* m_lambda_input;
  // время обработки
  field::InputField* m_time_input;
  // кол-во потоков
  field::InputField* m_count_stream;
  // размер очереди
  field::InputField* m_queue_size;
  // buttons
  QPushButton* m_btn_decision;
};

#endif  //SMO_MAIN_WINDOW_H
