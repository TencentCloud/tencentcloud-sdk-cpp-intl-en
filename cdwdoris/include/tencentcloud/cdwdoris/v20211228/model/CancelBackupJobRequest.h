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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CANCELBACKUPJOBREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CANCELBACKUPJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * CancelBackupJob request structure.
                */
                class CancelBackupJobRequest : public AbstractModel
                {
                public:
                    CancelBackupJobRequest();
                    ~CancelBackupJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
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
                     * 获取Backup instance ID to be canceled
                     * @return BackUpJobId Backup instance ID to be canceled
                     * 
                     */
                    int64_t GetBackUpJobId() const;

                    /**
                     * 设置Backup instance ID to be canceled
                     * @param _backUpJobId Backup instance ID to be canceled
                     * 
                     */
                    void SetBackUpJobId(const int64_t& _backUpJobId);

                    /**
                     * 判断参数 BackUpJobId 是否已赋值
                     * @return BackUpJobId 是否已赋值
                     * 
                     */
                    bool BackUpJobIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup instance ID to be canceled
                     */
                    int64_t m_backUpJobId;
                    bool m_backUpJobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CANCELBACKUPJOBREQUEST_H_
