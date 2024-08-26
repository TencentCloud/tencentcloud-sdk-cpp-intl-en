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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ZONESTATISTICS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ZONESTATISTICS_H_

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
                * CIC space statistics.
                */
                class ZoneStatistics : public AbstractModel
                {
                public:
                    ZoneStatistics();
                    ~ZoneStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User quota.
                     * @return UserQuota User quota.
                     * 
                     */
                    int64_t GetUserQuota() const;

                    /**
                     * 设置User quota.
                     * @param _userQuota User quota.
                     * 
                     */
                    void SetUserQuota(const int64_t& _userQuota);

                    /**
                     * 判断参数 UserQuota 是否已赋值
                     * @return UserQuota 是否已赋值
                     * 
                     */
                    bool UserQuotaHasBeenSet() const;

                    /**
                     * 获取User group quota.
                     * @return GroupQuota User group quota.
                     * 
                     */
                    int64_t GetGroupQuota() const;

                    /**
                     * 设置User group quota.
                     * @param _groupQuota User group quota.
                     * 
                     */
                    void SetGroupQuota(const int64_t& _groupQuota);

                    /**
                     * 判断参数 GroupQuota 是否已赋值
                     * @return GroupQuota 是否已赋值
                     * 
                     */
                    bool GroupQuotaHasBeenSet() const;

                    /**
                     * 获取Permission configuration quota.
                     * @return RoleConfigurationQuota Permission configuration quota.
                     * 
                     */
                    int64_t GetRoleConfigurationQuota() const;

                    /**
                     * 设置Permission configuration quota.
                     * @param _roleConfigurationQuota Permission configuration quota.
                     * 
                     */
                    void SetRoleConfigurationQuota(const int64_t& _roleConfigurationQuota);

                    /**
                     * 判断参数 RoleConfigurationQuota 是否已赋值
                     * @return RoleConfigurationQuota 是否已赋值
                     * 
                     */
                    bool RoleConfigurationQuotaHasBeenSet() const;

                    /**
                     * 获取System policy quota bound to the permission configuration.
                     * @return SystemPolicyPerRoleConfigurationQuota System policy quota bound to the permission configuration.
                     * 
                     */
                    int64_t GetSystemPolicyPerRoleConfigurationQuota() const;

                    /**
                     * 设置System policy quota bound to the permission configuration.
                     * @param _systemPolicyPerRoleConfigurationQuota System policy quota bound to the permission configuration.
                     * 
                     */
                    void SetSystemPolicyPerRoleConfigurationQuota(const int64_t& _systemPolicyPerRoleConfigurationQuota);

                    /**
                     * 判断参数 SystemPolicyPerRoleConfigurationQuota 是否已赋值
                     * @return SystemPolicyPerRoleConfigurationQuota 是否已赋值
                     * 
                     */
                    bool SystemPolicyPerRoleConfigurationQuotaHasBeenSet() const;

                    /**
                     * 获取Number of users.
                     * @return UserCount Number of users.
                     * 
                     */
                    int64_t GetUserCount() const;

                    /**
                     * 设置Number of users.
                     * @param _userCount Number of users.
                     * 
                     */
                    void SetUserCount(const int64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取Number of user groups.
                     * @return GroupCount Number of user groups.
                     * 
                     */
                    int64_t GetGroupCount() const;

                    /**
                     * 设置Number of user groups.
                     * @param _groupCount Number of user groups.
                     * 
                     */
                    void SetGroupCount(const int64_t& _groupCount);

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     * 
                     */
                    bool GroupCountHasBeenSet() const;

                    /**
                     * 获取Number of permission configurations.
                     * @return RoleConfigurationCount Number of permission configurations.
                     * 
                     */
                    int64_t GetRoleConfigurationCount() const;

                    /**
                     * 设置Number of permission configurations.
                     * @param _roleConfigurationCount Number of permission configurations.
                     * 
                     */
                    void SetRoleConfigurationCount(const int64_t& _roleConfigurationCount);

                    /**
                     * 判断参数 RoleConfigurationCount 是否已赋值
                     * @return RoleConfigurationCount 是否已赋值
                     * 
                     */
                    bool RoleConfigurationCountHasBeenSet() const;

                    /**
                     * 获取Number of synchronized users.
                     * @return UserProvisioningCount Number of synchronized users.
                     * 
                     */
                    int64_t GetUserProvisioningCount() const;

                    /**
                     * 设置Number of synchronized users.
                     * @param _userProvisioningCount Number of synchronized users.
                     * 
                     */
                    void SetUserProvisioningCount(const int64_t& _userProvisioningCount);

                    /**
                     * 判断参数 UserProvisioningCount 是否已赋值
                     * @return UserProvisioningCount 是否已赋值
                     * 
                     */
                    bool UserProvisioningCountHasBeenSet() const;

                    /**
                     * 获取Number of synchronized roles.
                     * @return RoleConfigurationSyncCount Number of synchronized roles.
                     * 
                     */
                    int64_t GetRoleConfigurationSyncCount() const;

                    /**
                     * 设置Number of synchronized roles.
                     * @param _roleConfigurationSyncCount Number of synchronized roles.
                     * 
                     */
                    void SetRoleConfigurationSyncCount(const int64_t& _roleConfigurationSyncCount);

                    /**
                     * 判断参数 RoleConfigurationSyncCount 是否已赋值
                     * @return RoleConfigurationSyncCount 是否已赋值
                     * 
                     */
                    bool RoleConfigurationSyncCountHasBeenSet() const;

                private:

                    /**
                     * User quota.
                     */
                    int64_t m_userQuota;
                    bool m_userQuotaHasBeenSet;

                    /**
                     * User group quota.
                     */
                    int64_t m_groupQuota;
                    bool m_groupQuotaHasBeenSet;

                    /**
                     * Permission configuration quota.
                     */
                    int64_t m_roleConfigurationQuota;
                    bool m_roleConfigurationQuotaHasBeenSet;

                    /**
                     * System policy quota bound to the permission configuration.
                     */
                    int64_t m_systemPolicyPerRoleConfigurationQuota;
                    bool m_systemPolicyPerRoleConfigurationQuotaHasBeenSet;

                    /**
                     * Number of users.
                     */
                    int64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * Number of user groups.
                     */
                    int64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                    /**
                     * Number of permission configurations.
                     */
                    int64_t m_roleConfigurationCount;
                    bool m_roleConfigurationCountHasBeenSet;

                    /**
                     * Number of synchronized users.
                     */
                    int64_t m_userProvisioningCount;
                    bool m_userProvisioningCountHasBeenSet;

                    /**
                     * Number of synchronized roles.
                     */
                    int64_t m_roleConfigurationSyncCount;
                    bool m_roleConfigurationSyncCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ZONESTATISTICS_H_
