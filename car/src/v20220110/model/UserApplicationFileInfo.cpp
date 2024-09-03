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

#include <tencentcloud/car/v20220110/model/UserApplicationFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UserApplicationFileInfo::UserApplicationFileInfo() :
    m_filePathHasBeenSet(false),
    m_fileStateHasBeenSet(false)
{
}

CoreInternalOutcome UserApplicationFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationFileInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileState") && !value["FileState"].IsNull())
    {
        if (!value["FileState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserApplicationFileInfo.FileState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileState = string(value["FileState"].GetString());
        m_fileStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserApplicationFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileState.c_str(), allocator).Move(), allocator);
    }

}


string UserApplicationFileInfo::GetFilePath() const
{
    return m_filePath;
}

void UserApplicationFileInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool UserApplicationFileInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string UserApplicationFileInfo::GetFileState() const
{
    return m_fileState;
}

void UserApplicationFileInfo::SetFileState(const string& _fileState)
{
    m_fileState = _fileState;
    m_fileStateHasBeenSet = true;
}

bool UserApplicationFileInfo::FileStateHasBeenSet() const
{
    return m_fileStateHasBeenSet;
}

