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

#include <tencentcloud/mdp/v20200527/model/OutputStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

OutputStorage::OutputStorage() :
    m_typeHasBeenSet(false),
    m_cosOutputStorageHasBeenSet(false)
{
}

CoreInternalOutcome OutputStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosOutputStorage") && !value["CosOutputStorage"].IsNull())
    {
        if (!value["CosOutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputStorage.CosOutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosOutputStorage.Deserialize(value["CosOutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosOutputStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cosOutputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosOutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosOutputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OutputStorage::GetType() const
{
    return m_type;
}

void OutputStorage::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OutputStorage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CosOutputStorage OutputStorage::GetCosOutputStorage() const
{
    return m_cosOutputStorage;
}

void OutputStorage::SetCosOutputStorage(const CosOutputStorage& _cosOutputStorage)
{
    m_cosOutputStorage = _cosOutputStorage;
    m_cosOutputStorageHasBeenSet = true;
}

bool OutputStorage::CosOutputStorageHasBeenSet() const
{
    return m_cosOutputStorageHasBeenSet;
}

