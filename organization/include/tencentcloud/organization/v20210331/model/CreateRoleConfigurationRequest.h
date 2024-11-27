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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateRoleConfiguration request structure.
                */
                class CreateRoleConfigurationRequest : public AbstractModel
                {
                public:
                    CreateRoleConfigurationRequest();
                    ~CreateRoleConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Permission configuration name, which contains up to 128 characters, including English letters, digits, and hyphens (-).
                     * @return RoleConfigurationName Permission configuration name, which contains up to 128 characters, including English letters, digits, and hyphens (-).
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置Permission configuration name, which contains up to 128 characters, including English letters, digits, and hyphens (-).
                     * @param _roleConfigurationName Permission configuration name, which contains up to 128 characters, including English letters, digits, and hyphens (-).
                     * 
                     */
                    void SetRoleConfigurationName(const std::string& _roleConfigurationName);

                    /**
                     * 判断参数 RoleConfigurationName 是否已赋值
                     * @return RoleConfigurationName 是否已赋值
                     * 
                     */
                    bool RoleConfigurationNameHasBeenSet() const;

                    /**
                     * 获取Permission configuration description, which contains up to 1,024 characters.
                     * @return Description Permission configuration description, which contains up to 1,024 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Permission configuration description, which contains up to 1,024 characters.
                     * @param _description Permission configuration description, which contains up to 1,024 characters.
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
                     * 获取Session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours). Default: 3600 (1 hour).
                     * @return SessionDuration Session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours). Default: 3600 (1 hour).
                     * 
                     */
                    int64_t GetSessionDuration() const;

                    /**
                     * 设置Session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours). Default: 3600 (1 hour).
                     * @param _sessionDuration Session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours). Default: 3600 (1 hour).
                     * 
                     */
                    void SetSessionDuration(const int64_t& _sessionDuration);

                    /**
                     * 判断参数 SessionDuration 是否已赋值
                     * @return SessionDuration 是否已赋值
                     * 
                     */
                    bool SessionDurationHasBeenSet() const;

                    /**
                     * 获取Initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page. The default value is empty, representing a redirection to the home page of the Tencent Cloud console.
                     * @return RelayState Initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page. The default value is empty, representing a redirection to the home page of the Tencent Cloud console.
                     * 
                     */
                    std::string GetRelayState() const;

                    /**
                     * 设置Initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page. The default value is empty, representing a redirection to the home page of the Tencent Cloud console.
                     * @param _relayState Initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page. The default value is empty, representing a redirection to the home page of the Tencent Cloud console.
                     * 
                     */
                    void SetRelayState(const std::string& _relayState);

                    /**
                     * 判断参数 RelayState 是否已赋值
                     * @return RelayState 是否已赋值
                     * 
                     */
                    bool RelayStateHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Permission configuration name, which contains up to 128 characters, including English letters, digits, and hyphens (-).
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * Permission configuration description, which contains up to 1,024 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours). Default: 3600 (1 hour).
                     */
                    int64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * Initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page. The default value is empty, representing a redirection to the home page of the Tencent Cloud console.
                     */
                    std::string m_relayState;
                    bool m_relayStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONREQUEST_H_
