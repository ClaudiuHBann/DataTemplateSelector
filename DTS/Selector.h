#pragma once
#include "Selector.g.h"

namespace winrt::DTS::implementation
{
struct Selector : SelectorT<Selector>
{
    Selector() = default;

    Microsoft::UI::Xaml::DataTemplate SelectTemplateCore(IInspectable const &item,
                                                         Microsoft::UI::Xaml::DependencyObject const &container);
    Microsoft::UI::Xaml::DataTemplate SelectTemplateCore(IInspectable const &item);

    winrt::Microsoft::UI::Xaml::DataTemplate firstTemplate();
    void firstTemplate(winrt::Microsoft::UI::Xaml::DataTemplate const &value);

    winrt::Microsoft::UI::Xaml::DataTemplate secondTemplate();
    void secondTemplate(winrt::Microsoft::UI::Xaml::DataTemplate const &value);

  private:
    Microsoft::UI::Xaml::DataTemplate mFirstTemplate;
    Microsoft::UI::Xaml::DataTemplate mSecondTemplate;
};
} // namespace winrt::DTS::implementation

namespace winrt::DTS::factory_implementation
{
struct Selector : SelectorT<Selector, implementation::Selector>
{
};
} // namespace winrt::DTS::factory_implementation
