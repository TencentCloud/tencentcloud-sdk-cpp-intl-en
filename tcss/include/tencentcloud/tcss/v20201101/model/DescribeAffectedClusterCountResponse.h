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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDCLUSTERCOUNTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDCLUSTERCOUNTRESPONSE_H_

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
                * DescribeAffectedClusterCount response structure.
                */
                class DescribeAffectedClusterCountResponse : public AbstractModel
                {
                public:
                    DescribeAffectedClusterCountResponse();
                    ~DescribeAffectedClusterCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of critical clusters
                     * @return SeriousRiskClusterCount Number of critical clusters
                     * 
                     */
                    uint64_t GetSeriousRiskClusterCount() const;

                    /**
                     * 判断参数 SeriousRiskClusterCount 是否已赋值
                     * @return SeriousRiskClusterCount 是否已赋值
                     * 
                     */
                    bool SeriousRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of high-risk clusters
                     * @return HighRiskClusterCount Number of high-risk clusters
                     * 
                     */
                    uint64_t GetHighRiskClusterCount() const;

                    /**
                     * 判断参数 HighRiskClusterCount 是否已赋值
                     * @return HighRiskClusterCount 是否已赋值
                     * 
                     */
                    bool HighRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk clusters
                     * @return MiddleRiskClusterCount Number of medium-risk clusters
                     * 
                     */
                    uint64_t GetMiddleRiskClusterCount() const;

                    /**
                     * 判断参数 MiddleRiskClusterCount 是否已赋值
                     * @return MiddleRiskClusterCount 是否已赋值
                     * 
                     */
                    bool MiddleRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of low-risk clusters
                     * @return HintRiskClusterCount Number of low-risk clusters
                     * 
                     */
                    uint64_t GetHintRiskClusterCount() const;

                    /**
                     * 判断参数 HintRiskClusterCount 是否已赋值
                     * @return HintRiskClusterCount 是否已赋值
                     * 
                     */
                    bool HintRiskClusterCountHasBeenSet() const;

                private:

                    /**
                     * Number of critical clusters
                     */
                    uint64_t m_seriousRiskClusterCount;
                    bool m_seriousRiskClusterCountHasBeenSet;

                    /**
                     * Number of high-risk clusters
                     */
                    uint64_t m_highRiskClusterCount;
                    bool m_highRiskClusterCountHasBeenSet;

                    /**
                     * Number of medium-risk clusters
                     */
                    uint64_t m_middleRiskClusterCount;
                    bool m_middleRiskClusterCountHasBeenSet;

                    /**
                     * Number of low-risk clusters
                     */
                    uint64_t m_hintRiskClusterCount;
                    bool m_hintRiskClusterCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAFFECTEDCLUSTERCOUNTRESPONSE_H_
