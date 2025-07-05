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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCERESPONSE_H_

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
                * UploadUpdateCertificateInstance response structure.
                */
                class UploadUpdateCertificateInstanceResponse : public AbstractModel
                {
                public:
                    UploadUpdateCertificateInstanceResponse();
                    ~UploadUpdateCertificateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The tencent cloud resource update task ID. DeployRecordId equals 0 indicates the task is in progress. Repeatedly request this API, and when DeployRecordId is greater than 0, it means the task has been successfully created. If not successfully created, an exception will be thrown.
                     * @return DeployRecordId The tencent cloud resource update task ID. DeployRecordId equals 0 indicates the task is in progress. Repeatedly request this API, and when DeployRecordId is greater than 0, it means the task has been successfully created. If not successfully created, an exception will be thrown.
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
                     * 获取Update task creation status: 1 indicates successful creation; 0 indicates an existing ongoing update task, and no new update task was created. The return value DeployRecordId represents the ID of the ongoing update task.
                     * @return DeployStatus Update task creation status: 1 indicates successful creation; 0 indicates an existing ongoing update task, and no new update task was created. The return value DeployRecordId represents the ID of the ongoing update task.
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
                     * 获取Create progress details for asynchronous update tasks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateSyncProgress Create progress details for asynchronous update tasks.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The tencent cloud resource update task ID. DeployRecordId equals 0 indicates the task is in progress. Repeatedly request this API, and when DeployRecordId is greater than 0, it means the task has been successfully created. If not successfully created, an exception will be thrown.
                     */
                    uint64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * Update task creation status: 1 indicates successful creation; 0 indicates an existing ongoing update task, and no new update task was created. The return value DeployRecordId represents the ID of the ongoing update task.
                     */
                    int64_t m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * Create progress details for asynchronous update tasks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UpdateSyncProgress> m_updateSyncProgress;
                    bool m_updateSyncProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCERESPONSE_H_
