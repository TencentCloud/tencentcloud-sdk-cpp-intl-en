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
                * 
                */
                class SubUserInfo : public AbstractModel
                {
                public:
                    SubUserInfo();
                    ~SubUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ID 
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置
                     * @param _iD 
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
                     * 获取
                     * @return AppID 
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置
                     * @param _appID 
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
                     * @return OwnerAppID 
                     * 
                     */
                    std::string GetOwnerAppID() const;

                    /**
                     * 设置
                     * @param _ownerAppID 
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
                     * 获取
                     * @return OwnerUin 
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置
                     * @param _ownerUin 
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
                     * 获取
                     * @return OwnerNickName 
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置
                     * @param _ownerNickName 
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
                     * 获取
                     * @return OwnerMemberID 
                     * 
                     */
                    std::string GetOwnerMemberID() const;

                    /**
                     * 设置
                     * @param _ownerMemberID 
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
                     * @return ServiceCount 
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置
                     * @param _serviceCount 
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
                     * 获取
                     * @return InterfaceCount 
                     * 
                     */
                    int64_t GetInterfaceCount() const;

                    /**
                     * 设置
                     * @param _interfaceCount 
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
                     * @return LogCount 
                     * 
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置
                     * @param _logCount 
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
                     * 获取
                     * @return ConfigRiskCount 
                     * 
                     */
                    int64_t GetConfigRiskCount() const;

                    /**
                     * 设置
                     * @param _configRiskCount 
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
                     * 获取
                     * @return ActionRiskCount 
                     * 
                     */
                    int64_t GetActionRiskCount() const;

                    /**
                     * 设置
                     * @param _actionRiskCount 
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
                     * 获取
                     * @return IsAccessCloudAudit 
                     * 
                     */
                    bool GetIsAccessCloudAudit() const;

                    /**
                     * 设置
                     * @param _isAccessCloudAudit 
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
                     * 获取
                     * @return IsAccessCheck 
                     * 
                     */
                    bool GetIsAccessCheck() const;

                    /**
                     * 设置
                     * @param _isAccessCheck 
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
                     * 获取
                     * @return IsAccessUeba 
                     * 
                     */
                    bool GetIsAccessUeba() const;

                    /**
                     * 设置
                     * @param _isAccessUeba 
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
                     * 
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

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
                    std::string m_ownerAppID;
                    bool m_ownerAppIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ownerMemberID;
                    bool m_ownerMemberIDHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_interfaceCount;
                    bool m_interfaceCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_configRiskCount;
                    bool m_configRiskCountHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_actionRiskCount;
                    bool m_actionRiskCountHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isAccessCloudAudit;
                    bool m_isAccessCloudAuditHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isAccessCheck;
                    bool m_isAccessCheckHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isAccessUeba;
                    bool m_isAccessUebaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
