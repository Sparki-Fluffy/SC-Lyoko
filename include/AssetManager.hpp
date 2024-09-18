#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <filesystem>
#include <nlohmann/json.hpp>

template <typename T>
class Asset : public T
{
    template <typename U> friend class AssetManager;
private:
    std::string name;
    std::filesystem::path filepath;

public:
    Asset()
    {
        this->name = "";
        this->filepath = ".";
    }

    Asset(std::filesystem::path path)
    {
        loadFromFile(path);
    }

    void loadFromFile(std::filesystem::path path)
    {
        this->name = path.stem().string();
        this->filepath = path;
        T::loadFromFile(path.string());
    }

    std::string getName() const
    {
        return name;
    }

    std::filesystem::path getPath() const
    {
        return filepath;
    }
};

template <typename T>
class AssetManager
{
private:
    std::string path = "../resource/";
    std::vector<Asset<T>> resources;

public:
    static std::vector<std::string> extensions;

    AssetManager()
    {
        std::filesystem::path p = path;
        std::filesystem::recursive_directory_iterator dirIter(path);

        for (auto& entry : dirIter)
        {
            for (auto& ext : extensions)
            {
                if (entry.path().extension() == ext) add(entry.path());
            }
            
        }
    }
    
    void add(std::filesystem::path path)
    {
        Asset<T>&& asset = Asset<T>();
        asset.loadFromFile(path);
        resources.push_back(asset);
    }

    Asset<T>& get(std::string name)
    {
        for (auto& res : resources)
        {
            if (res.name == name)
            {
                return res;
            }   
        }
        return *(new Asset<T>());
    }

    Asset<T>& operator[](unsigned int idx)
    {
        return resources[idx];
    }

    const Asset<T>& operator[](unsigned int idx) const
    {
        return resources[idx];
    }

    Asset<T>& operator[](std::string name)
    {
        return get(name);
    }

    const Asset<T>& operator[](std::string name) const
    {
        return get(name);
    }
};

template<> inline std::vector<std::string>AssetManager<sf::Font>::extensions = { ".ttf" };
template<> inline std::vector<std::string>AssetManager<sf::Texture>::extensions = { ".png" };

static AssetManager<sf::Texture> Textures;
static AssetManager<sf::Font> Fonts;
//static AssetManager<sf::Audio>Audios;
