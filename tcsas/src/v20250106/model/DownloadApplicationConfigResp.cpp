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

#include <tencentcloud/tcsas/v20250106/model/DownloadApplicationConfigResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DownloadApplicationConfigResp::DownloadApplicationConfigResp() :
    m_fileHasBeenSet(false)
{
}

CoreInternalOutcome DownloadApplicationConfigResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("File") && !value["File"].IsNull())
    {
        if (!value["File"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadApplicationConfigResp.File` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_file = string(value["File"].GetString());
        m_fileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DownloadApplicationConfigResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_file.c_str(), allocator).Move(), allocator);
    }

}


string DownloadApplicationConfigResp::GetFile() const
{
    return m_file;
}

void DownloadApplicationConfigResp::SetFile(const string& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool DownloadApplicationConfigResp::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

