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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRiskRuleDetail response structure.
                */
                class DescribeRiskRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeRiskRuleDetailResponse();
                    ~DescribeRiskRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Risk rule ID</p>
                     * @return RiskRuleId <p>Risk rule ID</p>
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Cloud vendor</p>
                     * @return Provider <p>Cloud vendor</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>Risk name</p>
                     * @return RiskName <p>Risk name</p>
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取<p>Risk damage</p>
                     * @return RiskInfluence <p>Risk damage</p>
                     * 
                     */
                    std::string GetRiskInfluence() const;

                    /**
                     * 判断参数 RiskInfluence 是否已赋值
                     * @return RiskInfluence 是否已赋值
                     * 
                     */
                    bool RiskInfluenceHasBeenSet() const;

                    /**
                     * 获取<p>Repair guidance</p>
                     * @return RiskFixAdvice <p>Repair guidance</p>
                     * 
                     */
                    std::string GetRiskFixAdvice() const;

                    /**
                     * 判断参数 RiskFixAdvice 是否已赋值
                     * @return RiskFixAdvice 是否已赋值
                     * 
                     */
                    bool RiskFixAdviceHasBeenSet() const;

                    /**
                     * 获取<p>Asset type</p>
                     * @return AssetType <p>Asset type</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Risk rule ID</p>
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * <p>Cloud vendor</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Risk name</p>
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * <p>Risk damage</p>
                     */
                    std::string m_riskInfluence;
                    bool m_riskInfluenceHasBeenSet;

                    /**
                     * <p>Repair guidance</p>
                     */
                    std::string m_riskFixAdvice;
                    bool m_riskFixAdviceHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_
