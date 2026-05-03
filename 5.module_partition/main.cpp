import game;
import std;

auto main() -> int {
    std::println("GAME NAME: {}", game::game_name);
    std::ignore = game::core::Game{};
    game::core::update_logic();
    game::input::handle_input();
    game::math::add();
    game::mixer::play_music();
    game::renderer::draw_player();
}
