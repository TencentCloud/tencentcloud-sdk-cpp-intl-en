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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateSyncProgress.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UpdateCertificateInstance response structure.
                */
                class UpdateCertificateInstanceResponse : public AbstractModel
                {
                public:
                    UpdateCertificateInstanceResponse();
                    ~UpdateCertificateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task id, DeployRecordId of 0 indicates that the task is in progress. repeatedly requesting this api, when DeployRecordId returned is greater than 0, it indicates that the task is created successfully. if not created successfully, an exception will be thrown.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeployRecordId Task id, DeployRecordId of 0 indicates that the task is in progress. repeatedly requesting this api, when DeployRecordId returned is greater than 0, it indicates that the task is created successfully. if not created successfully, an exception will be thrown.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDeployRecordId() const;

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取Status of the task; 1 indicates successful creation; 0 indicates that there is a task being updated currently, and no new update task has been created; the returned value DeployRecordId is the task id being updated.
                     * @return DeployStatus Status of the task; 1 indicates successful creation; 0 indicates that there is a task being updated currently, and no new update task has been created; the returned value DeployRecordId is the task id being updated.
                     * 
                     */
                    int64_t GetDeployStatus() const;

                    /**
                     * 判断参数 DeployStatus 是否已赋值
                     * @return DeployStatus 是否已赋值
                     * 
                     */
                    bool DeployStatusHasBeenSet() const;

                    /**
                     * 获取Task Progress Details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdateSyncProgress Task Progress Details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UpdateSyncProgress> GetUpdateSyncProgress() const;

                    /**
                     * 判断参数 UpdateSyncProgress 是否已赋值
                     * @return UpdateSyncProgress 是否已赋值
                     * 
                     */
                    bool UpdateSyncProgressHasBeenSet() const;

                private:

                    /**
                     * Task id, DeployRecordId of 0 indicates that the task is in progress. repeatedly requesting this api, when DeployRecordId returned is greater than 0, it indicates that the task is created successfully. if not created successfully, an exception will be thrown.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * Status of the task; 1 indicates successful creation; 0 indicates that there is a task being updated currently, and no new update task has been created; the returned value DeployRecordId is the task id being updated.
                     */
                    int64_t m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * Task Progress Details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UpdateSyncProgress> m_updateSyncProgress;
                    bool m_updateSyncProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCERESPONSE_H_
