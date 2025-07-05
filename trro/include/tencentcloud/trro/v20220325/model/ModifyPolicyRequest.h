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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYREQUEST_H_

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
                * ModifyPolicy request structure.
                */
                class ModifyPolicyRequest : public AbstractModel
                {
                public:
                    ModifyPolicyRequest();
                    ~ModifyPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id for modifying permission configuration.
                     * @return ProjectId Project id for modifying permission configuration.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id for modifying permission configuration.
                     * @param _projectId Project id for modifying permission configuration.
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
                     * 获取Remote device id for modifying permission configuration.
                     * @return RemoteDeviceId Remote device id for modifying permission configuration.
                     * 
                     */
                    std::string GetRemoteDeviceId() const;

                    /**
                     * 设置Remote device id for modifying permission configuration.
                     * @param _remoteDeviceId Remote device id for modifying permission configuration.
                     * 
                     */
                    void SetRemoteDeviceId(const std::string& _remoteDeviceId);

                    /**
                     * 判断参数 RemoteDeviceId 是否已赋值
                     * @return RemoteDeviceId 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdHasBeenSet() const;

                    /**
                     * 获取Array of on-site device ids involved in permission modification.
                     * @return FieldDeviceIds Array of on-site device ids involved in permission modification.
                     * 
                     */
                    std::vector<std::string> GetFieldDeviceIds() const;

                    /**
                     * 设置Array of on-site device ids involved in permission modification.
                     * @param _fieldDeviceIds Array of on-site device ids involved in permission modification.
                     * 
                     */
                    void SetFieldDeviceIds(const std::vector<std::string>& _fieldDeviceIds);

                    /**
                     * 判断参数 FieldDeviceIds 是否已赋值
                     * @return FieldDeviceIds 是否已赋值
                     * 
                     */
                    bool FieldDeviceIdsHasBeenSet() const;

                    /**
                     * 获取The target permission mode to modify, black for blocklist, white for allowlist.
                     * @return PolicyMode The target permission mode to modify, black for blocklist, white for allowlist.
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置The target permission mode to modify, black for blocklist, white for allowlist.
                     * @param _policyMode The target permission mode to modify, black for blocklist, white for allowlist.
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                    /**
                     * 获取Modification mode, add for adding (associating on-site devices), remove for deletion (dissociating on-site devices), set for setting (updating on-site device association).
                     * @return ModifyMode Modification mode, add for adding (associating on-site devices), remove for deletion (dissociating on-site devices), set for setting (updating on-site device association).
                     * 
                     */
                    std::string GetModifyMode() const;

                    /**
                     * 设置Modification mode, add for adding (associating on-site devices), remove for deletion (dissociating on-site devices), set for setting (updating on-site device association).
                     * @param _modifyMode Modification mode, add for adding (associating on-site devices), remove for deletion (dissociating on-site devices), set for setting (updating on-site device association).
                     * 
                     */
                    void SetModifyMode(const std::string& _modifyMode);

                    /**
                     * 判断参数 ModifyMode 是否已赋值
                     * @return ModifyMode 是否已赋值
                     * 
                     */
                    bool ModifyModeHasBeenSet() const;

                private:

                    /**
                     * Project id for modifying permission configuration.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Remote device id for modifying permission configuration.
                     */
                    std::string m_remoteDeviceId;
                    bool m_remoteDeviceIdHasBeenSet;

                    /**
                     * Array of on-site device ids involved in permission modification.
                     */
                    std::vector<std::string> m_fieldDeviceIds;
                    bool m_fieldDeviceIdsHasBeenSet;

                    /**
                     * The target permission mode to modify, black for blocklist, white for allowlist.
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                    /**
                     * Modification mode, add for adding (associating on-site devices), remove for deletion (dissociating on-site devices), set for setting (updating on-site device association).
                     */
                    std::string m_modifyMode;
                    bool m_modifyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYREQUEST_H_
