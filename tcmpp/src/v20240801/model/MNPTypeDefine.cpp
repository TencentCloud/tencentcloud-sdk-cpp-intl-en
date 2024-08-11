/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tcmpp/v20240801/model/MNPTypeDefine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

MNPTypeDefine::MNPTypeDefine() :
    m_typeNameHasBeenSet(false),
    m_typeValueHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_isSystemHasBeenSet(false)
{
}

CoreInternalOutcome MNPTypeDefine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPTypeDefine.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("TypeValue") && !value["TypeValue"].IsNull())
    {
        if (!value["TypeValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MNPTypeDefine.TypeValue` is not array type"));

        const rapidjson::Value &tmpValue = value["TypeValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_typeValue.push_back((*itr).GetString());
        }
        m_typeValueHasBeenSet = true;
    }

    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPTypeDefine.TypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetInt64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPTypeDefine.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPTypeDefine.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("IsSystem") && !value["IsSystem"].IsNull())
    {
        if (!value["IsSystem"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MNPTypeDefine.IsSystem` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSystem = value["IsSystem"].GetBool();
        m_isSystemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MNPTypeDefine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeValue.begin(); itr != m_typeValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_isSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSystem, allocator);
    }

}


string MNPTypeDefine::GetTypeName() const
{
    return m_typeName;
}

void MNPTypeDefine::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool MNPTypeDefine::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

vector<string> MNPTypeDefine::GetTypeValue() const
{
    return m_typeValue;
}

void MNPTypeDefine::SetTypeValue(const vector<string>& _typeValue)
{
    m_typeValue = _typeValue;
    m_typeValueHasBeenSet = true;
}

bool MNPTypeDefine::TypeValueHasBeenSet() const
{
    return m_typeValueHasBeenSet;
}

int64_t MNPTypeDefine::GetTypeId() const
{
    return m_typeId;
}

void MNPTypeDefine::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool MNPTypeDefine::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

int64_t MNPTypeDefine::GetCreateTime() const
{
    return m_createTime;
}

void MNPTypeDefine::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MNPTypeDefine::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MNPTypeDefine::GetCreateUser() const
{
    return m_createUser;
}

void MNPTypeDefine::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool MNPTypeDefine::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

bool MNPTypeDefine::GetIsSystem() const
{
    return m_isSystem;
}

void MNPTypeDefine::SetIsSystem(const bool& _isSystem)
{
    m_isSystem = _isSystem;
    m_isSystemHasBeenSet = true;
}

bool MNPTypeDefine::IsSystemHasBeenSet() const
{
    return m_isSystemHasBeenSet;
}

