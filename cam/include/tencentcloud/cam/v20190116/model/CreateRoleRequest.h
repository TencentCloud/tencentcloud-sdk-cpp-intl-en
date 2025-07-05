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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/RoleTags.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateRole request structure.
                */
                class CreateRoleRequest : public AbstractModel
                {
                public:
                    CreateRoleRequest();
                    ~CreateRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Role name
                     * @return RoleName Role name
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name
                     * @param _roleName Role name
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Policy document
                     * @return PolicyDocument Policy document
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置Policy document
                     * @param _policyDocument Policy document
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                    /**
                     * 获取Role description
                     * @return Description Role description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Role description
                     * @param _description Role description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether login is allowed. 1: yes, 0: no
                     * @return ConsoleLogin Whether login is allowed. 1: yes, 0: no
                     * 
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置Whether login is allowed. 1: yes, 0: no
                     * @param _consoleLogin Whether login is allowed. 1: yes, 0: no
                     * 
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取The maximum validity period of the temporary key for creating a role (range: 0-43200)
                     * @return SessionDuration The maximum validity period of the temporary key for creating a role (range: 0-43200)
                     * 
                     */
                    uint64_t GetSessionDuration() const;

                    /**
                     * 设置The maximum validity period of the temporary key for creating a role (range: 0-43200)
                     * @param _sessionDuration The maximum validity period of the temporary key for creating a role (range: 0-43200)
                     * 
                     */
                    void SetSessionDuration(const uint64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     * 
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取Tags bound to the role.
                     * @return Tags Tags bound to the role.
                     * 
                     */
                    std::vector<RoleTags> GetTags() const;

                    /**
                     * 设置Tags bound to the role.
                     * @param _tags Tags bound to the role.
                     * 
                     */
                    void SetTags(const std::vector<RoleTags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Role name
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Policy document
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                    /**
                     * Role description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether login is allowed. 1: yes, 0: no
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * The maximum validity period of the temporary key for creating a role (range: 0-43200)
                     */
                    uint64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * Tags bound to the role.
                     */
                    std::vector<RoleTags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLEREQUEST_H_
