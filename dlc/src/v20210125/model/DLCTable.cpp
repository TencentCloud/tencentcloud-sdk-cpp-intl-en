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

#include <tencentcloud/dlc/v20210125/model/DLCTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DLCTable::DLCTable() :
    m_tableBaseInfoHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_inputFormatHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_mapMaterializedViewNameHasBeenSet(false),
    m_heatValueHasBeenSet(false),
    m_externalDataConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome DLCTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableBaseInfo") && !value["TableBaseInfo"].IsNull())
    {
        if (!value["TableBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.TableBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableBaseInfo.Deserialize(value["TableBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DLCTable.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DLCTable.Partitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TPartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitions.push_back(item);
        }
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DLCTable.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InputFormat") && !value["InputFormat"].IsNull())
    {
        if (!value["InputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.InputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputFormat = string(value["InputFormat"].GetString());
        m_inputFormatHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("MapMaterializedViewName") && !value["MapMaterializedViewName"].IsNull())
    {
        if (!value["MapMaterializedViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.MapMaterializedViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mapMaterializedViewName = string(value["MapMaterializedViewName"].GetString());
        m_mapMaterializedViewNameHasBeenSet = true;
    }

    if (value.HasMember("HeatValue") && !value["HeatValue"].IsNull())
    {
        if (!value["HeatValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.HeatValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heatValue = value["HeatValue"].GetInt64();
        m_heatValueHasBeenSet = true;
    }

    if (value.HasMember("ExternalDataConfiguration") && !value["ExternalDataConfiguration"].IsNull())
    {
        if (!value["ExternalDataConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DLCTable.ExternalDataConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalDataConfiguration.Deserialize(value["ExternalDataConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalDataConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DLCTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_mapMaterializedViewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapMaterializedViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mapMaterializedViewName.c_str(), allocator).Move(), allocator);
    }

    if (m_heatValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeatValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heatValue, allocator);
    }

    if (m_externalDataConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalDataConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalDataConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


TableBaseInfo DLCTable::GetTableBaseInfo() const
{
    return m_tableBaseInfo;
}

void DLCTable::SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo)
{
    m_tableBaseInfo = _tableBaseInfo;
    m_tableBaseInfoHasBeenSet = true;
}

bool DLCTable::TableBaseInfoHasBeenSet() const
{
    return m_tableBaseInfoHasBeenSet;
}

vector<TColumn> DLCTable::GetColumns() const
{
    return m_columns;
}

void DLCTable::SetColumns(const vector<TColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool DLCTable::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<TPartition> DLCTable::GetPartitions() const
{
    return m_partitions;
}

void DLCTable::SetPartitions(const vector<TPartition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool DLCTable::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string DLCTable::GetLocation() const
{
    return m_location;
}

void DLCTable::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DLCTable::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<Property> DLCTable::GetProperties() const
{
    return m_properties;
}

void DLCTable::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool DLCTable::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string DLCTable::GetModifiedTime() const
{
    return m_modifiedTime;
}

void DLCTable::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool DLCTable::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string DLCTable::GetCreateTime() const
{
    return m_createTime;
}

void DLCTable::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DLCTable::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DLCTable::GetInputFormat() const
{
    return m_inputFormat;
}

void DLCTable::SetInputFormat(const string& _inputFormat)
{
    m_inputFormat = _inputFormat;
    m_inputFormatHasBeenSet = true;
}

bool DLCTable::InputFormatHasBeenSet() const
{
    return m_inputFormatHasBeenSet;
}

int64_t DLCTable::GetStorageSize() const
{
    return m_storageSize;
}

void DLCTable::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool DLCTable::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t DLCTable::GetRecordCount() const
{
    return m_recordCount;
}

void DLCTable::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool DLCTable::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string DLCTable::GetMapMaterializedViewName() const
{
    return m_mapMaterializedViewName;
}

void DLCTable::SetMapMaterializedViewName(const string& _mapMaterializedViewName)
{
    m_mapMaterializedViewName = _mapMaterializedViewName;
    m_mapMaterializedViewNameHasBeenSet = true;
}

bool DLCTable::MapMaterializedViewNameHasBeenSet() const
{
    return m_mapMaterializedViewNameHasBeenSet;
}

int64_t DLCTable::GetHeatValue() const
{
    return m_heatValue;
}

void DLCTable::SetHeatValue(const int64_t& _heatValue)
{
    m_heatValue = _heatValue;
    m_heatValueHasBeenSet = true;
}

bool DLCTable::HeatValueHasBeenSet() const
{
    return m_heatValueHasBeenSet;
}

ExternalDataConfiguration DLCTable::GetExternalDataConfiguration() const
{
    return m_externalDataConfiguration;
}

void DLCTable::SetExternalDataConfiguration(const ExternalDataConfiguration& _externalDataConfiguration)
{
    m_externalDataConfiguration = _externalDataConfiguration;
    m_externalDataConfigurationHasBeenSet = true;
}

bool DLCTable::ExternalDataConfigurationHasBeenSet() const
{
    return m_externalDataConfigurationHasBeenSet;
}

