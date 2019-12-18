#pragma once

template <class T>
void centerOrigin(T& item) {
  auto rect = item.getLocalBounds();
  item.setOrigin(rect.left + rect.width  / 2.0f,
                 rect.top  + rect.height / 2.0f);
}
