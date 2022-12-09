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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/OrgPermission.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganization response structure.
                */
                class DescribeOrganizationResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationResponse();
                    ~DescribeOrganizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgId Organization ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetOrgId() const;

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostUin Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHostUin() const;

                    /**
                     * 判断参数 HostUin 是否已赋值
                     * @return HostUin 是否已赋值
                     */
                    bool HostUinHasBeenSet() const;

                    /**
                     * 获取Creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NickName Creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Organization type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgType Organization type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetOrgType() const;

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     */
                    bool OrgTypeHasBeenSet() const;

                    /**
                     * 获取Whether the member is the organization admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsManager Whether the member is the organization admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsManager() const;

                    /**
                     * 判断参数 IsManager 是否已赋值
                     * @return IsManager 是否已赋值
                     */
                    bool IsManagerHasBeenSet() const;

                    /**
                     * 获取Policy type. Valid values: `Financial` (finance management).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgPolicyType Policy type. Valid values: `Financial` (finance management).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 判断参数 OrgPolicyType 是否已赋值
                     * @return OrgPolicyType 是否已赋值
                     */
                    bool OrgPolicyTypeHasBeenSet() const;

                    /**
                     * 获取Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgPolicyName Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 判断参数 OrgPolicyName 是否已赋值
                     * @return OrgPolicyName 是否已赋值
                     */
                    bool OrgPolicyNameHasBeenSet() const;

                    /**
                     * 获取List of member financial permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgPermission List of member financial permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 判断参数 OrgPermission 是否已赋值
                     * @return OrgPermission 是否已赋值
                     */
                    bool OrgPermissionHasBeenSet() const;

                    /**
                     * 获取Organization root node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RootNodeId Organization root node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRootNodeId() const;

                    /**
                     * 判断参数 RootNodeId 是否已赋值
                     * @return RootNodeId 是否已赋值
                     */
                    bool RootNodeIdHasBeenSet() const;

                    /**
                     * 获取Organization creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Organization creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Member joining time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JoinTime Member joining time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetJoinTime() const;

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     */
                    bool JoinTimeHasBeenSet() const;

                    /**
                     * 获取Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAllowQuit Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取Payer UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayUin Payer UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPayUin() const;

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取Payer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayName Payer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPayName() const;

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取Whether the member is the trusted service admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAssignManager Whether the member is the trusted service admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsAssignManager() const;

                    /**
                     * 判断参数 IsAssignManager 是否已赋值
                     * @return IsAssignManager 是否已赋值
                     */
                    bool IsAssignManagerHasBeenSet() const;

                    /**
                     * 获取Whether the member is the verified entity admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAuthManager Whether the member is the verified entity admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsAuthManager() const;

                    /**
                     * 判断参数 IsAuthManager 是否已赋值
                     * @return IsAuthManager 是否已赋值
                     */
                    bool IsAuthManagerHasBeenSet() const;

                private:

                    /**
                     * Organization ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * Creator UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hostUin;
                    bool m_hostUinHasBeenSet;

                    /**
                     * Creator name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Organization type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                    /**
                     * Whether the member is the organization admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * Policy type. Valid values: `Financial` (finance management).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * Policy name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * List of member financial permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * Organization root node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rootNodeId;
                    bool m_rootNodeIdHasBeenSet;

                    /**
                     * Organization creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Member joining time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_joinTime;
                    bool m_joinTimeHasBeenSet;

                    /**
                     * Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * Payer UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * Payer name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * Whether the member is the trusted service admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isAssignManager;
                    bool m_isAssignManagerHasBeenSet;

                    /**
                     * Whether the member is the verified entity admin. Valid values: `true` (yes); `false` (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isAuthManager;
                    bool m_isAuthManagerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONRESPONSE_H_
