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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeTokenUsage response structure.
                */
                class DescribeTokenUsageResponse : public AbstractModel
                {
                public:
                    DescribeTokenUsageResponse();
                    ~DescribeTokenUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total token consumption.
                     * @return TotalTokenUsage Total token consumption.
                     * 
                     */
                    double GetTotalTokenUsage() const;

                    /**
                     * 判断参数 TotalTokenUsage 是否已赋值
                     * @return TotalTokenUsage 是否已赋值
                     * 
                     */
                    bool TotalTokenUsageHasBeenSet() const;

                    /**
                     * 获取Input token consumption.
                     * @return InputTokenUsage Input token consumption.
                     * 
                     */
                    double GetInputTokenUsage() const;

                    /**
                     * 判断参数 InputTokenUsage 是否已赋值
                     * @return InputTokenUsage 是否已赋值
                     * 
                     */
                    bool InputTokenUsageHasBeenSet() const;

                    /**
                     * 获取Output token consumption.
                     * @return OutputTokenUsage Output token consumption.
                     * 
                     */
                    double GetOutputTokenUsage() const;

                    /**
                     * 判断参数 OutputTokenUsage 是否已赋值
                     * @return OutputTokenUsage 是否已赋值
                     * 
                     */
                    bool OutputTokenUsageHasBeenSet() const;

                    /**
                     * 获取Number of API calls.
                     * @return ApiCallStats Number of API calls.
                     * 
                     */
                    uint64_t GetApiCallStats() const;

                    /**
                     * 判断参数 ApiCallStats 是否已赋值
                     * @return ApiCallStats 是否已赋值
                     * 
                     */
                    bool ApiCallStatsHasBeenSet() const;

                    /**
                     * 获取Number of search service calls.
                     * @return SearchUsage Number of search service calls.
                     * 
                     */
                    double GetSearchUsage() const;

                    /**
                     * 判断参数 SearchUsage 是否已赋值
                     * @return SearchUsage 是否已赋值
                     * 
                     */
                    bool SearchUsageHasBeenSet() const;

                    /**
                     * 获取Number of pages consumed by document parsing.
                     * @return PageUsage Number of pages consumed by document parsing.
                     * 
                     */
                    uint64_t GetPageUsage() const;

                    /**
                     * 判断参数 PageUsage 是否已赋值
                     * @return PageUsage 是否已赋值
                     * 
                     */
                    bool PageUsageHasBeenSet() const;

                    /**
                     * 获取Token consumption by splitting.
                     * @return SplitTokenUsage Token consumption by splitting.
                     * 
                     */
                    double GetSplitTokenUsage() const;

                    /**
                     * 判断参数 SplitTokenUsage 是否已赋值
                     * @return SplitTokenUsage 是否已赋值
                     * 
                     */
                    bool SplitTokenUsageHasBeenSet() const;

                    /**
                     * 获取Number of Rag retrievals.
                     * @return RagSearchUsage Number of Rag retrievals.
                     * 
                     */
                    double GetRagSearchUsage() const;

                    /**
                     * 判断参数 RagSearchUsage 是否已赋值
                     * @return RagSearchUsage 是否已赋值
                     * 
                     */
                    bool RagSearchUsageHasBeenSet() const;

                    /**
                     * 获取Number of online searches.
                     * @return InternetSearchUsage Number of online searches.
                     * 
                     */
                    double GetInternetSearchUsage() const;

                    /**
                     * 判断参数 InternetSearchUsage 是否已赋值
                     * @return InternetSearchUsage 是否已赋值
                     * 
                     */
                    bool InternetSearchUsageHasBeenSet() const;

                private:

                    /**
                     * Total token consumption.
                     */
                    double m_totalTokenUsage;
                    bool m_totalTokenUsageHasBeenSet;

                    /**
                     * Input token consumption.
                     */
                    double m_inputTokenUsage;
                    bool m_inputTokenUsageHasBeenSet;

                    /**
                     * Output token consumption.
                     */
                    double m_outputTokenUsage;
                    bool m_outputTokenUsageHasBeenSet;

                    /**
                     * Number of API calls.
                     */
                    uint64_t m_apiCallStats;
                    bool m_apiCallStatsHasBeenSet;

                    /**
                     * Number of search service calls.
                     */
                    double m_searchUsage;
                    bool m_searchUsageHasBeenSet;

                    /**
                     * Number of pages consumed by document parsing.
                     */
                    uint64_t m_pageUsage;
                    bool m_pageUsageHasBeenSet;

                    /**
                     * Token consumption by splitting.
                     */
                    double m_splitTokenUsage;
                    bool m_splitTokenUsageHasBeenSet;

                    /**
                     * Number of Rag retrievals.
                     */
                    double m_ragSearchUsage;
                    bool m_ragSearchUsageHasBeenSet;

                    /**
                     * Number of online searches.
                     */
                    double m_internetSearchUsage;
                    bool m_internetSearchUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGERESPONSE_H_
