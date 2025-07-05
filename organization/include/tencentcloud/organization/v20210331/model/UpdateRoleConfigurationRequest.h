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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_

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
                * UpdateRoleConfiguration request structure.
                */
                class UpdateRoleConfigurationRequest : public AbstractModel
                {
                public:
                    UpdateRoleConfigurationRequest();
                    ~UpdateRoleConfigurationRequest() = default;
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
                     * 获取Permission configuration ID.
                     * @return RoleConfigurationId Permission configuration ID.
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置Permission configuration ID.
                     * @param _roleConfigurationId Permission configuration ID.
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取New permission configuration description, which contains up to 1,024 characters.
                     * @return NewDescription New permission configuration description, which contains up to 1,024 characters.
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置New permission configuration description, which contains up to 1,024 characters.
                     * @param _newDescription New permission configuration description, which contains up to 1,024 characters.
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                    /**
                     * 获取New session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours).
                     * @return NewSessionDuration New session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours).
                     * 
                     */
                    int64_t GetNewSessionDuration() const;

                    /**
                     * 设置New session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours).
                     * @param _newSessionDuration New session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours).
                     * 
                     */
                    void SetNewSessionDuration(const int64_t& _newSessionDuration);

                    /**
                     * 判断参数 NewSessionDuration 是否已赋值
                     * @return NewSessionDuration 是否已赋值
                     * 
                     */
                    bool NewSessionDurationHasBeenSet() const;

                    /**
                     * 获取New initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page.
                     * @return NewRelayState New initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page.
                     * 
                     */
                    std::string GetNewRelayState() const;

                    /**
                     * 设置New initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page.
                     * @param _newRelayState New initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page.
                     * 
                     */
                    void SetNewRelayState(const std::string& _newRelayState);

                    /**
                     * 判断参数 NewRelayState 是否已赋值
                     * @return NewRelayState 是否已赋值
                     * 
                     */
                    bool NewRelayStateHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Permission configuration ID.
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * New permission configuration description, which contains up to 1,024 characters.
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                    /**
                     * New session duration, in seconds. It is the maximum time a CIC user can maintain a session while using permission configurations to access a target account in TCO. Value range: 900 to 43200 (15 minutes to 12 hours).
                     */
                    int64_t m_newSessionDuration;
                    bool m_newSessionDurationHasBeenSet;

                    /**
                     * New initial access page. It is the initial page address when a CIC user uses permission configurations to access a target account in TCO. This page must be a Tencent Cloud console page.
                     */
                    std::string m_newRelayState;
                    bool m_newRelayStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEROLECONFIGURATIONREQUEST_H_
