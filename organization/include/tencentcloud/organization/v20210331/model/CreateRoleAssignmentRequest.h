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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLEASSIGNMENTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLEASSIGNMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/RoleAssignmentInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateRoleAssignment request structure.
                */
                class CreateRoleAssignmentRequest : public AbstractModel
                {
                public:
                    CreateRoleAssignmentRequest();
                    ~CreateRoleAssignmentRequest() = default;
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
                     * 获取Authorized member account information, up to 50 entries.
                     * @return RoleAssignmentInfo Authorized member account information, up to 50 entries.
                     * 
                     */
                    std::vector<RoleAssignmentInfo> GetRoleAssignmentInfo() const;

                    /**
                     * 设置Authorized member account information, up to 50 entries.
                     * @param _roleAssignmentInfo Authorized member account information, up to 50 entries.
                     * 
                     */
                    void SetRoleAssignmentInfo(const std::vector<RoleAssignmentInfo>& _roleAssignmentInfo);

                    /**
                     * 判断参数 RoleAssignmentInfo 是否已赋值
                     * @return RoleAssignmentInfo 是否已赋值
                     * 
                     */
                    bool RoleAssignmentInfoHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Authorized member account information, up to 50 entries.
                     */
                    std::vector<RoleAssignmentInfo> m_roleAssignmentInfo;
                    bool m_roleAssignmentInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLEASSIGNMENTREQUEST_H_
