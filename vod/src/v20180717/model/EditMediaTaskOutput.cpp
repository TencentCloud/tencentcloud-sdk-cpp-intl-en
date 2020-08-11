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

#include <tencentcloud/vod/v20180717/model/EditMediaTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

EditMediaTaskOutput::EditMediaTaskOutput() :
    m_fileTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaTaskOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaTaskOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string EditMediaTaskOutput::GetFileType() const
{
    return m_fileType;
}

void EditMediaTaskOutput::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool EditMediaTaskOutput::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string EditMediaTaskOutput::GetFileUrl() const
{
    return m_fileUrl;
}

void EditMediaTaskOutput::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool EditMediaTaskOutput::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string EditMediaTaskOutput::GetFileId() const
{
    return m_fileId;
}

void EditMediaTaskOutput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool EditMediaTaskOutput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string EditMediaTaskOutput::GetMediaName() const
{
    return m_mediaName;
}

void EditMediaTaskOutput::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool EditMediaTaskOutput::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

int64_t EditMediaTaskOutput::GetClassId() const
{
    return m_classId;
}

void EditMediaTaskOutput::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool EditMediaTaskOutput::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string EditMediaTaskOutput::GetExpireTime() const
{
    return m_expireTime;
}

void EditMediaTaskOutput::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool EditMediaTaskOutput::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}
