//# include < iostream >
//using namespace std ;
//
//char matrix [ 3 ] [ 3 ] = { '1' , '2' , '3', '4' , '5' , '6', '7' , '8' , '9' } ;
//
//static int y = 0 ;
//
//char userentersave [ 9 ] ;
//
//int CheckWin ( char [ ] , int ) ;
//
//void startgame ( ) ;
//
//void AssignArray ( int ) ;
//
//void player_turn ( ) ;
//
//void display_box ( ) ;
//
//int main ( )
//{
//	startgame ( ) ;
//	return 0 ;
//}
//void  display_box ( )
//{
//	cout << endl << endl ;
//	
//	for ( int i = 0 ; i < 25 ; i ++ )
//	{
//		cout << "_ " ;
//	}
//	
//	cout << endl << endl ;
//	
//	cout << "|	" << matrix [ 0 ] [ 0 ] << "	|	" << matrix [ 0 ] [ 1 ] << "	|	" << matrix [ 0 ] [ 2 ] << "	|" ;
//	
//	cout << endl ;
//	
//	for ( int i = 0 ; i < 25 ; i ++ )
//	{
//		cout << "_ " ;
//	}
//	
//	cout << endl << endl ;
//	
//	cout << "|	" << matrix [ 1 ] [ 0 ] << "	|	" << matrix [ 1 ] [ 1 ] << "	|	" << matrix [ 1 ] [ 2 ] << "	|"  ;
//	
//	cout << endl ;
//	
//	for ( int i = 0 ; i < 25 ; i ++ )
//	{
//		cout << "_ " ;
//	}
//	
//	cout << endl << endl ;
//	
//	cout << "|	" << matrix [ 2 ] [ 0 ] << "	|	" << matrix [ 2 ] [ 1 ] << "	|	" << matrix [ 2 ] [ 2 ] << "	|"  ;
//	
//	cout << endl ;
//	
//	for ( int i = 0 ; i < 25 ; i ++ )
//	{
//		cout << "_ " ;
//	}
//	
//	cout << endl << endl ;
//}
//void player_turn ( int *boxnum , char name [ ] )
//{
//	int flag , flag1 ;
//	
//	static int count = 0 ;
//	
//	cout << name << "'s turn :\n\n" ;
//	
//	cout << "Enter Box Number :	"  ;
//	
//	do
//	{
//		flag = 0 ;
//		
//		flag1 = 0 ;
//		
//		cin >> *boxnum ;
//		
//		for ( int z = 0 ; z < 8 ; z ++ )
//		{
//			if ( ( *boxnum < 1 || *boxnum > 9 ) || *boxnum == userentersave [ z ] )
//			{
//				flag ++ ;
//				break ;
//			}
//		}
//		
//		if ( flag > 0 )
//		{
//			cout << "Invalid input! Enter Again : " ;
//		}
//		
//		for ( int z = 0 ; z < 8 ; z ++ )
//		{
//			if ( ( *boxnum >= 1 && *boxnum <= 9 ) && *boxnum != userentersave [ z ] )
//			{
//				flag1 ++ ;
//			}
//		}
//		
//		if ( flag1 == 8 )
//		{
//			userentersave [ count ] = *boxnum ;
//			count ++ ;
//		}
//	} while ( flag > 0 ) ;
//}
//void startgame ( )
//{
//
//	int num , *p , flag2 = 0 , x , terminate ;
//	
//	char name1 [ 30 ] , name2 [ 30 ] ;
//	
//	cout << "\n\n\t\t-----------------------------------------\n\t\t*\tWELCOME IN TIC TAC TOE\t\t*\n\t\t-----------------------------------------\n\n\n" ;
//	
//	cout << "Please enter the name of player 1 : " ;
//	
//	cin.getline ( name1 , 30 ) ;
//
//	cout << "\n\nPlease enter the name of player 2 : " ;
//	
//	cin.getline ( name2 , 30 ) ;
//	
//	p = &num ;
//	
//	for ( x = 0 ; x < 9 ; x ++ )
//	{
//		system ( "cls" ) ;
//		
//		display_box ( ) ;
//		
//		if ( x % 2 == 0 )
//		{
//			player_turn ( &num , name1 ) ;
//		}
//		
//		else
//		{
//			player_turn ( &num , name2 ) ;
//		}
//		
//		AssignArray ( num ) ;
//		
//		if ( x % 2 == 0)
//		{
//			terminate = CheckWin ( name1 , flag2 ) ;
//		}
//		
//		else
//		{
//			terminate = CheckWin ( name2 , flag2 ) ;
//		}
//		
//		if ( terminate > 0 )
//		{
//			break ;
//		}
//		
//	}
//	if ( x == 9 )
//	{
//		system ( "cls" ) ;
//		
//		display_box ( ) ;
//		
//		cout << "\n\nRESULT:\n-------\n" ;
//		
//		cout << "\tDRAW !!\n\n" ;
//	}
//}
//int CheckWin ( char name [ ] , int flag2 )
//{
//	flag2 = 0 ;
//	
//	if ( ( matrix [ 0 ] [ 0 ] == 'X' && matrix [ 0 ] [ 1 ] == 'X' && matrix [ 0 ] [ 2 ] == 'X' ) ||
//		( matrix [ 1 ] [ 0 ] == 'X' && matrix [ 1 ] [ 1 ] == 'X' && matrix [ 1 ] [ 2 ] == 'X' ) ||
//		( matrix [ 2 ] [ 0 ] == 'X' && matrix [ 2 ] [ 1 ] == 'X' && matrix [ 2 ] [ 2 ] == 'X' ) ||
//		( matrix [ 0 ] [ 0 ] == 'X' && matrix [ 1 ] [ 1 ] == 'X' && matrix [ 2 ] [ 2 ] == 'X' ) ||
//		( matrix [ 0 ] [ 0 ] == 'X' && matrix [ 1 ] [ 0 ] == 'X' && matrix [ 2 ] [ 0 ] == 'X' ) ||
//		( matrix [ 0 ] [ 1 ] == 'X' && matrix [ 1 ] [ 1 ] == 'X' && matrix [ 2 ] [ 1 ] == 'X' ) ||
//		( matrix [ 0 ] [ 2 ] == 'X' && matrix [ 1 ] [ 1 ] == 'X' && matrix [ 2 ] [ 0 ] == 'X' ) ||
//		( matrix [ 0 ] [ 2 ] == 'X' && matrix [ 1 ] [ 2 ] == 'X' && matrix [ 2 ] [ 2 ] == 'X' ) )
//	{
//		system ( "cls" ) ;
//		
//		display_box ( ) ;
//		
//		cout << "\n\nRESULT:\n-------\n" ;
//		
//		cout << "\t" << name << " Wins.\n\n" ;
//		
//		flag2 = 1 ;
//	}
//	else if ( ( matrix [ 0 ] [ 0 ] == 'O' && matrix [ 0 ] [ 1 ] == 'O' && matrix [ 0 ] [ 2 ] == 'O' ) ||
//			( matrix [ 1 ] [ 0 ] == 'O' && matrix [ 1 ] [ 1 ] == 'O' && matrix [ 1 ] [ 2 ] == 'O' ) ||
//			( matrix [ 2 ] [ 0 ] == 'O' && matrix [ 2 ] [ 1 ] == 'O' && matrix [ 2 ] [ 2 ] == 'O' ) ||
//			( matrix [ 0 ] [ 0 ] == 'O' && matrix [ 1 ] [ 1 ] == 'O' && matrix [ 2 ] [ 2 ] == 'O' ) ||
//			( matrix [ 0 ] [ 0 ] == 'O' && matrix [ 1 ] [ 0 ] == 'O' && matrix [ 2 ] [ 0 ] == 'O' ) ||
//			( matrix [ 0 ] [ 1 ] =='O' && matrix [ 1 ] [ 1 ] == 'O' && matrix [ 2 ] [ 1 ] == 'O' ) ||
//			( matrix [ 0 ] [ 2 ] == 'O' && matrix [ 1 ] [ 1 ] == 'O' && matrix [ 2 ] [ 0 ] == 'O' ) ||
//			( matrix [ 0 ] [ 2 ] == 'O' && matrix [ 1 ] [ 2 ] == 'O' && matrix [ 2 ] [ 2 ] == 'O' ) )
//	{
//		system ( "cls" ) ;
//		
//		display_box ( ) ;
//		
//		cout << "\n\nRESULT:\n-------\n" ;
//		
//		cout << "\t" << name << " Wins.\n\n" ;
//		
//		flag2 = 1 ;
//	}
//	
//	return flag2 ;
//}
//void AssignArray ( int num )
//{
//	char user1 = 'X' , user2 = 'O' ;
//	
//	if ( y % 2 == 0 )
//	{
//		switch ( num )
//		{
//		case 1 :
//			matrix [ 0 ] [ 0 ] = user1 ;
//			break ;
//		case 2 :
//			matrix [ 0 ] [ 1 ] = user1 ;
//			break ;
//		case 3 :
//			matrix [ 0 ] [ 2 ] = user1 ;
//			break ;
//		case 4 :
//			matrix [ 1 ] [ 0 ] = user1 ;
//			break ;
//		case 5 :
//			matrix [ 1 ] [ 1 ] = user1 ;
//			break ;
//		case 6 :
//			matrix [ 1 ] [ 2 ] = user1 ;
//			break ;
//		case 7 :
//			matrix [ 2 ] [ 0 ] = user1 ;
//			break ;
//		case 8 :
//			matrix [ 2 ] [ 1 ] = user1 ;
//			break ;
//		case 9 :
//			matrix [ 2 ] [ 2 ] = user1 ;
//			break ;
//		default :
//			break ;
//		}
//	}
//	else
//	{
//		switch ( num )
//		{
//		case 1 :
//			matrix [ 0 ] [ 0 ] = user2 ;
//			break ;
//		case 2 :
//			matrix [ 0 ] [ 1 ] = user2 ;
//			break ;
//		case 3 :
//			matrix [ 0 ] [ 2 ] = user2 ;
//			break ;
//		case 4 :
//			matrix [ 1 ] [ 0 ] = user2 ;
//			break ;
//		case 5 :
//			matrix [ 1 ] [ 1 ] = user2 ;
//			break ;
//		case 6 :
//			matrix [ 1 ] [ 2 ] = user2 ;
//			break ;
//		case 7 :
//			matrix [ 2 ] [ 0 ] = user2 ;
//			break ;
//		case 8 :
//			matrix [ 2 ] [ 1 ] = user2 ;
//			break ;
//		case 9 :
//			matrix [ 2 ] [ 2 ] = user2 ;
//			break ;
//		default :
//			break ;
//		}
//	}
//	y ++ ;
//}