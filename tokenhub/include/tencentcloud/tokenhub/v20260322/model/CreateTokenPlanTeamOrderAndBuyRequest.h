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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateTokenPlanTeamOrderAndBuy request structure.
                */
                class CreateTokenPlanTeamOrderAndBuyRequest : public AbstractModel
                {
                public:
                    CreateTokenPlanTeamOrderAndBuyRequest();
                    ~CreateTokenPlanTeamOrderAndBuyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Package type. Value: enterprise (enterprise edition professional package), enterprise-auto (enterprise edition lite package).</p>
                     * @return ProductType <p>Package type. Value: enterprise (enterprise edition professional package), enterprise-auto (enterprise edition lite package).</p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>Package type. Value: enterprise (enterprise edition professional package), enterprise-auto (enterprise edition lite package).</p>
                     * @param _productType <p>Package type. Value: enterprise (enterprise edition professional package), enterprise-auto (enterprise edition lite package).</p>
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
                     * 获取<p>Package name. It can only contain Chinese, letters, digits, underscores, and hyphens. It must start with a Chinese character or a letter and end with a Chinese character, letter, or digit. The length should be 2-50 characters.</p>
                     * @return TeamName <p>Package name. It can only contain Chinese, letters, digits, underscores, and hyphens. It must start with a Chinese character or a letter and end with a Chinese character, letter, or digit. The length should be 2-50 characters.</p>
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置<p>Package name. It can only contain Chinese, letters, digits, underscores, and hyphens. It must start with a Chinese character or a letter and end with a Chinese character, letter, or digit. The length should be 2-50 characters.</p>
                     * @param _teamName <p>Package name. It can only contain Chinese, letters, digits, underscores, and hyphens. It must start with a Chinese character or a letter and end with a Chinese character, letter, or digit. The length should be 2-50 characters.</p>
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取<p>Purchase duration. Unit: Month. It must be greater than 0, supporting 1 to 12 months.</p>
                     * @return TimeSpan <p>Purchase duration. Unit: Month. It must be greater than 0, supporting 1 to 12 months.</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Purchase duration. Unit: Month. It must be greater than 0, supporting 1 to 12 months.</p>
                     * @param _timeSpan <p>Purchase duration. Unit: Month. It must be greater than 0, supporting 1 to 12 months.</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>Specification of the purchased package. If the package type is enterprise, the measurement unit is point; if the package type is enterprise-auto, the measurement unit is tokens.</p>
                     * @return CreditOrToken <p>Specification of the purchased package. If the package type is enterprise, the measurement unit is point; if the package type is enterprise-auto, the measurement unit is tokens.</p>
                     * 
                     */
                    int64_t GetCreditOrToken() const;

                    /**
                     * 设置<p>Specification of the purchased package. If the package type is enterprise, the measurement unit is point; if the package type is enterprise-auto, the measurement unit is tokens.</p>
                     * @param _creditOrToken <p>Specification of the purchased package. If the package type is enterprise, the measurement unit is point; if the package type is enterprise-auto, the measurement unit is tokens.</p>
                     * 
                     */
                    void SetCreditOrToken(const int64_t& _creditOrToken);

                    /**
                     * 判断参数 CreditOrToken 是否已赋值
                     * @return CreditOrToken 是否已赋值
                     * 
                     */
                    bool CreditOrTokenHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable auto-renewal. Not enabled by default.</p>
                     * @return EnableAutoRenew <p>Whether to enable auto-renewal. Not enabled by default.</p>
                     * 
                     */
                    bool GetEnableAutoRenew() const;

                    /**
                     * 设置<p>Whether to enable auto-renewal. Not enabled by default.</p>
                     * @param _enableAutoRenew <p>Whether to enable auto-renewal. Not enabled by default.</p>
                     * 
                     */
                    void SetEnableAutoRenew(const bool& _enableAutoRenew);

                    /**
                     * 判断参数 EnableAutoRenew 是否已赋值
                     * @return EnableAutoRenew 是否已赋值
                     * 
                     */
                    bool EnableAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Existing package ID (if not empty, the renewal process is performed; if empty, a new purchase is performed)</p>
                     * @return TeamId <p>Existing package ID (if not empty, the renewal process is performed; if empty, a new purchase is performed)</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>Existing package ID (if not empty, the renewal process is performed; if empty, a new purchase is performed)</p>
                     * @param _teamId <p>Existing package ID (if not empty, the renewal process is performed; if empty, a new purchase is performed)</p>
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                private:

                    /**
                     * <p>Package type. Value: enterprise (enterprise edition professional package), enterprise-auto (enterprise edition lite package).</p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>Package name. It can only contain Chinese, letters, digits, underscores, and hyphens. It must start with a Chinese character or a letter and end with a Chinese character, letter, or digit. The length should be 2-50 characters.</p>
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * <p>Purchase duration. Unit: Month. It must be greater than 0, supporting 1 to 12 months.</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Specification of the purchased package. If the package type is enterprise, the measurement unit is point; if the package type is enterprise-auto, the measurement unit is tokens.</p>
                     */
                    int64_t m_creditOrToken;
                    bool m_creditOrTokenHasBeenSet;

                    /**
                     * <p>Whether to enable auto-renewal. Not enabled by default.</p>
                     */
                    bool m_enableAutoRenew;
                    bool m_enableAutoRenewHasBeenSet;

                    /**
                     * <p>Existing package ID (if not empty, the renewal process is performed; if empty, a new purchase is performed)</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYREQUEST_H_
