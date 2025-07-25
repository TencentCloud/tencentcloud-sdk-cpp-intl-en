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

#include <tencentcloud/vod/v20180717/model/AwsPrivateAccess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AwsPrivateAccess::AwsPrivateAccess() :
    m_switchHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false)
{
}

CoreInternalOutcome AwsPrivateAccess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsPrivateAccess.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsPrivateAccess.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsPrivateAccess.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsPrivateAccess.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AwsPrivateAccess.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AwsPrivateAccess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

}


string AwsPrivateAccess::GetSwitch() const
{
    return m_switch;
}

void AwsPrivateAccess::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AwsPrivateAccess::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AwsPrivateAccess::GetAccessKey() const
{
    return m_accessKey;
}

void AwsPrivateAccess::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool AwsPrivateAccess::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string AwsPrivateAccess::GetSecretKey() const
{
    return m_secretKey;
}

void AwsPrivateAccess::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool AwsPrivateAccess::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string AwsPrivateAccess::GetRegion() const
{
    return m_region;
}

void AwsPrivateAccess::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AwsPrivateAccess::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AwsPrivateAccess::GetBucket() const
{
    return m_bucket;
}

void AwsPrivateAccess::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool AwsPrivateAccess::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

