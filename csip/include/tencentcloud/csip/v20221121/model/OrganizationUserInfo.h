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
                * 
                */
                class OrganizationUserInfo : public AbstractModel
                {
                public:
                    OrganizationUserInfo();
                    ~OrganizationUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Uin 
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置
                     * @param _uin 
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
                     * @return AssetCount 
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置
                     * @param _assetCount 
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
                     * 获取
                     * @return RiskCount 
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置
                     * @param _riskCount 
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
                     * 获取
                     * @return AttackCount 
                     * 
                     */
                    int64_t GetAttackCount() const;

                    /**
                     * 设置
                     * @param _attackCount 
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
                     * @return AppId 
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置
                     * @param _appId 
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
                     * @return Enable 
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置
                     * @param _enable 
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
                     * 获取
                     * @return CSIPProtect 
                     * 
                     */
                    std::string GetCSIPProtect() const;

                    /**
                     * 设置
                     * @param _cSIPProtect 
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
                     * @return CloudType 
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置
                     * @param _cloudType 
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
                     * 获取
                     * @return SyncFrequency 
                     * 
                     */
                    int64_t GetSyncFrequency() const;

                    /**
                     * 设置
                     * @param _syncFrequency 
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
                     * 获取
                     * @return IsExpired 
                     * 
                     */
                    bool GetIsExpired() const;

                    /**
                     * 设置
                     * @param _isExpired 
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
                     * 获取
                     * @return PermissionList 
                     * 
                     */
                    std::vector<std::string> GetPermissionList() const;

                    /**
                     * 设置
                     * @param _permissionList 
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
                     * 获取
                     * @return TcMemberType 
                     * 
                     */
                    int64_t GetTcMemberType() const;

                    /**
                     * 设置
                     * @param _tcMemberType 
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
                     * 获取
                     * @return SubUserCount 
                     * 
                     */
                    int64_t GetSubUserCount() const;

                    /**
                     * 设置
                     * @param _subUserCount 
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
                     * 获取
                     * @return JoinTypeInfo 
                     * 
                     */
                    std::string GetJoinTypeInfo() const;

                    /**
                     * 设置
                     * @param _joinTypeInfo 
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
                     * 
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

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
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

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
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_joinType;
                    bool m_joinTypeHasBeenSet;

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
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 
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
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_syncFrequency;
                    bool m_syncFrequencyHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isExpired;
                    bool m_isExpiredHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_permissionList;
                    bool m_permissionListHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_tcMemberType;
                    bool m_tcMemberTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_subUserCount;
                    bool m_subUserCountHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_joinTypeInfo;
                    bool m_joinTypeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORGANIZATIONUSERINFO_H_
