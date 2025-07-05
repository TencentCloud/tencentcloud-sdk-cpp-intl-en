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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETASKRESULTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETASKRESULTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeTaskResultSummary response structure.
                */
                class DescribeTaskResultSummaryResponse : public AbstractModel
                {
                public:
                    DescribeTaskResultSummaryResponse();
                    ~DescribeTaskResultSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of nodes affected by critical risks in the last seven days
                     * @return SeriousRiskNodeCount Number of nodes affected by critical risks in the last seven days
                     * 
                     */
                    std::vector<uint64_t> GetSeriousRiskNodeCount() const;

                    /**
                     * 判断参数 SeriousRiskNodeCount 是否已赋值
                     * @return SeriousRiskNodeCount 是否已赋值
                     * 
                     */
                    bool SeriousRiskNodeCountHasBeenSet() const;

                    /**
                     * 获取Number of nodes affected by high risks in the last seven days
                     * @return HighRiskNodeCount Number of nodes affected by high risks in the last seven days
                     * 
                     */
                    std::vector<uint64_t> GetHighRiskNodeCount() const;

                    /**
                     * 判断参数 HighRiskNodeCount 是否已赋值
                     * @return HighRiskNodeCount 是否已赋值
                     * 
                     */
                    bool HighRiskNodeCountHasBeenSet() const;

                    /**
                     * 获取Number of nodes affected by medium risks in the last seven days
                     * @return MiddleRiskNodeCount Number of nodes affected by medium risks in the last seven days
                     * 
                     */
                    std::vector<uint64_t> GetMiddleRiskNodeCount() const;

                    /**
                     * 判断参数 MiddleRiskNodeCount 是否已赋值
                     * @return MiddleRiskNodeCount 是否已赋值
                     * 
                     */
                    bool MiddleRiskNodeCountHasBeenSet() const;

                    /**
                     * 获取Number of nodes affected by prompt risks in the last seven days
                     * @return HintRiskNodeCount Number of nodes affected by prompt risks in the last seven days
                     * 
                     */
                    std::vector<uint64_t> GetHintRiskNodeCount() const;

                    /**
                     * 判断参数 HintRiskNodeCount 是否已赋值
                     * @return HintRiskNodeCount 是否已赋值
                     * 
                     */
                    bool HintRiskNodeCountHasBeenSet() const;

                private:

                    /**
                     * Number of nodes affected by critical risks in the last seven days
                     */
                    std::vector<uint64_t> m_seriousRiskNodeCount;
                    bool m_seriousRiskNodeCountHasBeenSet;

                    /**
                     * Number of nodes affected by high risks in the last seven days
                     */
                    std::vector<uint64_t> m_highRiskNodeCount;
                    bool m_highRiskNodeCountHasBeenSet;

                    /**
                     * Number of nodes affected by medium risks in the last seven days
                     */
                    std::vector<uint64_t> m_middleRiskNodeCount;
                    bool m_middleRiskNodeCountHasBeenSet;

                    /**
                     * Number of nodes affected by prompt risks in the last seven days
                     */
                    std::vector<uint64_t> m_hintRiskNodeCount;
                    bool m_hintRiskNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETASKRESULTSUMMARYRESPONSE_H_
