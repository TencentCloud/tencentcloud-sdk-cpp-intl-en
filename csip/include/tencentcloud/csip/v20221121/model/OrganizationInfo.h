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
                * 
                */
                class OrganizationInfo : public AbstractModel
                {
                public:
                    OrganizationInfo();
                    ~OrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return NickName 
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置
                     * @param _nickName 
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
                     * 获取
                     * @return NodeName 
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置
                     * @param _nodeName 
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
                     * 获取
                     * @return Role 
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置
                     * @param _role 
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
                     * 获取
                     * @return MemberId 
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置
                     * @param _memberId 
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
                     * 获取
                     * @return JoinType 
                     * 
                     */
                    std::string GetJoinType() const;

                    /**
                     * 设置
                     * @param _joinType 
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
                     * 获取
                     * @return GroupName 
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置
                     * @param _groupName 
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
                     * 获取
                     * @return AdminName 
                     * 
                     */
                    std::string GetAdminName() const;

                    /**
                     * 设置
                     * @param _adminName 
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
                     * 获取
                     * @return AdminUin 
                     * 
                     */
                    std::string GetAdminUin() const;

                    /**
                     * 设置
                     * @param _adminUin 
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
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
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
                     * 获取
                     * @return NodeCount 
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置
                     * @param _nodeCount 
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
                     * 获取
                     * @return MemberCount 
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置
                     * @param _memberCount 
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
                     * 获取
                     * @return SubAccountCount 
                     * 
                     */
                    int64_t GetSubAccountCount() const;

                    /**
                     * 设置
                     * @param _subAccountCount 
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
                     * 获取
                     * @return AbnormalSubUserCount 
                     * 
                     */
                    int64_t GetAbnormalSubUserCount() const;

                    /**
                     * 设置
                     * @param _abnormalSubUserCount 
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
                     * 获取
                     * @return GroupPermission 
                     * 
                     */
                    std::vector<std::string> GetGroupPermission() const;

                    /**
                     * 设置
                     * @param _groupPermission 
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
                     * 获取
                     * @return MemberPermission 
                     * 
                     */
                    std::vector<std::string> GetMemberPermission() const;

                    /**
                     * 设置
                     * @param _memberPermission 
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
                     * 获取
                     * @return GroupPayMode 
                     * 
                     */
                    int64_t GetGroupPayMode() const;

                    /**
                     * 设置
                     * @param _groupPayMode 
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
                     * 获取
                     * @return MemberPayMode 
                     * 
                     */
                    int64_t GetMemberPayMode() const;

                    /**
                     * 设置
                     * @param _memberPayMode 
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
                     * 获取
                     * @return CFWProtect 
                     * 
                     */
                    std::string GetCFWProtect() const;

                    /**
                     * 设置
                     * @param _cFWProtect 
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
                     * 获取
                     * @return WAFProtect 
                     * 
                     */
                    std::string GetWAFProtect() const;

                    /**
                     * 设置
                     * @param _wAFProtect 
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
                     * 获取
                     * @return CWPProtect 
                     * 
                     */
                    std::string GetCWPProtect() const;

                    /**
                     * 设置
                     * @param _cWPProtect 
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
                     * 获取
                     * @return Departments 
                     * 
                     */
                    std::vector<std::string> GetDepartments() const;

                    /**
                     * 设置
                     * @param _departments 
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
                     * 获取
                     * @return MemberCreateTime 
                     * 
                     */
                    std::string GetMemberCreateTime() const;

                    /**
                     * 设置
                     * @param _memberCreateTime 
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
                     * 获取
                     * @return QuotaConsumer 
                     * 
                     */
                    int64_t GetQuotaConsumer() const;

                    /**
                     * 设置
                     * @param _quotaConsumer 
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
                     * 获取
                     * @return EnableAdminCount 
                     * 
                     */
                    int64_t GetEnableAdminCount() const;

                    /**
                     * 设置
                     * @param _enableAdminCount 
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
                     * 获取
                     * @return CloudCountDesc 
                     * 
                     */
                    std::vector<CloudCountDesc> GetCloudCountDesc() const;

                    /**
                     * 设置
                     * @param _cloudCountDesc 
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
                     * 获取
                     * @return AdminCount 
                     * 
                     */
                    int64_t GetAdminCount() const;

                    /**
                     * 设置
                     * @param _adminCount 
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
                     * 
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_adminName;
                    bool m_adminNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_adminUin;
                    bool m_adminUinHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_subAccountCount;
                    bool m_subAccountCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_abnormalSubUserCount;
                    bool m_abnormalSubUserCountHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_groupPermission;
                    bool m_groupPermissionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_memberPermission;
                    bool m_memberPermissionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_groupPayMode;
                    bool m_groupPayModeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_memberPayMode;
                    bool m_memberPayModeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cFWProtect;
                    bool m_cFWProtectHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wAFProtect;
                    bool m_wAFProtectHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cWPProtect;
                    bool m_cWPProtectHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_departments;
                    bool m_departmentsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_memberCreateTime;
                    bool m_memberCreateTimeHasBeenSet;

                    /**
                     * Advanced/Enterprise/Ultimate 
                     */
                    std::string m_cSIPProtect;
                    bool m_cSIPProtectHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_enableAdminCount;
                    bool m_enableAdminCountHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<CloudCountDesc> m_cloudCountDesc;
                    bool m_cloudCountDescHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_adminCount;
                    bool m_adminCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONINFO_H_
