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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Group Account Member Details
                */
                class OrganizationUserInfo : public AbstractModel
                {
                public:
                    OrganizationUserInfo();
                    ~OrganizationUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Member account Uin
                     * @return Uin Member account Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Member account Uin
                     * @param _uin Member account Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取Asset Quantity
                     * @return AssetCount Asset Quantity
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Asset Quantity
                     * @param _assetCount Asset Quantity
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取Risk Quantity
                     * @return RiskCount Risk Quantity
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置Risk Quantity
                     * @param _riskCount Risk Quantity
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取Attack Quantity
                     * @return AttackCount Attack Quantity
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置Attack Quantity
                     * @param _attackCount Attack Quantity
                     * 
                     */
                    void SetAttackCount(const int64_t& _attackCount);

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取Member/Admin/;Member or Administrator
                     * @return Role Member/Admin/;Member or Administrator
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Member/Admin/;Member or Administrator
                     * @param _role Member/Admin/;Member or Administrator
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
                     * 获取Member account Appid
                     * @return AppId Member account Appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Member account Appid
                     * @param _appId Member account Appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取1 enable, 0 not enabled
                     * @return Enable 1 enable, 0 not enabled
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置1 enable, 0 not enabled
                     * @param _enable 1 enable, 0 not enabled
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取"Free"      
   //Free edition
   "Advanced"   //Advanced edition "Enterprise" //Enterprise edition "Ultimate"  
   //Ultimate edition
                     * @return CSIPProtect "Free"      
   //Free edition
   "Advanced"   //Advanced edition "Enterprise" //Enterprise edition "Ultimate"  
   //Ultimate edition
                     * 
                     */
                    std::string GetCSIPProtect() const;

                    /**
                     * 设置"Free"      
   //Free edition
   "Advanced"   //Advanced edition "Enterprise" //Enterprise edition "Ultimate"  
   //Ultimate edition
                     * @param _cSIPProtect "Free"      
   //Free edition
   "Advanced"   //Advanced edition "Enterprise" //Enterprise edition "Ultimate"  
   //Ultimate edition
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
                     * 获取Account type: 0 for Tencent Cloud account, 1 for AWS account
                     * @return CloudType Account type: 0 for Tencent Cloud account, 1 for AWS account
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Account type: 0 for Tencent Cloud account, 1 for AWS account
                     * @param _cloudType Account type: 0 for Tencent Cloud account, 1 for AWS account
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取0 indicates the default value; 1 indicates 10 minutes; 2 indicates 1 hour; 3 indicates 24 hours
                     * @return SyncFrequency 0 indicates the default value; 1 indicates 10 minutes; 2 indicates 1 hour; 3 indicates 24 hours
                     * 
                     */
                    int64_t GetSyncFrequency() const;

                    /**
                     * 设置0 indicates the default value; 1 indicates 10 minutes; 2 indicates 1 hour; 3 indicates 24 hours
                     * @param _syncFrequency 0 indicates the default value; 1 indicates 10 minutes; 2 indicates 1 hour; 3 indicates 24 hours
                     * 
                     */
                    void SetSyncFrequency(const int64_t& _syncFrequency);

                    /**
                     * 判断参数 SyncFrequency 是否已赋值
                     * @return SyncFrequency 是否已赋值
                     * 
                     */
                    bool SyncFrequencyHasBeenSet() const;

                    /**
                     * 获取Whether the multi-cloud account has expired
                     * @return IsExpired Whether the multi-cloud account has expired
                     * 
                     */
                    bool GetIsExpired() const;

                    /**
                     * 设置Whether the multi-cloud account has expired
                     * @param _isExpired Whether the multi-cloud account has expired
                     * 
                     */
                    void SetIsExpired(const bool& _isExpired);

                    /**
                     * 判断参数 IsExpired 是否已赋值
                     * @return IsExpired 是否已赋值
                     * 
                     */
                    bool IsExpiredHasBeenSet() const;

                    /**
                     * 获取Multi-cloud account permissions list
                     * @return PermissionList Multi-cloud account permissions list
                     * 
                     */
                    std::vector<std::string> GetPermissionList() const;

                    /**
                     * 设置Multi-cloud account permissions list
                     * @param _permissionList Multi-cloud account permissions list
                     * 
                     */
                    void SetPermissionList(const std::vector<std::string>& _permissionList);

                    /**
                     * 判断参数 PermissionList 是否已赋值
                     * @return PermissionList 是否已赋值
                     * 
                     */
                    bool PermissionListHasBeenSet() const;

                    /**
                     * 获取1
                     * @return AuthType 1
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置1
                     * @param _authType 1
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取0 Tencent Cloud group account
1 Tencent Cloud access account
2 non-Tencent Cloud
                     * @return TcMemberType 0 Tencent Cloud group account
1 Tencent Cloud access account
2 non-Tencent Cloud
                     * 
                     */
                    int64_t GetTcMemberType() const;

                    /**
                     * 设置0 Tencent Cloud group account
1 Tencent Cloud access account
2 non-Tencent Cloud
                     * @param _tcMemberType 0 Tencent Cloud group account
1 Tencent Cloud access account
2 non-Tencent Cloud
                     * 
                     */
                    void SetTcMemberType(const int64_t& _tcMemberType);

                    /**
                     * 判断参数 TcMemberType 是否已赋值
                     * @return TcMemberType 是否已赋值
                     * 
                     */
                    bool TcMemberTypeHasBeenSet() const;

                    /**
                     * 获取Sub-account count
                     * @return SubUserCount Sub-account count
                     * 
                     */
                    int64_t GetSubUserCount() const;

                    /**
                     * 设置Sub-account count
                     * @param _subUserCount Sub-account count
                     * 
                     */
                    void SetSubUserCount(const int64_t& _subUserCount);

                    /**
                     * 判断参数 SubUserCount 是否已赋值
                     * @return SubUserCount 是否已赋值
                     * 
                     */
                    bool SubUserCountHasBeenSet() const;

                    /**
                     * 获取Joining method details
                     * @return JoinTypeInfo Joining method details
                     * 
                     */
                    std::string GetJoinTypeInfo() const;

                    /**
                     * 设置Joining method details
                     * @param _joinTypeInfo Joining method details
                     * 
                     */
                    void SetJoinTypeInfo(const std::string& _joinTypeInfo);

                    /**
                     * 判断参数 JoinTypeInfo 是否已赋值
                     * @return JoinTypeInfo 是否已赋值
                     * 
                     */
                    bool JoinTypeInfoHasBeenSet() const;

                private:

                    /**
                     * Member account Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

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
                     * Asset Quantity
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Risk Quantity
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Attack Quantity
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * Member/Admin/;Member or Administrator
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Member account id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Member account Appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * account joining method,create/invite
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

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
                     * 1 enable, 0 not enabled
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * "Free"      
   //Free edition
   "Advanced"   //Advanced edition "Enterprise" //Enterprise edition "Ultimate"  
   //Ultimate edition
                     */
                    std::string m_cSIPProtect;
                    bool m_cSIPProtectHasBeenSet;

                    /**
                     * 1 indicates the quota consumer
                     */
                    int64_t m_quotaConsumer;
                    bool m_quotaConsumerHasBeenSet;

                    /**
                     * Account type: 0 for Tencent Cloud account, 1 for AWS account
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 0 indicates the default value; 1 indicates 10 minutes; 2 indicates 1 hour; 3 indicates 24 hours
                     */
                    int64_t m_syncFrequency;
                    bool m_syncFrequencyHasBeenSet;

                    /**
                     * Whether the multi-cloud account has expired
                     */
                    bool m_isExpired;
                    bool m_isExpiredHasBeenSet;

                    /**
                     * Multi-cloud account permissions list
                     */
                    std::vector<std::string> m_permissionList;
                    bool m_permissionListHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 0 Tencent Cloud group account
1 Tencent Cloud access account
2 non-Tencent Cloud
                     */
                    int64_t m_tcMemberType;
                    bool m_tcMemberTypeHasBeenSet;

                    /**
                     * Sub-account count
                     */
                    int64_t m_subUserCount;
                    bool m_subUserCountHasBeenSet;

                    /**
                     * Joining method details
                     */
                    std::string m_joinTypeInfo;
                    bool m_joinTypeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_
