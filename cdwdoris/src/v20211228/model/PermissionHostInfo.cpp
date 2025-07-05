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

#include <tencentcloud/cdwdoris/v20211228/model/PermissionHostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

PermissionHostInfo::PermissionHostInfo() :
    m_globalPermissionsHasBeenSet(false),
    m_databasePermissionsHasBeenSet(false),
    m_tablePermissionsHasBeenSet(false),
    m_catalogPermissionsHasBeenSet(false)
{
}

CoreInternalOutcome PermissionHostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalPermissions") && !value["GlobalPermissions"].IsNull())
    {
        if (!value["GlobalPermissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionHostInfo.GlobalPermissions` is not array type"));

        const rapidjson::Value &tmpValue = value["GlobalPermissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_globalPermissions.push_back((*itr).GetString());
        }
        m_globalPermissionsHasBeenSet = true;
    }

    if (value.HasMember("DatabasePermissions") && !value["DatabasePermissions"].IsNull())
    {
        if (!value["DatabasePermissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionHostInfo.DatabasePermissions` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabasePermissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabasePermissions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databasePermissions.push_back(item);
        }
        m_databasePermissionsHasBeenSet = true;
    }

    if (value.HasMember("TablePermissions") && !value["TablePermissions"].IsNull())
    {
        if (!value["TablePermissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionHostInfo.TablePermissions` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePermissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TablePermissions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablePermissions.push_back(item);
        }
        m_tablePermissionsHasBeenSet = true;
    }

    if (value.HasMember("CatalogPermissions") && !value["CatalogPermissions"].IsNull())
    {
        if (!value["CatalogPermissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionHostInfo.CatalogPermissions` is not array type"));

        const rapidjson::Value &tmpValue = value["CatalogPermissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CatalogPermission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_catalogPermissions.push_back(item);
        }
        m_catalogPermissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionHostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalPermissions.begin(); itr != m_globalPermissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databasePermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databasePermissions.begin(); itr != m_databasePermissions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tablePermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePermissions.begin(); itr != m_tablePermissions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_catalogPermissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogPermissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_catalogPermissions.begin(); itr != m_catalogPermissions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> PermissionHostInfo::GetGlobalPermissions() const
{
    return m_globalPermissions;
}

void PermissionHostInfo::SetGlobalPermissions(const vector<string>& _globalPermissions)
{
    m_globalPermissions = _globalPermissions;
    m_globalPermissionsHasBeenSet = true;
}

bool PermissionHostInfo::GlobalPermissionsHasBeenSet() const
{
    return m_globalPermissionsHasBeenSet;
}

vector<DatabasePermissions> PermissionHostInfo::GetDatabasePermissions() const
{
    return m_databasePermissions;
}

void PermissionHostInfo::SetDatabasePermissions(const vector<DatabasePermissions>& _databasePermissions)
{
    m_databasePermissions = _databasePermissions;
    m_databasePermissionsHasBeenSet = true;
}

bool PermissionHostInfo::DatabasePermissionsHasBeenSet() const
{
    return m_databasePermissionsHasBeenSet;
}

vector<TablePermissions> PermissionHostInfo::GetTablePermissions() const
{
    return m_tablePermissions;
}

void PermissionHostInfo::SetTablePermissions(const vector<TablePermissions>& _tablePermissions)
{
    m_tablePermissions = _tablePermissions;
    m_tablePermissionsHasBeenSet = true;
}

bool PermissionHostInfo::TablePermissionsHasBeenSet() const
{
    return m_tablePermissionsHasBeenSet;
}

vector<CatalogPermission> PermissionHostInfo::GetCatalogPermissions() const
{
    return m_catalogPermissions;
}

void PermissionHostInfo::SetCatalogPermissions(const vector<CatalogPermission>& _catalogPermissions)
{
    m_catalogPermissions = _catalogPermissions;
    m_catalogPermissionsHasBeenSet = true;
}

bool PermissionHostInfo::CatalogPermissionsHasBeenSet() const
{
    return m_catalogPermissionsHasBeenSet;
}

