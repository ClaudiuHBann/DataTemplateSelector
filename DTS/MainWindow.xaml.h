#pragma once

#include "MainWindow.g.h"
#include "Selector.h"

namespace winrt::DTS::implementation
{
struct MainWindow : MainWindowT<MainWindow>
{
    MainWindow();

    DTS::Selector Selector();
    void Selector(DTS::Selector const &value);

  private:
    DTS::Selector mSelector;
};
} // namespace winrt::DTS::implementation

namespace winrt::DTS::factory_implementation
{
struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
{
};
} // namespace winrt::DTS::factory_implementation
