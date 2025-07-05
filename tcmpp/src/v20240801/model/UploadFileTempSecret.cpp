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

#include <tencentcloud/tcmpp/v20240801/model/UploadFileTempSecret.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

UploadFileTempSecret::UploadFileTempSecret() :
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_tempSecretIdHasBeenSet(false),
    m_tempSecretKeyHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome UploadFileTempSecret::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFileTempSecret.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFileTempSecret.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFileTempSecret.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("TempSecretId") && !value["TempSecretId"].IsNull())
    {
        if (!value["TempSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFileTempSecret.TempSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempSecretId = string(value["TempSecretId"].GetString());
        m_tempSecretIdHasBeenSet = true;
    }

    if (value.HasMember("TempSecretKey") && !value["TempSecretKey"].IsNull())
    {
        if (!value["TempSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFileTempSecret.TempSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempSecretKey = string(value["TempSecretKey"].GetString());
        m_tempSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFileTempSecret.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadFileTempSecret::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_tempSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tempSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_tempSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tempSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


string UploadFileTempSecret::GetBucket() const
{
    return m_bucket;
}

void UploadFileTempSecret::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool UploadFileTempSecret::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string UploadFileTempSecret::GetRegion() const
{
    return m_region;
}

void UploadFileTempSecret::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool UploadFileTempSecret::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string UploadFileTempSecret::GetPath() const
{
    return m_path;
}

void UploadFileTempSecret::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool UploadFileTempSecret::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string UploadFileTempSecret::GetTempSecretId() const
{
    return m_tempSecretId;
}

void UploadFileTempSecret::SetTempSecretId(const string& _tempSecretId)
{
    m_tempSecretId = _tempSecretId;
    m_tempSecretIdHasBeenSet = true;
}

bool UploadFileTempSecret::TempSecretIdHasBeenSet() const
{
    return m_tempSecretIdHasBeenSet;
}

string UploadFileTempSecret::GetTempSecretKey() const
{
    return m_tempSecretKey;
}

void UploadFileTempSecret::SetTempSecretKey(const string& _tempSecretKey)
{
    m_tempSecretKey = _tempSecretKey;
    m_tempSecretKeyHasBeenSet = true;
}

bool UploadFileTempSecret::TempSecretKeyHasBeenSet() const
{
    return m_tempSecretKeyHasBeenSet;
}

string UploadFileTempSecret::GetToken() const
{
    return m_token;
}

void UploadFileTempSecret::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool UploadFileTempSecret::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

