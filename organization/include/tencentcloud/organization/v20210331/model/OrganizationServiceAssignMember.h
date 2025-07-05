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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGNMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGNMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/MemberMainInfo.h>
#include <tencentcloud/organization/v20210331/model/NodeMainInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Information on the delegated member of the organization service.
                */
                class OrganizationServiceAssignMember : public AbstractModel
                {
                public:
                    OrganizationServiceAssignMember();
                    ~OrganizationServiceAssignMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceId Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductName Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productName Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Uin of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberUin Uin of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Uin of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberUin Uin of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Name of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberName Name of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置Name of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberName Name of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取Activation status. Valid values: 0 (the service has no activation status), 1 (activated), 2 (not activated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsageStatus Activation status. Valid values: 0 (the service has no activation status), 1 (activated), 2 (not activated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUsageStatus() const;

                    /**
                     * 设置Activation status. Valid values: 0 (the service has no activation status), 1 (activated), 2 (not activated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usageStatus Activation status. Valid values: 0 (the service has no activation status), 1 (activated), 2 (not activated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsageStatus(const uint64_t& _usageStatus);

                    /**
                     * 判断参数 UsageStatus 是否已赋值
                     * @return UsageStatus 是否已赋值
                     * 
                     */
                    bool UsageStatusHasBeenSet() const;

                    /**
                     * 获取Delegation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Delegation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Delegation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Delegation time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManagementScope Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetManagementScope() const;

                    /**
                     * 设置Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _managementScope Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Uin list of managed members. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManagementScopeMembers Uin list of managed members. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MemberMainInfo> GetManagementScopeMembers() const;

                    /**
                     * 设置Uin list of managed members. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _managementScopeMembers Uin list of managed members. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManagementScopeMembers(const std::vector<MemberMainInfo>& _managementScopeMembers);

                    /**
                     * 判断参数 ManagementScopeMembers 是否已赋值
                     * @return ManagementScopeMembers 是否已赋值
                     * 
                     */
                    bool ManagementScopeMembersHasBeenSet() const;

                    /**
                     * 获取ID list of the managed departments. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManagementScopeNodes ID list of the managed departments. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeMainInfo> GetManagementScopeNodes() const;

                    /**
                     * 设置ID list of the managed departments. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _managementScopeNodes ID list of the managed departments. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManagementScopeNodes(const std::vector<NodeMainInfo>& _managementScopeNodes);

                    /**
                     * 判断参数 ManagementScopeNodes 是否已赋值
                     * @return ManagementScopeNodes 是否已赋值
                     * 
                     */
                    bool ManagementScopeNodesHasBeenSet() const;

                private:

                    /**
                     * Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Uin of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Name of the delegated admin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * Activation status. Valid values: 0 (the service has no activation status), 1 (activated), 2 (not activated).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_usageStatus;
                    bool m_usageStatusHasBeenSet;

                    /**
                     * Delegation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Management scope of the delegated admin. Valid values: 1 (all members), 2 (partial members).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_managementScope;
                    bool m_managementScopeHasBeenSet;

                    /**
                     * Uin list of managed members. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MemberMainInfo> m_managementScopeMembers;
                    bool m_managementScopeMembersHasBeenSet;

                    /**
                     * ID list of the managed departments. This parameter is valid when ManagementScope is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeMainInfo> m_managementScopeNodes;
                    bool m_managementScopeNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGNMEMBER_H_
