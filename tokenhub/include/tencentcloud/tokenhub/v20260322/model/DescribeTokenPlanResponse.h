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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenPlanPackageInfo.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenSummary.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlan response structure.
                */
                class DescribeTokenPlanResponse : public AbstractModel
                {
                public:
                    DescribeTokenPlanResponse();
                    ~DescribeTokenPlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Package ID
                     * @return TeamId Package ID
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Package name.
                     * @return Name Package name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Root account APP ID.
                     * @return AppId Root account APP ID.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Main account UIN.
                     * @return Uin Main account UIN.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: enable, disable.
                     * @return Status Status. Valid values: enable, disable.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Disablement reason. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED.
                     * @return StopReason Disablement reason. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED.
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取Maximum number of API Keys that can be created.
                     * @return ApiKeyMax Maximum number of API Keys that can be created.
                     * 
                     */
                    int64_t GetApiKeyMax() const;

                    /**
                     * 判断参数 ApiKeyMax 是否已赋值
                     * @return ApiKeyMax 是否已赋值
                     * 
                     */
                    bool ApiKeyMaxHasBeenSet() const;

                    /**
                     * 获取Cloud billing prepaid resource package ID.
                     * @return PrepayResourceID Cloud billing prepaid resource package ID.
                     * 
                     */
                    std::string GetPrepayResourceID() const;

                    /**
                     * 判断参数 PrepayResourceID 是否已赋值
                     * @return PrepayResourceID 是否已赋值
                     * 
                     */
                    bool PrepayResourceIDHasBeenSet() const;

                    /**
                     * 获取Creator. Packages created by a sub-account show the sub-account UIN.
                     * @return Creator Creator. Packages created by a sub-account show the sub-account UIN.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedAt Creation time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Basic information of the package.
                     * @return PackageInfo Basic information of the package.
                     * 
                     */
                    TokenPlanPackageInfo GetPackageInfo() const;

                    /**
                     * 判断参数 PackageInfo 是否已赋值
                     * @return PackageInfo 是否已赋值
                     * 
                     */
                    bool PackageInfoHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Value: 0 (manual renewal), 1 (auto renewal), 2 (no automatic renewal). It is not returned if not bound to a prepaid resource.
                     * @return AutoRenewFlag Auto-renewal flag. Value: 0 (manual renewal), 1 (auto renewal), 2 (no automatic renewal). It is not returned if not bound to a prepaid resource.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Current number of created API Keys.
                     * @return ApiKeyCount Current number of created API Keys.
                     * 
                     */
                    int64_t GetApiKeyCount() const;

                    /**
                     * 判断参数 ApiKeyCount 是否已赋值
                     * @return ApiKeyCount 是否已赋值
                     * 
                     */
                    bool ApiKeyCountHasBeenSet() const;

                    /**
                     * 获取Token usage details in the current cycle
                     * @return TokenSummary Token usage details in the current cycle
                     * 
                     */
                    TokenSummary GetTokenSummary() const;

                    /**
                     * 判断参数 TokenSummary 是否已赋值
                     * @return TokenSummary 是否已赋值
                     * 
                     */
                    bool TokenSummaryHasBeenSet() const;

                    /**
                     * 获取Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)
                     * @return ProductType Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * Package ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Package name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Root account APP ID.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Main account UIN.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Status. Valid values: enable, disable.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Disablement reason. Value: NORMAL, ISOLATED, FROZEN, EXHAUSTED, DESTROYED.
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * Maximum number of API Keys that can be created.
                     */
                    int64_t m_apiKeyMax;
                    bool m_apiKeyMaxHasBeenSet;

                    /**
                     * Cloud billing prepaid resource package ID.
                     */
                    std::string m_prepayResourceID;
                    bool m_prepayResourceIDHasBeenSet;

                    /**
                     * Creator. Packages created by a sub-account show the sub-account UIN.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Basic information of the package.
                     */
                    TokenPlanPackageInfo m_packageInfo;
                    bool m_packageInfoHasBeenSet;

                    /**
                     * Auto-renewal flag. Value: 0 (manual renewal), 1 (auto renewal), 2 (no automatic renewal). It is not returned if not bound to a prepaid resource.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Current number of created API Keys.
                     */
                    int64_t m_apiKeyCount;
                    bool m_apiKeyCountHasBeenSet;

                    /**
                     * Token usage details in the current cycle
                     */
                    TokenSummary m_tokenSummary;
                    bool m_tokenSummaryHasBeenSet;

                    /**
                     * Package type. Values: enterprise (Enterprise Professional package), enterprise-auto (Enterprise Light package)
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANRESPONSE_H_
