#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

namespace winrt::DTS::implementation
{
MainWindow::MainWindow()
{
    InitializeComponent();

    list().Items().Append(box_value(1));
    list().Items().Append(box_value(-1));
}

DTS::Selector MainWindow::Selector()
{
    return mSelector;
}

void MainWindow::Selector(DTS::Selector const &value)
{
    mSelector = value;
}
} // namespace winrt::DTS::implementation
