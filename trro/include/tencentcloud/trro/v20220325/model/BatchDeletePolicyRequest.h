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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * BatchDeletePolicy request structure.
                */
                class BatchDeletePolicyRequest : public AbstractModel
                {
                public:
                    BatchDeletePolicyRequest();
                    ~BatchDeletePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id of the deleted permission configuration.
                     * @return ProjectId Project id of the deleted permission configuration.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id of the deleted permission configuration.
                     * @param _projectId Project id of the deleted permission configuration.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Remote device id list of the deleted permission configuration.
                     * @return RemoteDeviceIds Remote device id list of the deleted permission configuration.
                     * 
                     */
                    std::vector<std::string> GetRemoteDeviceIds() const;

                    /**
                     * 设置Remote device id list of the deleted permission configuration.
                     * @param _remoteDeviceIds Remote device id list of the deleted permission configuration.
                     * 
                     */
                    void SetRemoteDeviceIds(const std::vector<std::string>& _remoteDeviceIds);

                    /**
                     * 判断参数 RemoteDeviceIds 是否已赋值
                     * @return RemoteDeviceIds 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdsHasBeenSet() const;

                    /**
                     * 获取Permission mode of the deleted permission configuration, black for blocklist, white for allowlist.
                     * @return PolicyMode Permission mode of the deleted permission configuration, black for blocklist, white for allowlist.
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置Permission mode of the deleted permission configuration, black for blocklist, white for allowlist.
                     * @param _policyMode Permission mode of the deleted permission configuration, black for blocklist, white for allowlist.
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                private:

                    /**
                     * Project id of the deleted permission configuration.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Remote device id list of the deleted permission configuration.
                     */
                    std::vector<std::string> m_remoteDeviceIds;
                    bool m_remoteDeviceIdsHasBeenSet;

                    /**
                     * Permission mode of the deleted permission configuration, black for blocklist, white for allowlist.
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEPOLICYREQUEST_H_
