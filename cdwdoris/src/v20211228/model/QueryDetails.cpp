/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cdwdoris/v20211228/model/QueryDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

QueryDetails::QueryDetails() :
    m_initiatorHasBeenSet(false),
    m_sourceAddressHasBeenSet(false),
    m_initialRequestIdHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_sQLTypeHasBeenSet(false),
    m_sQLStatementHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_rowsReadHasBeenSet(false),
    m_dataReadHasBeenSet(false),
    m_memoryUsageHasBeenSet(false)
{
}

CoreInternalOutcome QueryDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Initiator") && !value["Initiator"].IsNull())
    {
        if (!value["Initiator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.Initiator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initiator = string(value["Initiator"].GetString());
        m_initiatorHasBeenSet = true;
    }

    if (value.HasMember("SourceAddress") && !value["SourceAddress"].IsNull())
    {
        if (!value["SourceAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.SourceAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceAddress = string(value["SourceAddress"].GetString());
        m_sourceAddressHasBeenSet = true;
    }

    if (value.HasMember("InitialRequestId") && !value["InitialRequestId"].IsNull())
    {
        if (!value["InitialRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.InitialRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialRequestId = string(value["InitialRequestId"].GetString());
        m_initialRequestIdHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("SQLType") && !value["SQLType"].IsNull())
    {
        if (!value["SQLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.SQLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLType = string(value["SQLType"].GetString());
        m_sQLTypeHasBeenSet = true;
    }

    if (value.HasMember("SQLStatement") && !value["SQLStatement"].IsNull())
    {
        if (!value["SQLStatement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.SQLStatement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLStatement = string(value["SQLStatement"].GetString());
        m_sQLStatementHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RowsRead") && !value["RowsRead"].IsNull())
    {
        if (!value["RowsRead"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.RowsRead` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsRead = value["RowsRead"].GetUint64();
        m_rowsReadHasBeenSet = true;
    }

    if (value.HasMember("DataRead") && !value["DataRead"].IsNull())
    {
        if (!value["DataRead"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.DataRead` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_dataRead = value["DataRead"].GetDouble();
        m_dataReadHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsage") && !value["MemoryUsage"].IsNull())
    {
        if (!value["MemoryUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDetails.MemoryUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = value["MemoryUsage"].GetDouble();
        m_memoryUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_initiatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Initiator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initiator.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_initialRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initialRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLType.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLStatement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLStatement.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_rowsReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsRead, allocator);
    }

    if (m_dataReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRead, allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsage, allocator);
    }

}


string QueryDetails::GetInitiator() const
{
    return m_initiator;
}

void QueryDetails::SetInitiator(const string& _initiator)
{
    m_initiator = _initiator;
    m_initiatorHasBeenSet = true;
}

bool QueryDetails::InitiatorHasBeenSet() const
{
    return m_initiatorHasBeenSet;
}

string QueryDetails::GetSourceAddress() const
{
    return m_sourceAddress;
}

void QueryDetails::SetSourceAddress(const string& _sourceAddress)
{
    m_sourceAddress = _sourceAddress;
    m_sourceAddressHasBeenSet = true;
}

bool QueryDetails::SourceAddressHasBeenSet() const
{
    return m_sourceAddressHasBeenSet;
}

string QueryDetails::GetInitialRequestId() const
{
    return m_initialRequestId;
}

void QueryDetails::SetInitialRequestId(const string& _initialRequestId)
{
    m_initialRequestId = _initialRequestId;
    m_initialRequestIdHasBeenSet = true;
}

bool QueryDetails::InitialRequestIdHasBeenSet() const
{
    return m_initialRequestIdHasBeenSet;
}

string QueryDetails::GetCatalog() const
{
    return m_catalog;
}

void QueryDetails::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool QueryDetails::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string QueryDetails::GetDatabase() const
{
    return m_database;
}

void QueryDetails::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool QueryDetails::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string QueryDetails::GetSQLType() const
{
    return m_sQLType;
}

void QueryDetails::SetSQLType(const string& _sQLType)
{
    m_sQLType = _sQLType;
    m_sQLTypeHasBeenSet = true;
}

bool QueryDetails::SQLTypeHasBeenSet() const
{
    return m_sQLTypeHasBeenSet;
}

string QueryDetails::GetSQLStatement() const
{
    return m_sQLStatement;
}

void QueryDetails::SetSQLStatement(const string& _sQLStatement)
{
    m_sQLStatement = _sQLStatement;
    m_sQLStatementHasBeenSet = true;
}

bool QueryDetails::SQLStatementHasBeenSet() const
{
    return m_sQLStatementHasBeenSet;
}

string QueryDetails::GetStartTime() const
{
    return m_startTime;
}

void QueryDetails::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QueryDetails::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t QueryDetails::GetDuration() const
{
    return m_duration;
}

void QueryDetails::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool QueryDetails::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t QueryDetails::GetRowsRead() const
{
    return m_rowsRead;
}

void QueryDetails::SetRowsRead(const uint64_t& _rowsRead)
{
    m_rowsRead = _rowsRead;
    m_rowsReadHasBeenSet = true;
}

bool QueryDetails::RowsReadHasBeenSet() const
{
    return m_rowsReadHasBeenSet;
}

double QueryDetails::GetDataRead() const
{
    return m_dataRead;
}

void QueryDetails::SetDataRead(const double& _dataRead)
{
    m_dataRead = _dataRead;
    m_dataReadHasBeenSet = true;
}

bool QueryDetails::DataReadHasBeenSet() const
{
    return m_dataReadHasBeenSet;
}

double QueryDetails::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void QueryDetails::SetMemoryUsage(const double& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool QueryDetails::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

