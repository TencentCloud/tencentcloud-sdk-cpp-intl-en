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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEBACKUPMODEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEBACKUPMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceBackupMode request structure.
                */
                class ModifyInstanceBackupModeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceBackupModeRequest();
                    ~ModifyInstanceBackupModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can contain 12 to 36 characters.
                     * @return InstanceId Instance ID, which can contain 12 to 36 characters.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can contain 12 to 36 characters.
                     * @param _instanceId Instance ID, which can contain 12 to 36 characters.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup mode:
 - SecondLevelBackup: second-level backup.
 - NormalLevelBackup: ordinary backup.
                     * @return BackupMode Backup mode:
 - SecondLevelBackup: second-level backup.
 - NormalLevelBackup: ordinary backup.
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置Backup mode:
 - SecondLevelBackup: second-level backup.
 - NormalLevelBackup: ordinary backup.
                     * @param _backupMode Backup mode:
 - SecondLevelBackup: second-level backup.
 - NormalLevelBackup: ordinary backup.
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can contain 12 to 36 characters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup mode:
 - SecondLevelBackup: second-level backup.
 - NormalLevelBackup: ordinary backup.
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEBACKUPMODEREQUEST_H_
