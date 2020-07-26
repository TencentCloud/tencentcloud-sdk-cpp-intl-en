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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ROLEINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Role details
                */
                class RoleInfo : public AbstractModel
                {
                public:
                    RoleInfo();
                    ~RoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role ID
                     * @return RoleId Role ID
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role ID
                     * @param RoleId Role ID
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name
                     * @return RoleName Role name
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name
                     * @param RoleName Role name
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Role policy document
                     * @return PolicyDocument Role policy document
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置Role policy document
                     * @param PolicyDocument Role policy document
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取Role description
                     * @return Description Role description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Role description
                     * @param Description Role description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Time role created
                     * @return AddTime Time role created
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Time role created
                     * @param AddTime Time role created
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Time role last updated
                     * @return UpdateTime Time role last updated
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Time role last updated
                     * @param UpdateTime Time role last updated
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取If login is allowed for the role
                     * @return ConsoleLogin If login is allowed for the role
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置If login is allowed for the role
                     * @param ConsoleLogin If login is allowed for the role
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取User role. Valid values: `user`, `system`, `service_linked`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RoleType User role. Valid values: `user`, `system`, `service_linked`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置User role. Valid values: `user`, `system`, `service_linked`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RoleType User role. Valid values: `user`, `system`, `service_linked`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取Valid period
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionDuration Valid period
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSessionDuration() const;

                    /**
                     * 设置Valid period
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SessionDuration Valid period
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionDuration(const uint64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取Task identifier for deleting a service-linked role 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeletionTaskId Task identifier for deleting a service-linked role 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeletionTaskId() const;

                    /**
                     * 设置Task identifier for deleting a service-linked role 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DeletionTaskId Task identifier for deleting a service-linked role 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeletionTaskId(const std::string& _deletionTaskId);

                    /**
                     * 判断参数 DeletionTaskId 是否已赋值
                     * @return DeletionTaskId 是否已赋值
                     */
                    bool DeletionTaskIdHasBeenSet() const;

                private:

                    /**
                     * Role ID
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Role policy document
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * Role description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Time role created
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Time role last updated
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * If login is allowed for the role
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * User role. Valid values: `user`, `system`, `service_linked`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * Valid period
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * Task identifier for deleting a service-linked role 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deletionTaskId;
                    bool m_deletionTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ROLEINFO_H_
