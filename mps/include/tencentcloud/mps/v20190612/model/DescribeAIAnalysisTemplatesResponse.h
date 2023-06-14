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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIANALYSISTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIANALYSISTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AIAnalysisTemplateItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisTemplates response structure.
                */
                class DescribeAIAnalysisTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeAIAnalysisTemplatesResponse();
                    ~DescribeAIAnalysisTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible entries.
                     * @return TotalCount Number of eligible entries.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of video content analysis template details.
                     * @return AIAnalysisTemplateSet List of video content analysis template details.
                     * 
                     */
                    std::vector<AIAnalysisTemplateItem> GetAIAnalysisTemplateSet() const;

                    /**
                     * 判断参数 AIAnalysisTemplateSet 是否已赋值
                     * @return AIAnalysisTemplateSet 是否已赋值
                     * 
                     */
                    bool AIAnalysisTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of video content analysis template details.
                     */
                    std::vector<AIAnalysisTemplateItem> m_aIAnalysisTemplateSet;
                    bool m_aIAnalysisTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIANALYSISTEMPLATESRESPONSE_H_
