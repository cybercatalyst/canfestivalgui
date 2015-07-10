/****************************************************************************
** Form implementation generated from reading ui file './processvargui.ui'
**
** Created: Tue Jun 18 15:38:59 2002
**      by:  The User Interface Compiler (uic)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/
#include "processvargui.h"

#include <qgroupbox.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qspinbox.h>

#include <qlayout.h>
#include <qvariant.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <Qt3Support/Q3Table>

/*
 *  Constructs a ProcessVarGui which is a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ProcessVarGui::ProcessVarGui(QWidget* parent,  const char* name, bool modal, Qt::WindowFlags fl )
    : QDialog( parent, fl )
{
    if ( !name )
    setObjectName( "ProcessVarGuiForm" );
    resize( 878, 454 );
    setWindowTitle( tr( "View Process Variables" ) );

    TextLabel4 = new QLabel( "TextLabel4", this );
    TextLabel4->setGeometry( QRect( 20, 20, 90, 17 ) );
    TextLabel4->setText( tr( "CAN Identifier" ) );

    canopenPVarViewIdentifier = new QSpinBox( this );
    canopenPVarViewIdentifier->setGeometry( QRect( 130, 15, 58, 25 ) );

    GroupBox6 = new QGroupBox( this );
    GroupBox6->setGeometry( QRect( 10, 60, 870, 380 ) );
    //GroupBox6->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, GroupBox6->sizePolicy().hasHeightForWidth() ) );
    GroupBox6->setTitle( tr( "View Process Data" ) );

    txTable = new Q3Table( GroupBox6, "txTable" );
    txTable->setGeometry( QRect( 10, 250, 850, 120 ) );
    txTable->setResizePolicy( Q3Table::Default );
    txTable->setNumRows( 4 );
    txTable->setNumCols( 10 );
    txTable->setShowGrid( TRUE );

    rxTable = new Q3Table( GroupBox6, "rxTable" );
    rxTable->setGeometry( QRect( 10, 70, 850, 120 ) );
    //rxTable->setAutoMask( FALSE );
    rxTable->setFrameShadow( Q3Table::Sunken );
    rxTable->setResizePolicy( Q3Table::AutoOneFit );
    rxTable->setNumRows( 4 );
    rxTable->setNumCols( 10 );
    rxTable->setShowGrid( TRUE );

    TextLabel5 = new QLabel( "TextLabel5", GroupBox6 );
    TextLabel5->setGeometry( QRect( 10, 40, 103, 15 ) );
    TextLabel5->setText( tr( "Rx (Receive) [dec]" ) );

    TextLabel6 = new QLabel( "TextLabel6", GroupBox6 );
    TextLabel6->setGeometry( QRect( 10, 220, 102, 15 ) );
    TextLabel6->setText( tr( "Tx (Transmit) [dec]" ) );

    PushButton1 = new QPushButton( "PushButton1", this );
    PushButton1->setGeometry( QRect( 230, 20, 131, 31 ) );
    PushButton1->setText( tr( "&Update" ) );

    // signals and slots connections
    connect( canopenPVarViewIdentifier, SIGNAL( valueChanged(int) ), this, SLOT( canopenIdChanged( ) ) );
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( canopenIdChanged( ) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ProcessVarGui::~ProcessVarGui()
{
    // no need to delete child widgets, Qt does it all for us
}

void ProcessVarGui::canopenIdChanged( )
{
    qWarning( "ProcessVarGui::canopenIdChanged( ): Not implemented yet!" );
}

