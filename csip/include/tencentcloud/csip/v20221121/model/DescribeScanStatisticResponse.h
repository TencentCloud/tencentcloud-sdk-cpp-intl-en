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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANSTATISTICRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANSTATISTICRESPONSE_H_

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
                * DescribeScanStatistic response structure.
                */
                class DescribeScanStatisticResponse : public AbstractModel
                {
                public:
                    DescribeScanStatisticResponse();
                    ~DescribeScanStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Port service quantity.
                     * @return PortServiceCount Port service quantity.
                     * 
                     */
                    uint64_t GetPortServiceCount() const;

                    /**
                     * 判断参数 PortServiceCount 是否已赋值
                     * @return PortServiceCount 是否已赋值
                     * 
                     */
                    bool PortServiceCountHasBeenSet() const;

                    /**
                     * 获取Number of Web services.
                     * @return WebAppCount Number of Web services.
                     * 
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 判断参数 WebAppCount 是否已赋值
                     * @return WebAppCount 是否已赋值
                     * 
                     */
                    bool WebAppCountHasBeenSet() const;

                    /**
                     * 获取Weak Password Risk Count
                     * @return WeakPasswordCount Weak Password Risk Count
                     * 
                     */
                    uint64_t GetWeakPasswordCount() const;

                    /**
                     * 判断参数 WeakPasswordCount 是否已赋值
                     * @return WeakPasswordCount 是否已赋值
                     * 
                     */
                    bool WeakPasswordCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability risk quantity.
                     * @return VulCount Vulnerability risk quantity.
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取High-Risk port service quantity.
                     * @return HighRiskPortServiceCount High-Risk port service quantity.
                     * 
                     */
                    uint64_t GetHighRiskPortServiceCount() const;

                    /**
                     * 判断参数 HighRiskPortServiceCount 是否已赋值
                     * @return HighRiskPortServiceCount 是否已赋值
                     * 
                     */
                    bool HighRiskPortServiceCountHasBeenSet() const;

                    /**
                     * 获取Number of Web services at risk.
                     * @return RiskWebAppCount Number of Web services at risk.
                     * 
                     */
                    uint64_t GetRiskWebAppCount() const;

                    /**
                     * 判断参数 RiskWebAppCount 是否已赋值
                     * @return RiskWebAppCount 是否已赋值
                     * 
                     */
                    bool RiskWebAppCountHasBeenSet() const;

                    /**
                     * 获取Newly-Added port services in the last 7 days.
                     * @return PortServiceIncrement Newly-Added port services in the last 7 days.
                     * 
                     */
                    uint64_t GetPortServiceIncrement() const;

                    /**
                     * 判断参数 PortServiceIncrement 是否已赋值
                     * @return PortServiceIncrement 是否已赋值
                     * 
                     */
                    bool PortServiceIncrementHasBeenSet() const;

                    /**
                     * 获取Newly-Added Web services in the last 7 days.
                     * @return WebAppIncrement Newly-Added Web services in the last 7 days.
                     * 
                     */
                    uint64_t GetWebAppIncrement() const;

                    /**
                     * 判断参数 WebAppIncrement 是否已赋值
                     * @return WebAppIncrement 是否已赋值
                     * 
                     */
                    bool WebAppIncrementHasBeenSet() const;

                private:

                    /**
                     * Port service quantity.
                     */
                    uint64_t m_portServiceCount;
                    bool m_portServiceCountHasBeenSet;

                    /**
                     * Number of Web services.
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * Weak Password Risk Count
                     */
                    uint64_t m_weakPasswordCount;
                    bool m_weakPasswordCountHasBeenSet;

                    /**
                     * Vulnerability risk quantity.
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * High-Risk port service quantity.
                     */
                    uint64_t m_highRiskPortServiceCount;
                    bool m_highRiskPortServiceCountHasBeenSet;

                    /**
                     * Number of Web services at risk.
                     */
                    uint64_t m_riskWebAppCount;
                    bool m_riskWebAppCountHasBeenSet;

                    /**
                     * Newly-Added port services in the last 7 days.
                     */
                    uint64_t m_portServiceIncrement;
                    bool m_portServiceIncrementHasBeenSet;

                    /**
                     * Newly-Added Web services in the last 7 days.
                     */
                    uint64_t m_webAppIncrement;
                    bool m_webAppIncrementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANSTATISTICRESPONSE_H_
