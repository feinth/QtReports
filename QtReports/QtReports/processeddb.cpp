#include "processeddb.hpp"

namespace qtreports {
	namespace detail {

		ProcessedDB::ProcessedDB() {}

		ProcessedDB::~ProcessedDB() {}

		QVariant ProcessedDB::getParam( const QString & name ) const {
			Q_UNUSED( name );
			return QVariant();
		}

		QVariant ProcessedDB::getField( const QString & queryName, const QString & columnName, int row ) const {
			Q_UNUSED( queryName );
			Q_UNUSED( columnName );
			Q_UNUSED( row );
			return QVariant();
		}

		QVariant ProcessedDB::getField( const QString & queryName, int column, int row ) const {
			Q_UNUSED( queryName );
			Q_UNUSED( column );
			Q_UNUSED( row );
			return QVariant();
		}

	}
}

