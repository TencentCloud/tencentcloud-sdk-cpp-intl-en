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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESECONDLEVELBACKUPINFOREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESECONDLEVELBACKUPINFOREQUEST_H_

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
                * DescribeSecondLevelBackupInfo request structure.
                */
                class DescribeSecondLevelBackupInfoRequest : public AbstractModel
                {
                public:
                    DescribeSecondLevelBackupInfoRequest();
                    ~DescribeSecondLevelBackupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. For example, crs-xjhsdj****. Log in to the TencentDB for Redis® console and copy the instance ID from the instance list.
                     * @return InstanceId Specifies the instance ID. For example, crs-xjhsdj****. Log in to the TencentDB for Redis® console and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. For example, crs-xjhsdj****. Log in to the TencentDB for Redis® console and copy the instance ID from the instance list.
                     * @param _instanceId Specifies the instance ID. For example, crs-xjhsdj****. Log in to the TencentDB for Redis® console and copy the instance ID from the instance list.
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
                     * 获取Second-level backup timestamp. The corresponding time should be within the last 7 days.
                     * @return BackupTimestamp Second-level backup timestamp. The corresponding time should be within the last 7 days.
                     * 
                     */
                    int64_t GetBackupTimestamp() const;

                    /**
                     * 设置Second-level backup timestamp. The corresponding time should be within the last 7 days.
                     * @param _backupTimestamp Second-level backup timestamp. The corresponding time should be within the last 7 days.
                     * 
                     */
                    void SetBackupTimestamp(const int64_t& _backupTimestamp);

                    /**
                     * 判断参数 BackupTimestamp 是否已赋值
                     * @return BackupTimestamp 是否已赋值
                     * 
                     */
                    bool BackupTimestampHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID. For example, crs-xjhsdj****. Log in to the TencentDB for Redis® console and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Second-level backup timestamp. The corresponding time should be within the last 7 days.
                     */
                    int64_t m_backupTimestamp;
                    bool m_backupTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESECONDLEVELBACKUPINFOREQUEST_H_
