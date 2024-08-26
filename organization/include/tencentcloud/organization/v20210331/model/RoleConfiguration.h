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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * CIC permission configuration.
                */
                class RoleConfiguration : public AbstractModel
                {
                public:
                    RoleConfiguration();
                    ~RoleConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Permission configuration name.
                     * @return RoleConfigurationName Permission configuration name.
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置Permission configuration name.
                     * @param _roleConfigurationName Permission configuration name.
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
                     * 获取Permission configuration description.
                     * @return Description Permission configuration description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Permission configuration description.
                     * @param _description Permission configuration description.
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
                     * 获取Session duration. It indicates the maximum session duration when CIC users use the access configuration to access member accounts.
Unit: seconds.
                     * @return SessionDuration Session duration. It indicates the maximum session duration when CIC users use the access configuration to access member accounts.
Unit: seconds.
                     * 
                     */
                    int64_t GetSessionDuration() const;

                    /**
                     * 设置Session duration. It indicates the maximum session duration when CIC users use the access configuration to access member accounts.
Unit: seconds.
                     * @param _sessionDuration Session duration. It indicates the maximum session duration when CIC users use the access configuration to access member accounts.
Unit: seconds.
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
                     * 获取Initial access page. It indicates the initial access page URL when CIC users use the access configuration to access member accounts.
                     * @return RelayState Initial access page. It indicates the initial access page URL when CIC users use the access configuration to access member accounts.
                     * 
                     */
                    std::string GetRelayState() const;

                    /**
                     * 设置Initial access page. It indicates the initial access page URL when CIC users use the access configuration to access member accounts.
                     * @param _relayState Initial access page. It indicates the initial access page URL when CIC users use the access configuration to access member accounts.
                     * 
                     */
                    void SetRelayState(const std::string& _relayState);

                    /**
                     * 判断参数 RelayState 是否已赋值
                     * @return RelayState 是否已赋值
                     * 
                     */
                    bool RelayStateHasBeenSet() const;

                    /**
                     * 获取Creation time of the permission configuration.
                     * @return CreateTime Creation time of the permission configuration.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the permission configuration.
                     * @param _createTime Creation time of the permission configuration.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time of the permission configuration.
                     * @return UpdateTime Update time of the permission configuration.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time of the permission configuration.
                     * @param _updateTime Update time of the permission configuration.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取If the input parameter FilterTargets is provided, check whether the member account has been configured with permissions. If configured, return true; otherwise, return false.
                     * @return IsSelected If the input parameter FilterTargets is provided, check whether the member account has been configured with permissions. If configured, return true; otherwise, return false.
                     * 
                     */
                    bool GetIsSelected() const;

                    /**
                     * 设置If the input parameter FilterTargets is provided, check whether the member account has been configured with permissions. If configured, return true; otherwise, return false.
                     * @param _isSelected If the input parameter FilterTargets is provided, check whether the member account has been configured with permissions. If configured, return true; otherwise, return false.
                     * 
                     */
                    void SetIsSelected(const bool& _isSelected);

                    /**
                     * 判断参数 IsSelected 是否已赋值
                     * @return IsSelected 是否已赋值
                     * 
                     */
                    bool IsSelectedHasBeenSet() const;

                private:

                    /**
                     * Permission configuration ID.
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * Permission configuration name.
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * Permission configuration description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Session duration. It indicates the maximum session duration when CIC users use the access configuration to access member accounts.
Unit: seconds.
                     */
                    int64_t m_sessionDuration;
                    bool m_sessionDurationHasBeenSet;

                    /**
                     * Initial access page. It indicates the initial access page URL when CIC users use the access configuration to access member accounts.
                     */
                    std::string m_relayState;
                    bool m_relayStateHasBeenSet;

                    /**
                     * Creation time of the permission configuration.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time of the permission configuration.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * If the input parameter FilterTargets is provided, check whether the member account has been configured with permissions. If configured, return true; otherwise, return false.
                     */
                    bool m_isSelected;
                    bool m_isSelectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLECONFIGURATION_H_
