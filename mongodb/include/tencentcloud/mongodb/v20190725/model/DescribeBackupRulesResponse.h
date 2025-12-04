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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeBackupRules response structure.
                */
                class DescribeBackupRulesResponse : public AbstractModel
                {
                public:
                    DescribeBackupRulesResponse();
                    ~DescribeBackupRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Retention period for backup data, in days.
                     * @return BackupSaveTime Retention period for backup data, in days.
                     * 
                     */
                    uint64_t GetBackupSaveTime() const;

                    /**
                     * 判断参数 BackupSaveTime 是否已赋值
                     * @return BackupSaveTime 是否已赋值
                     * 
                     */
                    bool BackupSaveTimeHasBeenSet() const;

                    /**
                     * 获取Automatic backup start time.
                     * @return BackupTime Automatic backup start time.
                     * 
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Backup method.
- 0: logical backup.
- 1: physical backup.
                     * @return BackupMethod Backup method.
- 0: logical backup.
- 1: physical backup.
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                private:

                    /**
                     * Retention period for backup data, in days.
                     */
                    uint64_t m_backupSaveTime;
                    bool m_backupSaveTimeHasBeenSet;

                    /**
                     * Automatic backup start time.
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Backup method.
- 0: logical backup.
- 1: physical backup.
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_
