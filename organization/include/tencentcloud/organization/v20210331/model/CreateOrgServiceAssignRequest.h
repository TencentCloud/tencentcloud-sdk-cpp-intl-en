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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGSERVICEASSIGNREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGSERVICEASSIGNREQUEST_H_

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
                * CreateOrgServiceAssign request structure.
                */
                class CreateOrgServiceAssignRequest : public AbstractModel
                {
                public:
                    CreateOrgServiceAssignRequest();
                    ~CreateOrgServiceAssignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Uin list of the delegated admins, including up to 20 items.
                     * @return MemberUins Uin list of the delegated admins, including up to 20 items.
                     * 
                     */
                    std::vector<int64_t> GetMemberUins() const;

                    /**
                     * 设置Uin list of the delegated admins, including up to 20 items.
                     * @param _memberUins Uin list of the delegated admins, including up to 20 items.
                     * 
                     */
                    void SetMemberUins(const std::vector<int64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * @return ServiceId Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * @param _serviceId Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     * 
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members). Default value: 1.
                     * @return ManagementScope Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members). Default value: 1.
                     * 
                     */
                    uint64_t GetManagementScope() const;

                    /**
                     * 设置Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members). Default value: 1.
                     * @param _managementScope Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members). Default value: 1.
                     * 
                     */
                    void SetManagementScope(const uint64_t& _managementScope);

                    /**
                     * 判断参数 ManagementScope 是否已赋值
                     * @return ManagementScope 是否已赋值
                     * 
                     */
                    bool ManagementScopeHasBeenSet() const;

                    /**
                     * 获取Uin list of the managed members. This parameter is valid when ManagementScope is 2.
                     * @return ManagementScopeUins Uin list of the managed members. This parameter is valid when ManagementScope is 2.
                     * 
                     */
                    std::vector<int64_t> GetManagementScopeUins() const;

                    /**
                     * 设置Uin list of the managed members. This parameter is valid when ManagementScope is 2.
                     * @param _managementScopeUins Uin list of the managed members. This parameter is valid when ManagementScope is 2.
                     * 
                     */
                    void SetManagementScopeUins(const std::vector<int64_t>& _managementScopeUins);

                    /**
                     * 判断参数 ManagementScopeUins 是否已赋值
                     * @return ManagementScopeUins 是否已赋值
                     * 
                     */
                    bool ManagementScopeUinsHasBeenSet() const;

                    /**
                     * 获取ID list of the managed departments. This parameter is valid when ManagementScope is 2.
                     * @return ManagementScopeNodeIds ID list of the managed departments. This parameter is valid when ManagementScope is 2.
                     * 
                     */
                    std::vector<int64_t> GetManagementScopeNodeIds() const;

                    /**
                     * 设置ID list of the managed departments. This parameter is valid when ManagementScope is 2.
                     * @param _managementScopeNodeIds ID list of the managed departments. This parameter is valid when ManagementScope is 2.
                     * 
                     */
                    void SetManagementScopeNodeIds(const std::vector<int64_t>& _managementScopeNodeIds);

                    /**
                     * 判断参数 ManagementScopeNodeIds 是否已赋值
                     * @return ManagementScopeNodeIds 是否已赋值
                     * 
                     */
                    bool ManagementScopeNodeIdsHasBeenSet() const;

                private:

                    /**
                     * Uin list of the delegated admins, including up to 20 items.
                     */
                    std::vector<int64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * Organization service ID, which can be obtained through [ListOrganizationService](https://intl.cloud.tencent.com/document/product/850/109561?from_cn_redirect=1).
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members). Default value: 1.
                     */
                    uint64_t m_managementScope;
                    bool m_managementScopeHasBeenSet;

                    /**
                     * Uin list of the managed members. This parameter is valid when ManagementScope is 2.
                     */
                    std::vector<int64_t> m_managementScopeUins;
                    bool m_managementScopeUinsHasBeenSet;

                    /**
                     * ID list of the managed departments. This parameter is valid when ManagementScope is 2.
                     */
                    std::vector<int64_t> m_managementScopeNodeIds;
                    bool m_managementScopeNodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGSERVICEASSIGNREQUEST_H_
