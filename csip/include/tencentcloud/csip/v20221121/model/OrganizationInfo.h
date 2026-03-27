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
                * Group account details
                */
                class OrganizationInfo : public AbstractModel
                {
                public:
                    OrganizationInfo();
                    ~OrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Member account name
                     * @return NickName Member account name
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Member account name
                     * @param _nickName Member account name
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
                     * 获取Department node name, department of account
                     * @return NodeName Department node name, department of account
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Department node name, department of account
                     * @param _nodeName Department node name, department of account
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
                     * 获取Member/Admin/DelegatedAdmin/EntityAdmin; Member/Admin/DelegatedAdmin/EntityAdmin
                     * @return Role Member/Admin/DelegatedAdmin/EntityAdmin; Member/Admin/DelegatedAdmin/EntityAdmin
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Member/Admin/DelegatedAdmin/EntityAdmin; Member/Admin/DelegatedAdmin/EntityAdmin
                     * @param _role Member/Admin/DelegatedAdmin/EntityAdmin; Member/Admin/DelegatedAdmin/EntityAdmin
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
                     * 获取Member account id
                     * @return MemberId Member account id
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Member account id
                     * @param _memberId Member account id
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
                     * 获取account joining method,create/invite
                     * @return JoinType account joining method,create/invite
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置account joining method,create/invite
                     * @param _joinType account joining method,create/invite
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
                     * 获取Group name
                     * @return GroupName Group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name
                     * @param _groupName Group name
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
                     * 获取Admin account name
                     * @return AdminName Admin account name
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置Admin account name
                     * @param _adminName Admin account name
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
                     * 获取Admin Uin
                     * @return AdminUin Admin Uin
                     * 
                     */
                    std::string GetAdminUin() const;

                    /**
                     * 设置Admin Uin
                     * @param _adminUin Admin Uin
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
                     * 获取Creation Time
                     * @return CreateTime Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time
                     * @param _createTime Creation Time
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
                     * 获取Sub-account count
                     * @return SubAccountCount Sub-account count
                     * 
                     */
                    int64_t GetSubAccountCount() const;

                    /**
                     * 设置Sub-account count
                     * @param _subAccountCount Sub-account count
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
                     * 获取Abnormal sub-account quantity
                     * @return AbnormalSubUserCount Abnormal sub-account quantity
                     * 
                     */
                    int64_t GetAbnormalSubUserCount() const;

                    /**
                     * 设置Abnormal sub-account quantity
                     * @param _abnormalSubUserCount Abnormal sub-account quantity
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
                     * 获取Organization Relationship Policy Permissions
                     * @return GroupPermission Organization Relationship Policy Permissions
                     * 
                     */
                    std::vector<std::string> GetGroupPermission() const;

                    /**
                     * 设置Organization Relationship Policy Permissions
                     * @param _groupPermission Organization Relationship Policy Permissions
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
                     * 获取Organization Billing Mode; 0/Self-paid, 1/Proxy-paid
                     * @return GroupPayMode Organization Billing Mode; 0/Self-paid, 1/Proxy-paid
                     * 
                     */
                    int64_t GetGroupPayMode() const;

                    /**
                     * 设置Organization Billing Mode; 0/Self-paid, 1/Proxy-paid
                     * @param _groupPayMode Organization Billing Mode; 0/Self-paid, 1/Proxy-paid
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
                     * 获取Personal Billing Mode; 0/Self-paid, 1/Proxy-paid
                     * @return MemberPayMode Personal Billing Mode; 0/Self-paid, 1/Proxy-paid
                     * 
                     */
                    int64_t GetMemberPayMode() const;

                    /**
                     * 设置Personal Billing Mode; 0/Self-paid, 1/Proxy-paid
                     * @param _memberPayMode Personal Billing Mode; 0/Self-paid, 1/Proxy-paid
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
                     * 获取If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * @return CFWProtect If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * 
                     */
                    std::string GetCFWProtect() const;

                    /**
                     * 设置If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * @param _cFWProtect If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
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
                     * 获取If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * @return WAFProtect If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * 
                     */
                    std::string GetWAFProtect() const;

                    /**
                     * 设置If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * @param _wAFProtect If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
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
                     * 获取If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * @return CWPProtect If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * 
                     */
                    std::string GetCWPProtect() const;

                    /**
                     * 设置If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     * @param _cWPProtect If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
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
                     * 获取Array of all departments
                     * @return Departments Array of all departments
                     * 
                     */
                    std::vector<std::string> GetDepartments() const;

                    /**
                     * 设置Array of all departments
                     * @param _departments Array of all departments
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
                     * 获取1 indicates the quota consumer
                     * @return QuotaConsumer 1 indicates the quota consumer
                     * 
                     */
                    int64_t GetQuotaConsumer() const;

                    /**
                     * 设置1 indicates the quota consumer
                     * @param _quotaConsumer 1 indicates the quota consumer
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
                     * 获取Number of enabled Admin/Delegated Admin accounts
                     * @return EnableAdminCount Number of enabled Admin/Delegated Admin accounts
                     * 
                     */
                    int64_t GetEnableAdminCount() const;

                    /**
                     * 设置Number of enabled Admin/Delegated Admin accounts
                     * @param _enableAdminCount Number of enabled Admin/Delegated Admin accounts
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
                     * 获取Multi-cloud account statistics in array format. Refer to the CloudCountDesc description for details.
                     * @return CloudCountDesc Multi-cloud account statistics in array format. Refer to the CloudCountDesc description for details.
                     * 
                     */
                    std::vector<CloudCountDesc> GetCloudCountDesc() const;

                    /**
                     * 设置Multi-cloud account statistics in array format. Refer to the CloudCountDesc description for details.
                     * @param _cloudCountDesc Multi-cloud account statistics in array format. Refer to the CloudCountDesc description for details.
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
                     * 获取Total Number of Admin/Delegated Admin Accounts
                     * @return AdminCount Total Number of Admin/Delegated Admin Accounts
                     * 
                     */
                    int64_t GetAdminCount() const;

                    /**
                     * 设置Total Number of Admin/Delegated Admin Accounts
                     * @param _adminCount Total Number of Admin/Delegated Admin Accounts
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
                     * Member account name
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Department node name, department of account
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Member/Admin/DelegatedAdmin/EntityAdmin; Member/Admin/DelegatedAdmin/EntityAdmin
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Member account id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * account joining method,create/invite
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Admin account name
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * Admin Uin
                     */
                    std::string m_adminUin;
                    bool m_adminUinHasBeenSet;

                    /**
                     * Creation Time
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
                     * Sub-account count
                     */
                    int64_t m_subAccountCount;
                    bool m_subAccountCountHasBeenSet;

                    /**
                     * Abnormal sub-account quantity
                     */
                    int64_t m_abnormalSubUserCount;
                    bool m_abnormalSubUserCountHasBeenSet;

                    /**
                     * Organization Relationship Policy Permissions
                     */
                    std::vector<std::string> m_groupPermission;
                    bool m_groupPermissionHasBeenSet;

                    /**
                     * Membership Policy Permissions
                     */
                    std::vector<std::string> m_memberPermission;
                    bool m_memberPermissionHasBeenSet;

                    /**
                     * Organization Billing Mode; 0/Self-paid, 1/Proxy-paid
                     */
                    int64_t m_groupPayMode;
                    bool m_groupPayModeHasBeenSet;

                    /**
                     * Personal Billing Mode; 0/Self-paid, 1/Proxy-paid
                     */
                    int64_t m_memberPayMode;
                    bool m_memberPayModeHasBeenSet;

                    /**
                     * If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     */
                    std::string m_cFWProtect;
                    bool m_cFWProtectHasBeenSet;

                    /**
                     * If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     */
                    std::string m_wAFProtect;
                    bool m_wAFProtectHasBeenSet;

                    /**
                     * If empty, it is not enabled; otherwise, different strings correspond to different versions, with 'common' being general and not version-specific.
                     */
                    std::string m_cWPProtect;
                    bool m_cWPProtectHasBeenSet;

                    /**
                     * Array of all departments
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
                     * 1 indicates the quota consumer
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * Number of enabled Admin/Delegated Admin accounts
                     */
                    int64_t m_enableAdminCount;
                    bool m_enableAdminCountHasBeenSet;

                    /**
                     * Multi-cloud account statistics in array format. Refer to the CloudCountDesc description for details.
                     */
                    std::vector<CloudCountDesc> m_cloudCountDesc;
                    bool m_cloudCountDescHasBeenSet;

                    /**
                     * Total Number of Admin/Delegated Admin Accounts
                     */
                    int64_t m_adminCount;
                    bool m_adminCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_
