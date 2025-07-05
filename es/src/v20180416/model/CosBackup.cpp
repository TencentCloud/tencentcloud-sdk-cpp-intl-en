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

#include <tencentcloud/es/v20180416/model/CosBackup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CosBackup::CosBackup() :
    m_isAutoBackupHasBeenSet(false),
    m_backupTimeHasBeenSet(false)
{
}

CoreInternalOutcome CosBackup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsAutoBackup") && !value["IsAutoBackup"].IsNull())
    {
        if (!value["IsAutoBackup"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.IsAutoBackup` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoBackup = value["IsAutoBackup"].GetBool();
        m_isAutoBackupHasBeenSet = true;
    }

    if (value.HasMember("BackupTime") && !value["BackupTime"].IsNull())
    {
        if (!value["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosBackup.BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(value["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosBackup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isAutoBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoBackup, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

}


bool CosBackup::GetIsAutoBackup() const
{
    return m_isAutoBackup;
}

void CosBackup::SetIsAutoBackup(const bool& _isAutoBackup)
{
    m_isAutoBackup = _isAutoBackup;
    m_isAutoBackupHasBeenSet = true;
}

bool CosBackup::IsAutoBackupHasBeenSet() const
{
    return m_isAutoBackupHasBeenSet;
}

string CosBackup::GetBackupTime() const
{
    return m_backupTime;
}

void CosBackup::SetBackupTime(const string& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool CosBackup::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

