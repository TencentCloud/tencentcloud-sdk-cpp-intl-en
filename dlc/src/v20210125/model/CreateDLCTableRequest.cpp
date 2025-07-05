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

#include <tencentcloud/dlc/v20210125/model/CreateDLCTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateDLCTableRequest::CreateDLCTableRequest() :
    m_tableBaseInfoHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_externalDataConfigurationHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_resourceGroupnameHasBeenSet(false)
{
}

string CreateDLCTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_externalDataConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalDataConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalDataConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupname.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


TableBaseInfo CreateDLCTableRequest::GetTableBaseInfo() const
{
    return m_tableBaseInfo;
}

void CreateDLCTableRequest::SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo)
{
    m_tableBaseInfo = _tableBaseInfo;
    m_tableBaseInfoHasBeenSet = true;
}

bool CreateDLCTableRequest::TableBaseInfoHasBeenSet() const
{
    return m_tableBaseInfoHasBeenSet;
}

string CreateDLCTableRequest::GetTableType() const
{
    return m_tableType;
}

void CreateDLCTableRequest::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool CreateDLCTableRequest::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

vector<TColumn> CreateDLCTableRequest::GetColumns() const
{
    return m_columns;
}

void CreateDLCTableRequest::SetColumns(const vector<TColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool CreateDLCTableRequest::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<TPartition> CreateDLCTableRequest::GetPartitions() const
{
    return m_partitions;
}

void CreateDLCTableRequest::SetPartitions(const vector<TPartition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool CreateDLCTableRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

vector<Property> CreateDLCTableRequest::GetProperties() const
{
    return m_properties;
}

void CreateDLCTableRequest::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool CreateDLCTableRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

ExternalDataConfiguration CreateDLCTableRequest::GetExternalDataConfiguration() const
{
    return m_externalDataConfiguration;
}

void CreateDLCTableRequest::SetExternalDataConfiguration(const ExternalDataConfiguration& _externalDataConfiguration)
{
    m_externalDataConfiguration = _externalDataConfiguration;
    m_externalDataConfigurationHasBeenSet = true;
}

bool CreateDLCTableRequest::ExternalDataConfigurationHasBeenSet() const
{
    return m_externalDataConfigurationHasBeenSet;
}

string CreateDLCTableRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CreateDLCTableRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CreateDLCTableRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string CreateDLCTableRequest::GetResourceGroupname() const
{
    return m_resourceGroupname;
}

void CreateDLCTableRequest::SetResourceGroupname(const string& _resourceGroupname)
{
    m_resourceGroupname = _resourceGroupname;
    m_resourceGroupnameHasBeenSet = true;
}

bool CreateDLCTableRequest::ResourceGroupnameHasBeenSet() const
{
    return m_resourceGroupnameHasBeenSet;
}


