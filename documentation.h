/** @file documentation.h
 * @brief Stores all DOxygen style comments of the Capture game.
 */

/** @file gamepage.h
 * @brief Declarations for gamepage.cpp
 */
/** @file gamepage.ui
 * @brief Desinger file of gamepage.obj
*/
/** @file gamepage.cpp
 * @brief Makes the game board on QGraphicsView
 * @fn GampePage::GamePage(QWidget *parent)
 *      @brief Default constructor
 *          Sets up the grid of the board using QGraphicsLineItem and adds players to it.
 *      @param parent is a QWidget pointer defaulted as 0.
 * @fn GamePage::~Gampage()
 *      @brief Deconstructor
 */

/** @file player.h
  * @brief Declarations for player.cpp
 */
/** @file player.cpp
  * @brief Creates the player.
  * @fn Player::Player()
  *     @brief Default constructor
  * @fn Player::~Player()
  *     @brief Destructor
  * @fn QRectF Player::boundingRect() const
  *     @brief creats the outer bound for the QGraphicsItem
  *     @return QRectF that fits in the one of the squares on the grid
  * @fn void Player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
  *     @brief Paint function that draws a red box
  * @fn void Player::keyPressEvent(QKeyEvent* event)
  *     @brief QKeyEvent function that takes in certain key presses and moves the player accordingly.
  *         When the space key is pressed, a black block is made in the player's place.
*/

/** @file player2.h
  * @brief Declarations for player2.cpp
 */
/** @file player2.cpp
  * @brief Creates Player2 by inheriting from Player.
  * @fn Player2::Player2()
  *     @brief Default constructor
  * @fn Player2::~Player2()
  *     @brief Destructor
  * @fn void Player2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
  *     @brief Paint function that draws a blue box
  * @fn void Player2::keyPressEvent(QKeyEvent* event)
  *     @brief QKeyEvent function that takes in certain key presses and moves the player accordingly.
  *         When the space key is pressed, a black block is made in the player's place.
*/

/** @file block.h
 * @brief Contains declarations for block.cpp
 */
/** @file block.cpp
 * @brief Creates a QGraphicsRectItem.
 * @fn Block::Block()
 *      @brief Constructor
 * @fn Block::~Block()
 *      @brief Deconstructor
 */

/** @file instruction.h
 * @brief Declarations for instruction.cpp
 */
/** @file instruction.cpp
 * @brief Makes the page that contains instructions
 * @fn Instruction::Instruction(QWidget* parent)
 *      @brief Constructor.
 *          Sets up the ui.
 *      @param parent is a QWidget pointer defaulted to 0.
 * @fn Instruction::~Instruction()
 *      @brief Deconstructor
 */
/** @file instruction.ui
 * @brief Designer file of instruction.obj
*/

/** @file mainwindow.h
 * @brief Declarations for mainwindow.cpp
*/
/** @file mainwindow.ui
 * @brief Designer file of mainwindow,obj
*/
/** @file mainwindow.cpp
 * @brief Creates a MainWindow object.
 * @fn MainWindow::MainWindow(QWidget* parent)
 *      @param parent is a QWidget poiter
 *      @brief Constructor
 * @fn void MainWindow::begin()
 *      @brief Slot that shows game page when button is clicked.
 * @fn void ManWindow::howTo()
 *      @brief Slot that shows the instructions page when button is clicked.
 * @fn void MainWindow::game_over()
 *      @brief Slot that takes you back to the start up page when button is clicked.
*/

/** @file main.cpp
 * @brief Creates a MainWindow object & shows it.
*/


