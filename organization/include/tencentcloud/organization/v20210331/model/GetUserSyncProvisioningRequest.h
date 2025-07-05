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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETUSERSYNCPROVISIONINGREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETUSERSYNCPROVISIONINGREQUEST_H_

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
                * GetUserSyncProvisioning request structure.
                */
                class GetUserSyncProvisioningRequest : public AbstractModel
                {
                public:
                    GetUserSyncProvisioningRequest();
                    ~GetUserSyncProvisioningRequest() = default;
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
                     * 获取ID of the CAM user synchronization.
                     * @return UserProvisioningId ID of the CAM user synchronization.
                     * 
                     */
                    std::string GetUserProvisioningId() const;

                    /**
                     * 设置ID of the CAM user synchronization.
                     * @param _userProvisioningId ID of the CAM user synchronization.
                     * 
                     */
                    void SetUserProvisioningId(const std::string& _userProvisioningId);

                    /**
                     * 判断参数 UserProvisioningId 是否已赋值
                     * @return UserProvisioningId 是否已赋值
                     * 
                     */
                    bool UserProvisioningIdHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ID of the CAM user synchronization.
                     */
                    std::string m_userProvisioningId;
                    bool m_userProvisioningIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_GETUSERSYNCPROVISIONINGREQUEST_H_
