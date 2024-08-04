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

#include <tencentcloud/mdl/v20200326/model/AmazonS3Settings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

AmazonS3Settings::AmazonS3Settings() :
    m_accessKeyIDHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileExtHasBeenSet(false),
    m_timeFormatHasBeenSet(false)
{
}

CoreInternalOutcome AmazonS3Settings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKeyID") && !value["AccessKeyID"].IsNull())
    {
        if (!value["AccessKeyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.AccessKeyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKeyID = string(value["AccessKeyID"].GetString());
        m_accessKeyIDHasBeenSet = true;
    }

    if (value.HasMember("SecretAccessKey") && !value["SecretAccessKey"].IsNull())
    {
        if (!value["SecretAccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.SecretAccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretAccessKey = string(value["SecretAccessKey"].GetString());
        m_secretAccessKeyHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileExt") && !value["FileExt"].IsNull())
    {
        if (!value["FileExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.FileExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExt = string(value["FileExt"].GetString());
        m_fileExtHasBeenSet = true;
    }

    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmazonS3Settings.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AmazonS3Settings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKeyID.c_str(), allocator).Move(), allocator);
    }

    if (m_secretAccessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretAccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretAccessKey.c_str(), allocator).Move(), allocator);
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

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExt.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

}


string AmazonS3Settings::GetAccessKeyID() const
{
    return m_accessKeyID;
}

void AmazonS3Settings::SetAccessKeyID(const string& _accessKeyID)
{
    m_accessKeyID = _accessKeyID;
    m_accessKeyIDHasBeenSet = true;
}

bool AmazonS3Settings::AccessKeyIDHasBeenSet() const
{
    return m_accessKeyIDHasBeenSet;
}

string AmazonS3Settings::GetSecretAccessKey() const
{
    return m_secretAccessKey;
}

void AmazonS3Settings::SetSecretAccessKey(const string& _secretAccessKey)
{
    m_secretAccessKey = _secretAccessKey;
    m_secretAccessKeyHasBeenSet = true;
}

bool AmazonS3Settings::SecretAccessKeyHasBeenSet() const
{
    return m_secretAccessKeyHasBeenSet;
}

string AmazonS3Settings::GetRegion() const
{
    return m_region;
}

void AmazonS3Settings::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AmazonS3Settings::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AmazonS3Settings::GetBucket() const
{
    return m_bucket;
}

void AmazonS3Settings::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool AmazonS3Settings::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string AmazonS3Settings::GetFilePath() const
{
    return m_filePath;
}

void AmazonS3Settings::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool AmazonS3Settings::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string AmazonS3Settings::GetFileName() const
{
    return m_fileName;
}

void AmazonS3Settings::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AmazonS3Settings::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AmazonS3Settings::GetFileExt() const
{
    return m_fileExt;
}

void AmazonS3Settings::SetFileExt(const string& _fileExt)
{
    m_fileExt = _fileExt;
    m_fileExtHasBeenSet = true;
}

bool AmazonS3Settings::FileExtHasBeenSet() const
{
    return m_fileExtHasBeenSet;
}

string AmazonS3Settings::GetTimeFormat() const
{
    return m_timeFormat;
}

void AmazonS3Settings::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool AmazonS3Settings::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

