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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CloudCountDesc.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Group Account Details
                */
                class OrganizationInfo : public AbstractModel
                {
                public:
                    OrganizationInfo();
                    ~OrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取member account name
                     * @return NickName member account name
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置member account name
                     * @param _nickName member account name
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Department Node Name, Account's Department
                     * @return NodeName Department Node Name, Account's Department
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Department Node Name, Account's Department
                     * @param _nodeName Department Node Name, Account's Department
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Member/Admin/DelegatedAdmin/EntityAdmin, corresponding to Member/Administrator/Delegated Administrator/Entity Administrator
                     * @return Role Member/Admin/DelegatedAdmin/EntityAdmin, corresponding to Member/Administrator/Delegated Administrator/Entity Administrator
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Member/Admin/DelegatedAdmin/EntityAdmin, corresponding to Member/Administrator/Delegated Administrator/Entity Administrator
                     * @param _role Member/Admin/DelegatedAdmin/EntityAdmin, corresponding to Member/Administrator/Delegated Administrator/Entity Administrator
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Member Account ID
                     * @return MemberId Member Account ID
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Member Account ID
                     * @param _memberId Member Account ID
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Account Joining Method: Create/Invite.
                     * @return JoinType Account Joining Method: Create/Invite.
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置Account Joining Method: Create/Invite.
                     * @param _joinType Account Joining Method: Create/Invite.
                     * 
                     */
                    void SetJoinType(const std::string& _joinType);

                    /**
                     * 判断参数 JoinType 是否已赋值
                     * @return JoinType 是否已赋值
                     * 
                     */
                    bool JoinTypeHasBeenSet() const;

                    /**
                     * 获取Group Name
                     * @return GroupName Group Name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group Name
                     * @param _groupName Group Name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取administrator account name
                     * @return AdminName administrator account name
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置administrator account name
                     * @param _adminName administrator account name
                     * 
                     */
                    void SetAdminName(const std::string& _adminName);

                    /**
                     * 判断参数 AdminName 是否已赋值
                     * @return AdminName 是否已赋值
                     * 
                     */
                    bool AdminNameHasBeenSet() const;

                    /**
                     * 获取Administrator UIN
                     * @return AdminUin Administrator UIN
                     * 
                     */
                    std::string GetAdminUin() const;

                    /**
                     * 设置Administrator UIN
                     * @param _adminUin Administrator UIN
                     * 
                     */
                    void SetAdminUin(const std::string& _adminUin);

                    /**
                     * 判断参数 AdminUin 是否已赋值
                     * @return AdminUin 是否已赋值
                     * 
                     */
                    bool AdminUinHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Number of departments
                     * @return NodeCount Number of departments
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of departments
                     * @param _nodeCount Number of departments
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Number of members
                     * @return MemberCount Number of members
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Number of members
                     * @param _memberCount Number of members
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取Number of sub-accounts
                     * @return SubAccountCount Number of sub-accounts
                     * 
                     */
                    int64_t GetSubAccountCount() const;

                    /**
                     * 设置Number of sub-accounts
                     * @param _subAccountCount Number of sub-accounts
                     * 
                     */
                    void SetSubAccountCount(const int64_t& _subAccountCount);

                    /**
                     * 判断参数 SubAccountCount 是否已赋值
                     * @return SubAccountCount 是否已赋值
                     * 
                     */
                    bool SubAccountCountHasBeenSet() const;

                    /**
                     * 获取Number of abnormal sub-accounts
                     * @return AbnormalSubUserCount Number of abnormal sub-accounts
                     * 
                     */
                    int64_t GetAbnormalSubUserCount() const;

                    /**
                     * 设置Number of abnormal sub-accounts
                     * @param _abnormalSubUserCount Number of abnormal sub-accounts
                     * 
                     */
                    void SetAbnormalSubUserCount(const int64_t& _abnormalSubUserCount);

                    /**
                     * 判断参数 AbnormalSubUserCount 是否已赋值
                     * @return AbnormalSubUserCount 是否已赋值
                     * 
                     */
                    bool AbnormalSubUserCountHasBeenSet() const;

                    /**
                     * 获取Group Relationship Policy Permissions
                     * @return GroupPermission Group Relationship Policy Permissions
                     * 
                     */
                    std::vector<std::string> GetGroupPermission() const;

                    /**
                     * 设置Group Relationship Policy Permissions
                     * @param _groupPermission Group Relationship Policy Permissions
                     * 
                     */
                    void SetGroupPermission(const std::vector<std::string>& _groupPermission);

                    /**
                     * 判断参数 GroupPermission 是否已赋值
                     * @return GroupPermission 是否已赋值
                     * 
                     */
                    bool GroupPermissionHasBeenSet() const;

                    /**
                     * 获取Membership Policy Permissions
                     * @return MemberPermission Membership Policy Permissions
                     * 
                     */
                    std::vector<std::string> GetMemberPermission() const;

                    /**
                     * 设置Membership Policy Permissions
                     * @param _memberPermission Membership Policy Permissions
                     * 
                     */
                    void SetMemberPermission(const std::vector<std::string>& _memberPermission);

                    /**
                     * 判断参数 MemberPermission 是否已赋值
                     * @return MemberPermission 是否已赋值
                     * 
                     */
                    bool MemberPermissionHasBeenSet() const;

                    /**
                     * 获取Group Payment Mode. 0: Self-payment; 1: Proxy Payment.
                     * @return GroupPayMode Group Payment Mode. 0: Self-payment; 1: Proxy Payment.
                     * 
                     */
                    int64_t GetGroupPayMode() const;

                    /**
                     * 设置Group Payment Mode. 0: Self-payment; 1: Proxy Payment.
                     * @param _groupPayMode Group Payment Mode. 0: Self-payment; 1: Proxy Payment.
                     * 
                     */
                    void SetGroupPayMode(const int64_t& _groupPayMode);

                    /**
                     * 判断参数 GroupPayMode 是否已赋值
                     * @return GroupPayMode 是否已赋值
                     * 
                     */
                    bool GroupPayModeHasBeenSet() const;

                    /**
                     * 获取Personal Payment Mode. 0: Self-payment; 1: Proxy payment.
                     * @return MemberPayMode Personal Payment Mode. 0: Self-payment; 1: Proxy payment.
                     * 
                     */
                    int64_t GetMemberPayMode() const;

                    /**
                     * 设置Personal Payment Mode. 0: Self-payment; 1: Proxy payment.
                     * @param _memberPayMode Personal Payment Mode. 0: Self-payment; 1: Proxy payment.
                     * 
                     */
                    void SetMemberPayMode(const int64_t& _memberPayMode);

                    /**
                     * 判断参数 MemberPayMode 是否已赋值
                     * @return MemberPayMode 是否已赋值
                     * 
                     */
                    bool MemberPayModeHasBeenSet() const;

                    /**
                     * 获取Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * @return CFWProtect Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * 
                     */
                    std::string GetCFWProtect() const;

                    /**
                     * 设置Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * @param _cFWProtect Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * 
                     */
                    void SetCFWProtect(const std::string& _cFWProtect);

                    /**
                     * 判断参数 CFWProtect 是否已赋值
                     * @return CFWProtect 是否已赋值
                     * 
                     */
                    bool CFWProtectHasBeenSet() const;

                    /**
                     * 获取Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * @return WAFProtect Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * 
                     */
                    std::string GetWAFProtect() const;

                    /**
                     * 设置Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * @param _wAFProtect Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * 
                     */
                    void SetWAFProtect(const std::string& _wAFProtect);

                    /**
                     * 判断参数 WAFProtect 是否已赋值
                     * @return WAFProtect 是否已赋值
                     * 
                     */
                    bool WAFProtectHasBeenSet() const;

                    /**
                     * 获取Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * @return CWPProtect Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * 
                     */
                    std::string GetCWPProtect() const;

                    /**
                     * 设置Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * @param _cWPProtect Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     * 
                     */
                    void SetCWPProtect(const std::string& _cWPProtect);

                    /**
                     * 判断参数 CWPProtect 是否已赋值
                     * @return CWPProtect 是否已赋值
                     * 
                     */
                    bool CWPProtectHasBeenSet() const;

                    /**
                     * 获取Array of Collections for All Departments
                     * @return Departments Array of Collections for All Departments
                     * 
                     */
                    std::vector<std::string> GetDepartments() const;

                    /**
                     * 设置Array of Collections for All Departments
                     * @param _departments Array of Collections for All Departments
                     * 
                     */
                    void SetDepartments(const std::vector<std::string>& _departments);

                    /**
                     * 判断参数 Departments 是否已赋值
                     * @return Departments 是否已赋值
                     * 
                     */
                    bool DepartmentsHasBeenSet() const;

                    /**
                     * 获取Member Creation Time
                     * @return MemberCreateTime Member Creation Time
                     * 
                     */
                    std::string GetMemberCreateTime() const;

                    /**
                     * 设置Member Creation Time
                     * @param _memberCreateTime Member Creation Time
                     * 
                     */
                    void SetMemberCreateTime(const std::string& _memberCreateTime);

                    /**
                     * 判断参数 MemberCreateTime 是否已赋值
                     * @return MemberCreateTime 是否已赋值
                     * 
                     */
                    bool MemberCreateTimeHasBeenSet() const;

                    /**
                     * 获取Advanced/Enterprise/Ultimate 
                     * @return CSIPProtect Advanced/Enterprise/Ultimate 
                     * 
                     */
                    std::string GetCSIPProtect() const;

                    /**
                     * 设置Advanced/Enterprise/Ultimate 
                     * @param _cSIPProtect Advanced/Enterprise/Ultimate 
                     * 
                     */
                    void SetCSIPProtect(const std::string& _cSIPProtect);

                    /**
                     * 判断参数 CSIPProtect 是否已赋值
                     * @return CSIPProtect 是否已赋值
                     * 
                     */
                    bool CSIPProtectHasBeenSet() const;

                    /**
                     * 获取1 indicates the quota consumer.
                     * @return QuotaConsumer 1 indicates the quota consumer.
                     * 
                     */
                    int64_t GetQuotaConsumer() const;

                    /**
                     * 设置1 indicates the quota consumer.
                     * @param _quotaConsumer 1 indicates the quota consumer.
                     * 
                     */
                    void SetQuotaConsumer(const int64_t& _quotaConsumer);

                    /**
                     * 判断参数 QuotaConsumer 是否已赋值
                     * @return QuotaConsumer 是否已赋值
                     * 
                     */
                    bool QuotaConsumerHasBeenSet() const;

                    /**
                     * 获取Number of activations by admin/delegated admin
                     * @return EnableAdminCount Number of activations by admin/delegated admin
                     * 
                     */
                    int64_t GetEnableAdminCount() const;

                    /**
                     * 设置Number of activations by admin/delegated admin
                     * @param _enableAdminCount Number of activations by admin/delegated admin
                     * 
                     */
                    void SetEnableAdminCount(const int64_t& _enableAdminCount);

                    /**
                     * 判断参数 EnableAdminCount 是否已赋值
                     * @return EnableAdminCount 是否已赋值
                     * 
                     */
                    bool EnableAdminCountHasBeenSet() const;

                    /**
                     * 获取Account Multi-Cloud Information Statistics, in array format. Refer to the description of CloudCountDesc for details.
                     * @return CloudCountDesc Account Multi-Cloud Information Statistics, in array format. Refer to the description of CloudCountDesc for details.
                     * 
                     */
                    std::vector<CloudCountDesc> GetCloudCountDesc() const;

                    /**
                     * 设置Account Multi-Cloud Information Statistics, in array format. Refer to the description of CloudCountDesc for details.
                     * @param _cloudCountDesc Account Multi-Cloud Information Statistics, in array format. Refer to the description of CloudCountDesc for details.
                     * 
                     */
                    void SetCloudCountDesc(const std::vector<CloudCountDesc>& _cloudCountDesc);

                    /**
                     * 判断参数 CloudCountDesc 是否已赋值
                     * @return CloudCountDesc 是否已赋值
                     * 
                     */
                    bool CloudCountDescHasBeenSet() const;

                    /**
                     * 获取Total number of admins/delegated admins
                     * @return AdminCount Total number of admins/delegated admins
                     * 
                     */
                    int64_t GetAdminCount() const;

                    /**
                     * 设置Total number of admins/delegated admins
                     * @param _adminCount Total number of admins/delegated admins
                     * 
                     */
                    void SetAdminCount(const int64_t& _adminCount);

                    /**
                     * 判断参数 AdminCount 是否已赋值
                     * @return AdminCount 是否已赋值
                     * 
                     */
                    bool AdminCountHasBeenSet() const;

                private:

                    /**
                     * member account name
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Department Node Name, Account's Department
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Member/Admin/DelegatedAdmin/EntityAdmin, corresponding to Member/Administrator/Delegated Administrator/Entity Administrator
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Member Account ID
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Account Joining Method: Create/Invite.
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * Group Name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * administrator account name
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * Administrator UIN
                     */
                    std::string m_adminUin;
                    bool m_adminUinHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of departments
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Number of members
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * Number of sub-accounts
                     */
                    int64_t m_subAccountCount;
                    bool m_subAccountCountHasBeenSet;

                    /**
                     * Number of abnormal sub-accounts
                     */
                    int64_t m_abnormalSubUserCount;
                    bool m_abnormalSubUserCountHasBeenSet;

                    /**
                     * Group Relationship Policy Permissions
                     */
                    std::vector<std::string> m_groupPermission;
                    bool m_groupPermissionHasBeenSet;

                    /**
                     * Membership Policy Permissions
                     */
                    std::vector<std::string> m_memberPermission;
                    bool m_memberPermissionHasBeenSet;

                    /**
                     * Group Payment Mode. 0: Self-payment; 1: Proxy Payment.
                     */
                    int64_t m_groupPayMode;
                    bool m_groupPayModeHasBeenSet;

                    /**
                     * Personal Payment Mode. 0: Self-payment; 1: Proxy payment.
                     */
                    int64_t m_memberPayMode;
                    bool m_memberPayModeHasBeenSet;

                    /**
                     * Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     */
                    std::string m_cFWProtect;
                    bool m_cFWProtectHasBeenSet;

                    /**
                     * Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     */
                    std::string m_wAFProtect;
                    bool m_wAFProtectHasBeenSet;

                    /**
                     * Not enabled if empty. Otherwise, different strings correspond to different versions. Common for General, regardless of version.
                     */
                    std::string m_cWPProtect;
                    bool m_cWPProtectHasBeenSet;

                    /**
                     * Array of Collections for All Departments
                     */
                    std::vector<std::string> m_departments;
                    bool m_departmentsHasBeenSet;

                    /**
                     * Member Creation Time
                     */
                    std::string m_memberCreateTime;
                    bool m_memberCreateTimeHasBeenSet;

                    /**
                     * Advanced/Enterprise/Ultimate 
                     */
                    std::string m_cSIPProtect;
                    bool m_cSIPProtectHasBeenSet;

                    /**
                     * 1 indicates the quota consumer.
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * Number of activations by admin/delegated admin
                     */
                    int64_t m_enableAdminCount;
                    bool m_enableAdminCountHasBeenSet;

                    /**
                     * Account Multi-Cloud Information Statistics, in array format. Refer to the description of CloudCountDesc for details.
                     */
                    std::vector<CloudCountDesc> m_cloudCountDesc;
                    bool m_cloudCountDescHasBeenSet;

                    /**
                     * Total number of admins/delegated admins
                     */
                    int64_t m_adminCount;
                    bool m_adminCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_
