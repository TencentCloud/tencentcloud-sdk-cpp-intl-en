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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenPlanPackageInfo.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token Plan package option
                */
                class TokenPlanListItem : public AbstractModel
                {
                public:
                    TokenPlanListItem();
                    ~TokenPlanListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Package ID.</p>
                     * @return TeamId <p>Package ID.</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>Package ID.</p>
                     * @param _teamId <p>Package ID.</p>
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取<p>Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)</p>
                     * @return ProductType <p>Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)</p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)</p>
                     * @param _productType <p>Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)</p>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>Package name. Maximum 128 characters.</p>
                     * @return Name <p>Package name. Maximum 128 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Package name. Maximum 128 characters.</p>
                     * @param _name <p>Package name. Maximum 128 characters.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Account APP ID.</p>
                     * @return AppId <p>Account APP ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Account APP ID.</p>
                     * @param _appId <p>Account APP ID.</p>
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
                     * 获取<p>Main account UIN.</p>
                     * @return Uin <p>Main account UIN.</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Main account UIN.</p>
                     * @param _uin <p>Main account UIN.</p>
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
                     * 获取<p>Package status. Valid values: enable, disable.</p>
                     * @return Status <p>Package status. Valid values: enable, disable.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Package status. Valid values: enable, disable.</p>
                     * @param _status <p>Package status. Valid values: enable, disable.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Reason for package disablement. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED</p>
                     * @return StopReason <p>Reason for package disablement. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED</p>
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置<p>Reason for package disablement. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED</p>
                     * @param _stopReason <p>Reason for package disablement. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED</p>
                     * 
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of API Keys that can be created.</p>
                     * @return ApiKeyMax <p>Maximum number of API Keys that can be created.</p>
                     * 
                     */
                    int64_t GetApiKeyMax() const;

                    /**
                     * 设置<p>Maximum number of API Keys that can be created.</p>
                     * @param _apiKeyMax <p>Maximum number of API Keys that can be created.</p>
                     * 
                     */
                    void SetApiKeyMax(const int64_t& _apiKeyMax);

                    /**
                     * 判断参数 ApiKeyMax 是否已赋值
                     * @return ApiKeyMax 是否已赋值
                     * 
                     */
                    bool ApiKeyMaxHasBeenSet() const;

                    /**
                     * 获取<p>Number of API Keys currently created</p>
                     * @return ApiKeyCount <p>Number of API Keys currently created</p>
                     * 
                     */
                    int64_t GetApiKeyCount() const;

                    /**
                     * 设置<p>Number of API Keys currently created</p>
                     * @param _apiKeyCount <p>Number of API Keys currently created</p>
                     * 
                     */
                    void SetApiKeyCount(const int64_t& _apiKeyCount);

                    /**
                     * 判断参数 ApiKeyCount 是否已赋值
                     * @return ApiKeyCount 是否已赋值
                     * 
                     */
                    bool ApiKeyCountHasBeenSet() const;

                    /**
                     * 获取<p>Cloud billing prepaid resource package ID.</p>
                     * @return PrepayResourceID <p>Cloud billing prepaid resource package ID.</p>
                     * 
                     */
                    std::string GetPrepayResourceID() const;

                    /**
                     * 设置<p>Cloud billing prepaid resource package ID.</p>
                     * @param _prepayResourceID <p>Cloud billing prepaid resource package ID.</p>
                     * 
                     */
                    void SetPrepayResourceID(const std::string& _prepayResourceID);

                    /**
                     * 判断参数 PrepayResourceID 是否已赋值
                     * @return PrepayResourceID 是否已赋值
                     * 
                     */
                    bool PrepayResourceIDHasBeenSet() const;

                    /**
                     * 获取<p>Creator. If the package is created by a sub-account, this value is the sub-account UIN.</p>
                     * @return Creator <p>Creator. If the package is created by a sub-account, this value is the sub-account UIN.</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>Creator. If the package is created by a sub-account, this value is the sub-account UIN.</p>
                     * @param _creator <p>Creator. If the package is created by a sub-account, this value is the sub-account UIN.</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreatedAt <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createdAt <p>Creation time.</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdatedAt <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updatedAt <p>Update time.</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Basic information of the package.</p>
                     * @return PackageInfo <p>Basic information of the package.</p>
                     * 
                     */
                    TokenPlanPackageInfo GetPackageInfo() const;

                    /**
                     * 设置<p>Basic information of the package.</p>
                     * @param _packageInfo <p>Basic information of the package.</p>
                     * 
                     */
                    void SetPackageInfo(const TokenPlanPackageInfo& _packageInfo);

                    /**
                     * 判断参数 PackageInfo 是否已赋值
                     * @return PackageInfo 是否已赋值
                     * 
                     */
                    bool PackageInfoHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable auto-renewal. Value: 0 (not enabled), 1 (enabled)</p>
                     * @return AutoRenewFlag <p>Whether to enable auto-renewal. Value: 0 (not enabled), 1 (enabled)</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Whether to enable auto-renewal. Value: 0 (not enabled), 1 (enabled)</p>
                     * @param _autoRenewFlag <p>Whether to enable auto-renewal. Value: 0 (not enabled), 1 (enabled)</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>Package ID.</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)</p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>Package name. Maximum 128 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Account APP ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Main account UIN.</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Package status. Valid values: enable, disable.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Reason for package disablement. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED</p>
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * <p>Maximum number of API Keys that can be created.</p>
                     */
                    int64_t m_apiKeyMax;
                    bool m_apiKeyMaxHasBeenSet;

                    /**
                     * <p>Number of API Keys currently created</p>
                     */
                    int64_t m_apiKeyCount;
                    bool m_apiKeyCountHasBeenSet;

                    /**
                     * <p>Cloud billing prepaid resource package ID.</p>
                     */
                    std::string m_prepayResourceID;
                    bool m_prepayResourceIDHasBeenSet;

                    /**
                     * <p>Creator. If the package is created by a sub-account, this value is the sub-account UIN.</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>Basic information of the package.</p>
                     */
                    TokenPlanPackageInfo m_packageInfo;
                    bool m_packageInfoHasBeenSet;

                    /**
                     * <p>Whether to enable auto-renewal. Value: 0 (not enabled), 1 (enabled)</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_
