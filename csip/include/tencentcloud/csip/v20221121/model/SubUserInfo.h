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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_

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
                * Sub-account details
                */
                class SubUserInfo : public AbstractModel
                {
                public:
                    SubUserInfo();
                    ~SubUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary key ID, which has no business meaning and serves solely as a unique identifier
                     * @return ID Primary key ID, which has no business meaning and serves solely as a unique identifier
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Primary key ID, which has no business meaning and serves solely as a unique identifier
                     * @param _iD Primary key ID, which has no business meaning and serves solely as a unique identifier
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取sub-account Appid
                     * @return AppID sub-account Appid
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置sub-account Appid
                     * @param _appID sub-account Appid
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取sub-account UIn
                     * @return Uin sub-account UIn
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置sub-account UIn
                     * @param _uin sub-account UIn
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
                     * 获取Sub-account name
                     * @return NickName Sub-account name
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Sub-account name
                     * @param _nickName Sub-account name
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
                     * 获取master account Appid
                     * @return OwnerAppID master account Appid
                     * 
                     */
                    std::string GetOwnerAppID() const;

                    /**
                     * 设置master account Appid
                     * @param _ownerAppID master account Appid
                     * 
                     */
                    void SetOwnerAppID(const std::string& _ownerAppID);

                    /**
                     * 判断参数 OwnerAppID 是否已赋值
                     * @return OwnerAppID 是否已赋值
                     * 
                     */
                    bool OwnerAppIDHasBeenSet() const;

                    /**
                     * 获取master account Uin
                     * @return OwnerUin master account Uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置master account Uin
                     * @param _ownerUin master account Uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取master account name
                     * @return OwnerNickName master account name
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置master account name
                     * @param _ownerNickName master account name
                     * 
                     */
                    void SetOwnerNickName(const std::string& _ownerNickName);

                    /**
                     * 判断参数 OwnerNickName 是否已赋值
                     * @return OwnerNickName 是否已赋值
                     * 
                     */
                    bool OwnerNickNameHasBeenSet() const;

                    /**
                     * 获取master account's memberId information
                     * @return OwnerMemberID master account's memberId information
                     * 
                     */
                    std::string GetOwnerMemberID() const;

                    /**
                     * 设置master account's memberId information
                     * @param _ownerMemberID master account's memberId information
                     * 
                     */
                    void SetOwnerMemberID(const std::string& _ownerMemberID);

                    /**
                     * 判断参数 OwnerMemberID 是否已赋值
                     * @return OwnerMemberID 是否已赋值
                     * 
                     */
                    bool OwnerMemberIDHasBeenSet() const;

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
                     * 获取Accessible services count
                     * @return ServiceCount Accessible services count
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置Accessible services count
                     * @param _serviceCount Accessible services count
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Accessible API count
                     * @return InterfaceCount Accessible API count
                     * 
                     */
                    int64_t GetInterfaceCount() const;

                    /**
                     * 设置Accessible API count
                     * @param _interfaceCount Accessible API count
                     * 
                     */
                    void SetInterfaceCount(const int64_t& _interfaceCount);

                    /**
                     * 判断参数 InterfaceCount 是否已赋值
                     * @return InterfaceCount 是否已赋值
                     * 
                     */
                    bool InterfaceCountHasBeenSet() const;

                    /**
                     * 获取Accessible resources count
                     * @return AssetCount Accessible resources count
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Accessible resources count
                     * @param _assetCount Accessible resources count
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
                     * 获取Access/Behavior Logs Count
                     * @return LogCount Access/Behavior Logs Count
                     * 
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置Access/Behavior Logs Count
                     * @param _logCount Access/Behavior Logs Count
                     * 
                     */
                    void SetLogCount(const int64_t& _logCount);

                    /**
                     * 判断参数 LogCount 是否已赋值
                     * @return LogCount 是否已赋值
                     * 
                     */
                    bool LogCountHasBeenSet() const;

                    /**
                     * 获取Permissions configuration risk
                     * @return ConfigRiskCount Permissions configuration risk
                     * 
                     */
                    int64_t GetConfigRiskCount() const;

                    /**
                     * 设置Permissions configuration risk
                     * @param _configRiskCount Permissions configuration risk
                     * 
                     */
                    void SetConfigRiskCount(const int64_t& _configRiskCount);

                    /**
                     * 判断参数 ConfigRiskCount 是否已赋值
                     * @return ConfigRiskCount 是否已赋值
                     * 
                     */
                    bool ConfigRiskCountHasBeenSet() const;

                    /**
                     * 获取Dangerous behavior alarm
                     * @return ActionRiskCount Dangerous behavior alarm
                     * 
                     */
                    int64_t GetActionRiskCount() const;

                    /**
                     * 设置Dangerous behavior alarm
                     * @param _actionRiskCount Dangerous behavior alarm
                     * 
                     */
                    void SetActionRiskCount(const int64_t& _actionRiskCount);

                    /**
                     * 判断参数 ActionRiskCount 是否已赋值
                     * @return ActionRiskCount 是否已赋值
                     * 
                     */
                    bool ActionRiskCountHasBeenSet() const;

                    /**
                     * 获取whether to enable CloudAudit logs
                     * @return IsAccessCloudAudit whether to enable CloudAudit logs
                     * 
                     */
                    bool GetIsAccessCloudAudit() const;

                    /**
                     * 设置whether to enable CloudAudit logs
                     * @param _isAccessCloudAudit whether to enable CloudAudit logs
                     * 
                     */
                    void SetIsAccessCloudAudit(const bool& _isAccessCloudAudit);

                    /**
                     * 判断参数 IsAccessCloudAudit 是否已赋值
                     * @return IsAccessCloudAudit 是否已赋值
                     * 
                     */
                    bool IsAccessCloudAuditHasBeenSet() const;

                    /**
                     * 获取whether risk configuration security assessment
                     * @return IsAccessCheck whether risk configuration security assessment
                     * 
                     */
                    bool GetIsAccessCheck() const;

                    /**
                     * 设置whether risk configuration security assessment
                     * @param _isAccessCheck whether risk configuration security assessment
                     * 
                     */
                    void SetIsAccessCheck(const bool& _isAccessCheck);

                    /**
                     * 判断参数 IsAccessCheck 是否已赋值
                     * @return IsAccessCheck 是否已赋值
                     * 
                     */
                    bool IsAccessCheckHasBeenSet() const;

                    /**
                     * 获取whether to configure user behavior management policies
                     * @return IsAccessUeba whether to configure user behavior management policies
                     * 
                     */
                    bool GetIsAccessUeba() const;

                    /**
                     * 设置whether to configure user behavior management policies
                     * @param _isAccessUeba whether to configure user behavior management policies
                     * 
                     */
                    void SetIsAccessUeba(const bool& _isAccessUeba);

                    /**
                     * 判断参数 IsAccessUeba 是否已赋值
                     * @return IsAccessUeba 是否已赋值
                     * 
                     */
                    bool IsAccessUebaHasBeenSet() const;

                private:

                    /**
                     * Primary key ID, which has no business meaning and serves solely as a unique identifier
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * sub-account Appid
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * sub-account UIn
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-account name
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * master account Appid
                     */
                    std::string m_ownerAppID;
                    bool m_ownerAppIDHasBeenSet;

                    /**
                     * master account Uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * master account name
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * master account's memberId information
                     */
                    std::string m_ownerMemberID;
                    bool m_ownerMemberIDHasBeenSet;

                    /**
                     * Account type: 0 for Tencent Cloud account, 1 for AWS account
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Accessible services count
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Accessible API count
                     */
                    int64_t m_interfaceCount;
                    bool m_interfaceCountHasBeenSet;

                    /**
                     * Accessible resources count
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Access/Behavior Logs Count
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * Permissions configuration risk
                     */
                    int64_t m_configRiskCount;
                    bool m_configRiskCountHasBeenSet;

                    /**
                     * Dangerous behavior alarm
                     */
                    int64_t m_actionRiskCount;
                    bool m_actionRiskCountHasBeenSet;

                    /**
                     * whether to enable CloudAudit logs
                     */
                    bool m_isAccessCloudAudit;
                    bool m_isAccessCloudAuditHasBeenSet;

                    /**
                     * whether risk configuration security assessment
                     */
                    bool m_isAccessCheck;
                    bool m_isAccessCheckHasBeenSet;

                    /**
                     * whether to configure user behavior management policies
                     */
                    bool m_isAccessUeba;
                    bool m_isAccessUebaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
