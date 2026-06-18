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
                * Sub-account Details
                */
                class SubUserInfo : public AbstractModel
                {
                public:
                    SubUserInfo();
                    ~SubUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Primary key ID, with no business significance, only serves as a unique key.</p>
                     * @return ID <p>Primary key ID, with no business significance, only serves as a unique key.</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Primary key ID, with no business significance, only serves as a unique key.</p>
                     * @param _iD <p>Primary key ID, with no business significance, only serves as a unique key.</p>
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
                     * 获取<p>Sub-account Appid</p>
                     * @return AppID <p>Sub-account Appid</p>
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置<p>Sub-account Appid</p>
                     * @param _appID <p>Sub-account Appid</p>
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
                     * 获取<p>Sub-account UIn</p>
                     * @return Uin <p>Sub-account UIn</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Sub-account UIn</p>
                     * @param _uin <p>Sub-account UIn</p>
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
                     * 获取<p>Sub-account name</p>
                     * @return NickName <p>Sub-account name</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Sub-account name</p>
                     * @param _nickName <p>Sub-account name</p>
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
                     * 获取<p>Root Account Appid</p>
                     * @return OwnerAppID <p>Root Account Appid</p>
                     * 
                     */
                    std::string GetOwnerAppID() const;

                    /**
                     * 设置<p>Root Account Appid</p>
                     * @param _ownerAppID <p>Root Account Appid</p>
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
                     * 获取<p>Root account Uin</p>
                     * @return OwnerUin <p>Root account Uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Root account Uin</p>
                     * @param _ownerUin <p>Root account Uin</p>
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
                     * 获取<p>Root account name</p>
                     * @return OwnerNickName <p>Root account name</p>
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置<p>Root account name</p>
                     * @param _ownerNickName <p>Root account name</p>
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
                     * 获取<p>Member ID information belonging to main account</p>
                     * @return OwnerMemberID <p>Member ID information belonging to main account</p>
                     * 
                     */
                    std::string GetOwnerMemberID() const;

                    /**
                     * 设置<p>Member ID information belonging to main account</p>
                     * @param _ownerMemberID <p>Member ID information belonging to main account</p>
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
                     * 获取<p>Account type. 0 indicates a Tencent Cloud account, and 1 indicates an AWS account.</p>
                     * @return CloudType <p>Account type. 0 indicates a Tencent Cloud account, and 1 indicates an AWS account.</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>Account type. 0 indicates a Tencent Cloud account, and 1 indicates an AWS account.</p>
                     * @param _cloudType <p>Account type. 0 indicates a Tencent Cloud account, and 1 indicates an AWS account.</p>
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
                     * 获取<p>Number of accessible services</p>
                     * @return ServiceCount <p>Number of accessible services</p>
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置<p>Number of accessible services</p>
                     * @param _serviceCount <p>Number of accessible services</p>
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
                     * 获取<p>Number of accessible APIs</p>
                     * @return InterfaceCount <p>Number of accessible APIs</p>
                     * 
                     */
                    int64_t GetInterfaceCount() const;

                    /**
                     * 设置<p>Number of accessible APIs</p>
                     * @param _interfaceCount <p>Number of accessible APIs</p>
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
                     * 获取<p>Number of accessible resources</p>
                     * @return AssetCount <p>Number of accessible resources</p>
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置<p>Number of accessible resources</p>
                     * @param _assetCount <p>Number of accessible resources</p>
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
                     * 获取<p>Number of access/behavior logs</p>
                     * @return LogCount <p>Number of access/behavior logs</p>
                     * 
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置<p>Number of access/behavior logs</p>
                     * @param _logCount <p>Number of access/behavior logs</p>
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
                     * 获取<p>Permission configuration risk</p>
                     * @return ConfigRiskCount <p>Permission configuration risk</p>
                     * 
                     */
                    int64_t GetConfigRiskCount() const;

                    /**
                     * 设置<p>Permission configuration risk</p>
                     * @param _configRiskCount <p>Permission configuration risk</p>
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
                     * 获取<p>Dangerous behavior alarm</p>
                     * @return ActionRiskCount <p>Dangerous behavior alarm</p>
                     * 
                     */
                    int64_t GetActionRiskCount() const;

                    /**
                     * 设置<p>Dangerous behavior alarm</p>
                     * @param _actionRiskCount <p>Dangerous behavior alarm</p>
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
                     * 获取<p>Whether to access operation audit log</p>
                     * @return IsAccessCloudAudit <p>Whether to access operation audit log</p>
                     * 
                     */
                    bool GetIsAccessCloudAudit() const;

                    /**
                     * 设置<p>Whether to access operation audit log</p>
                     * @param _isAccessCloudAudit <p>Whether to access operation audit log</p>
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
                     * 获取<p>Security check for configuration risk required or not</p>
                     * @return IsAccessCheck <p>Security check for configuration risk required or not</p>
                     * 
                     */
                    bool GetIsAccessCheck() const;

                    /**
                     * 设置<p>Security check for configuration risk required or not</p>
                     * @param _isAccessCheck <p>Security check for configuration risk required or not</p>
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
                     * 获取<p>Whether configure user behavior management policy</p>
                     * @return IsAccessUeba <p>Whether configure user behavior management policy</p>
                     * 
                     */
                    bool GetIsAccessUeba() const;

                    /**
                     * 设置<p>Whether configure user behavior management policy</p>
                     * @param _isAccessUeba <p>Whether configure user behavior management policy</p>
                     * 
                     */
                    void SetIsAccessUeba(const bool& _isAccessUeba);

                    /**
                     * 判断参数 IsAccessUeba 是否已赋值
                     * @return IsAccessUeba 是否已赋值
                     * 
                     */
                    bool IsAccessUebaHasBeenSet() const;

                    /**
                     * 获取<p>Creation time (Unix timestamp).</p>
                     * @return CreateTime <p>Creation time (Unix timestamp).</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time (Unix timestamp).</p>
                     * @param _createTime <p>Creation time (Unix timestamp).</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Primary key ID, with no business significance, only serves as a unique key.</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Sub-account Appid</p>
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Sub-account UIn</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Sub-account name</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>Root Account Appid</p>
                     */
                    std::string m_ownerAppID;
                    bool m_ownerAppIDHasBeenSet;

                    /**
                     * <p>Root account Uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Root account name</p>
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * <p>Member ID information belonging to main account</p>
                     */
                    std::string m_ownerMemberID;
                    bool m_ownerMemberIDHasBeenSet;

                    /**
                     * <p>Account type. 0 indicates a Tencent Cloud account, and 1 indicates an AWS account.</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>Number of accessible services</p>
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>Number of accessible APIs</p>
                     */
                    int64_t m_interfaceCount;
                    bool m_interfaceCountHasBeenSet;

                    /**
                     * <p>Number of accessible resources</p>
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>Number of access/behavior logs</p>
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * <p>Permission configuration risk</p>
                     */
                    int64_t m_configRiskCount;
                    bool m_configRiskCountHasBeenSet;

                    /**
                     * <p>Dangerous behavior alarm</p>
                     */
                    int64_t m_actionRiskCount;
                    bool m_actionRiskCountHasBeenSet;

                    /**
                     * <p>Whether to access operation audit log</p>
                     */
                    bool m_isAccessCloudAudit;
                    bool m_isAccessCloudAuditHasBeenSet;

                    /**
                     * <p>Security check for configuration risk required or not</p>
                     */
                    bool m_isAccessCheck;
                    bool m_isAccessCheckHasBeenSet;

                    /**
                     * <p>Whether configure user behavior management policy</p>
                     */
                    bool m_isAccessUeba;
                    bool m_isAccessUebaHasBeenSet;

                    /**
                     * <p>Creation time (Unix timestamp).</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
