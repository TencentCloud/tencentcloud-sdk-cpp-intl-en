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

#include <tencentcloud/car/v20220110/model/UserApplicationStore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UserApplicationStore::UserApplicationStore() :
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_storeTypeHasBeenSet(false),
    m_storeStateHasBeenSet(false),
    m_storePathHasBeenSet(false)
{
}

CoreInternalOutcome UserApplicationStore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStore.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStore.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("StoreType") && !value["StoreType"].IsNull())
    {
        if (!value["StoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStore.StoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeType = string(value["StoreType"].GetString());
        m_storeTypeHasBeenSet = true;
    }

    if (value.HasMember("StoreState") && !value["StoreState"].IsNull())
    {
        if (!value["StoreState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStore.StoreState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeState = string(value["StoreState"].GetString());
        m_storeStateHasBeenSet = true;
    }

    if (value.HasMember("StorePath") && !value["StorePath"].IsNull())
    {
        if (!value["StorePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationStore.StorePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storePath = string(value["StorePath"].GetString());
        m_storePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserApplicationStore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_storeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeType.c_str(), allocator).Move(), allocator);
    }

    if (m_storeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeState.c_str(), allocator).Move(), allocator);
    }

    if (m_storePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storePath.c_str(), allocator).Move(), allocator);
    }

}


string UserApplicationStore::GetCosBucket() const
{
    return m_cosBucket;
}

void UserApplicationStore::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool UserApplicationStore::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string UserApplicationStore::GetCosRegion() const
{
    return m_cosRegion;
}

void UserApplicationStore::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool UserApplicationStore::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string UserApplicationStore::GetStoreType() const
{
    return m_storeType;
}

void UserApplicationStore::SetStoreType(const string& _storeType)
{
    m_storeType = _storeType;
    m_storeTypeHasBeenSet = true;
}

bool UserApplicationStore::StoreTypeHasBeenSet() const
{
    return m_storeTypeHasBeenSet;
}

string UserApplicationStore::GetStoreState() const
{
    return m_storeState;
}

void UserApplicationStore::SetStoreState(const string& _storeState)
{
    m_storeState = _storeState;
    m_storeStateHasBeenSet = true;
}

bool UserApplicationStore::StoreStateHasBeenSet() const
{
    return m_storeStateHasBeenSet;
}

string UserApplicationStore::GetStorePath() const
{
    return m_storePath;
}

void UserApplicationStore::SetStorePath(const string& _storePath)
{
    m_storePath = _storePath;
    m_storePathHasBeenSet = true;
}

bool UserApplicationStore::StorePathHasBeenSet() const
{
    return m_storePathHasBeenSet;
}

