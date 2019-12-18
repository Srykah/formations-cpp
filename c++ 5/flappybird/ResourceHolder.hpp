#pragma once
#include <map>
#include <memory>

template <typename Identifier, typename Resource>
class ResourceHolder {
public:
  bool loadFromFile(Identifier id, const std::string& filename) {
    if (resMap.count(id) > 0) {
      return false;
    }
    auto newRes = std::make_unique<Resource>();
    if (!newRes->loadFromFile(filename)) {
      return false;
    }
    resMap.emplace(std::make_pair(std::move(id), std::move(newRes)));
    return true;
  }

  [[nodiscard]] const Resource& get(const Identifier& id) const {
    return *resMap.at(id);
  }

private:
  std::map<Identifier, std::unique_ptr<Resource>> resMap;
};
