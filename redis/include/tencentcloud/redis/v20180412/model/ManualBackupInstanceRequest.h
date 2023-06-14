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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_

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
                * ManualBackupInstance request structure.
                */
                class ManualBackupInstanceRequest : public AbstractModel
                {
                public:
                    ManualBackupInstanceRequest();
                    ~ManualBackupInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     * @return InstanceId ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     * @param _instanceId ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
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
                     * 获取Backup remarks
                     * @return Remark Backup remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Backup remarks
                     * @param _remark Backup remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Retention time in days. 0 indicates the default retention time.
                     * @return StorageDays Retention time in days. 0 indicates the default retention time.
                     * 
                     */
                    int64_t GetStorageDays() const;

                    /**
                     * 设置Retention time in days. 0 indicates the default retention time.
                     * @param _storageDays Retention time in days. 0 indicates the default retention time.
                     * 
                     */
                    void SetStorageDays(const int64_t& _storageDays);

                    /**
                     * 判断参数 StorageDays 是否已赋值
                     * @return StorageDays 是否已赋值
                     * 
                     */
                    bool StorageDaysHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be operated on, which can be obtained through the `InstanceId` field in the return value of the `DescribeInstance` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Retention time in days. 0 indicates the default retention time.
                     */
                    int64_t m_storageDays;
                    bool m_storageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MANUALBACKUPINSTANCEREQUEST_H_
