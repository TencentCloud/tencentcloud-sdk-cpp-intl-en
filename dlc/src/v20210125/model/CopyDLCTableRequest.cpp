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

#include <tencentcloud/dlc/v20210125/model/CopyDLCTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CopyDLCTableRequest::CopyDLCTableRequest() :
    m_sourceDataHasBeenSet(false),
    m_destinationDatabaseNameHasBeenSet(false),
    m_destinationTableNameHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_isCreateTableHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false)
{
}

string CopyDLCTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceData.begin(); itr != m_sourceData.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_destinationDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_isCreateTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreateTable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreateTable, allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<DMSSourceDatabaseInfo> CopyDLCTableRequest::GetSourceData() const
{
    return m_sourceData;
}

void CopyDLCTableRequest::SetSourceData(const vector<DMSSourceDatabaseInfo>& _sourceData)
{
    m_sourceData = _sourceData;
    m_sourceDataHasBeenSet = true;
}

bool CopyDLCTableRequest::SourceDataHasBeenSet() const
{
    return m_sourceDataHasBeenSet;
}

string CopyDLCTableRequest::GetDestinationDatabaseName() const
{
    return m_destinationDatabaseName;
}

void CopyDLCTableRequest::SetDestinationDatabaseName(const string& _destinationDatabaseName)
{
    m_destinationDatabaseName = _destinationDatabaseName;
    m_destinationDatabaseNameHasBeenSet = true;
}

bool CopyDLCTableRequest::DestinationDatabaseNameHasBeenSet() const
{
    return m_destinationDatabaseNameHasBeenSet;
}

string CopyDLCTableRequest::GetDestinationTableName() const
{
    return m_destinationTableName;
}

void CopyDLCTableRequest::SetDestinationTableName(const string& _destinationTableName)
{
    m_destinationTableName = _destinationTableName;
    m_destinationTableNameHasBeenSet = true;
}

bool CopyDLCTableRequest::DestinationTableNameHasBeenSet() const
{
    return m_destinationTableNameHasBeenSet;
}

string CopyDLCTableRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void CopyDLCTableRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool CopyDLCTableRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

bool CopyDLCTableRequest::GetIsCreateTable() const
{
    return m_isCreateTable;
}

void CopyDLCTableRequest::SetIsCreateTable(const bool& _isCreateTable)
{
    m_isCreateTable = _isCreateTable;
    m_isCreateTableHasBeenSet = true;
}

bool CopyDLCTableRequest::IsCreateTableHasBeenSet() const
{
    return m_isCreateTableHasBeenSet;
}

string CopyDLCTableRequest::GetCatalog() const
{
    return m_catalog;
}

void CopyDLCTableRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool CopyDLCTableRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string CopyDLCTableRequest::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void CopyDLCTableRequest::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool CopyDLCTableRequest::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}


