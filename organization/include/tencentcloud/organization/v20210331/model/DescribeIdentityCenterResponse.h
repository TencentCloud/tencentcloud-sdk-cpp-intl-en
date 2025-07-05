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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEIDENTITYCENTERRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEIDENTITYCENTERRESPONSE_H_

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
                * DescribeIdentityCenter response structure.
                */
                class DescribeIdentityCenterResponse : public AbstractModel
                {
                public:
                    DescribeIdentityCenterResponse();
                    ~DescribeIdentityCenterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * @return ZoneId Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Space name, which must be globally unique and contain 2-64 characters including lowercase letters, digits, and hyphens (-). It can neither start or end with a hyphen (-) nor contain two consecutive hyphens (-).
                     * @return ZoneName Space name, which must be globally unique and contain 2-64 characters including lowercase letters, digits, and hyphens (-). It can neither start or end with a hyphen (-) nor contain two consecutive hyphens (-).
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Service activation status. Disabled: not activated; Enabled: activated.
                     * @return ServiceStatus Service activation status. Disabled: not activated; Enabled: activated.
                     * 
                     */
                    std::string GetServiceStatus() const;

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     * @return ScimSyncStatus SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     * 
                     */
                    std::string GetScimSyncStatus() const;

                    /**
                     * 判断参数 ScimSyncStatus 是否已赋值
                     * @return ScimSyncStatus 是否已赋值
                     * 
                     */
                    bool ScimSyncStatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update date
                     * @return UpdateTime Update date
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Space ID, which starts with the z- prefix, followed by 12 random digits/lowercase letters.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Space name, which must be globally unique and contain 2-64 characters including lowercase letters, digits, and hyphens (-). It can neither start or end with a hyphen (-) nor contain two consecutive hyphens (-).
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Service activation status. Disabled: not activated; Enabled: activated.
                     */
                    std::string m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * SCIM synchronization status. Enabled: enabled. Disabled: disabled.
                     */
                    std::string m_scimSyncStatus;
                    bool m_scimSyncStatusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update date
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEIDENTITYCENTERRESPONSE_H_
