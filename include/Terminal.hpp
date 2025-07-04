#ifndef TERMINAL_HPP
#define TERMINAL_HPP
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/dom/table.hpp>
#include "../include/MonsterCard.hpp"
#include "../include/Perk.hpp"
#include "../include/Hero.hpp"
#include "../include/Villager.hpp"
#include "../include/Item.hpp"
#include <map>
#include <string>
#include <memory>
class Game;
class ShowInTerminal{
  private :
    ftxui::Element RenderTerrorLevel(int terrorLevel);
    ftxui::Element RenderDraculaMat(std ::vector<std::pair<bool , std::string>>);
    ftxui::Element RenderInvisibleManMat(std ::vector<std::pair<bool , std::string>>);
    ftxui::Element RenderMap();
    ftxui::Element RenderItems(const std::vector< std::shared_ptr<Item>>& items);
    ftxui::Element RenderHeroInfo(const std::shared_ptr<Hero>& hero);
    ftxui::Element RenderMonsterCard(const std::shared_ptr<MonsterCard>& card);
    ftxui::Element RenderPerkCard(const std::shared_ptr<PerkCard>& card);
    ftxui::Table RenderLocationOverview(
        const std::unordered_map<std::string, std::shared_ptr<Location>>& locations,
        const std::vector<std::shared_ptr<Monster>>& monsters,
        const std::vector<std::shared_ptr<Villager>>& villagers,
        const std::vector<std::shared_ptr<Item>>& items,
        const std::vector<std::shared_ptr<Hero>>&heros
    );

  public :
  ShowInTerminal()= default;
  void Refresh();
  int MenuGenerator(const std :: vector <std :: string> Options);
  void StylizeTextBoard(const std :: string text);
  std :: string GetInput(const std :: string output , std :: string ErrorType);
  int ShowHeroPhase( Game & game ,const std :: vector<std :: string> options);
  void ShowMonsterPhase( Game & game);
  void ShowPause();
  void ShowPauseWithRefresh();

};
#endif