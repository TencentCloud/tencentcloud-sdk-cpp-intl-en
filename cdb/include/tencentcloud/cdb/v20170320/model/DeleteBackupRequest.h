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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DELETEBACKUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DELETEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DeleteBackup request structure.
                */
                class DeleteBackupRequest : public AbstractModel
                {
                public:
                    DeleteBackupRequest();
                    ~DeleteBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
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
                     * 获取Backup task ID. Confirm it by querying the data backup file list (https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) to get the target backup task ID.
                     * @return BackupId Backup task ID. Confirm it by querying the data backup file list (https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) to get the target backup task ID.
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup task ID. Confirm it by querying the data backup file list (https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) to get the target backup task ID.
                     * @param _backupId Backup task ID. Confirm it by querying the data backup file list (https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) to get the target backup task ID.
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup task ID. Confirm it by querying the data backup file list (https://www.tencentcloud.com/document/api/236/15842?from_cn_redirect=1) to get the target backup task ID.
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DELETEBACKUPREQUEST_H_
