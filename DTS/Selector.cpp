#include "pch.h"
#include "Selector.h"
#include "Selector.g.cpp"

namespace winrt::DTS::implementation
{
Microsoft::UI::Xaml::DataTemplate Selector::SelectTemplateCore(
    IInspectable const &item, Microsoft::UI::Xaml::DependencyObject const & /*container*/)
{
    auto value = unbox_value<int>(item);
    return value > 0 ? mFirstTemplate : mSecondTemplate;
}

Microsoft::UI::Xaml::DataTemplate Selector::SelectTemplateCore(IInspectable const &item)
{
    auto value = unbox_value<int>(item);
    return value > 0 ? mFirstTemplate : mSecondTemplate;
}

winrt::Microsoft::UI::Xaml::DataTemplate Selector::firstTemplate()
{
    return mFirstTemplate;
}

void Selector::firstTemplate(winrt::Microsoft::UI::Xaml::DataTemplate const &value)
{
    mFirstTemplate = value;
}

winrt::Microsoft::UI::Xaml::DataTemplate Selector::secondTemplate()
{
    return mSecondTemplate;
}

void Selector::secondTemplate(winrt::Microsoft::UI::Xaml::DataTemplate const &value)
{
    mSecondTemplate = value;
}
} // namespace winrt::DTS::implementation
