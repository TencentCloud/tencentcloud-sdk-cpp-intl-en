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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBBACKUPSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBBACKUPSREQUEST_H_

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
                * DescribeDBBackups request structure.
                */
                class DescribeDBBackupsRequest : public AbstractModel
                {
                public:
                    DescribeDBBackupsRequest();
                    ~DescribeDBBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * @return InstanceId Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     * @param _instanceId Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
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
                     * 获取Backup mode. Valid values: `0` (logical backup), `1` (physical backup), `2` (both modes). Default value: `0`.
                     * @return BackupMethod Backup mode. Valid values: `0` (logical backup), `1` (physical backup), `2` (both modes). Default value: `0`.
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置Backup mode. Valid values: `0` (logical backup), `1` (physical backup), `2` (both modes). Default value: `0`.
                     * @param _backupMethod Backup mode. Valid values: `0` (logical backup), `1` (physical backup), `2` (both modes). Default value: `0`.
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Maximum value: `100`. If this parameter is left empty, all entries will be returned.
                     * @return Limit Number of entries per page. Maximum value: `100`. If this parameter is left empty, all entries will be returned.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Maximum value: `100`. If this parameter is left empty, all entries will be returned.
                     * @param _limit Number of entries per page. Maximum value: `100`. If this parameter is left empty, all entries will be returned.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset, starting from `0`. Default value: `0`.
                     * @return Offset Pagination offset, starting from `0`. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from `0`. Default value: `0`.
                     * @param _offset Pagination offset, starting from `0`. Default value: `0`.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cmgo-p8vnipr5. It is the same as the instance ID displayed on the TencentDB Console page
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup mode. Valid values: `0` (logical backup), `1` (physical backup), `2` (both modes). Default value: `0`.
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Number of entries per page. Maximum value: `100`. If this parameter is left empty, all entries will be returned.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset, starting from `0`. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBBACKUPSREQUEST_H_
