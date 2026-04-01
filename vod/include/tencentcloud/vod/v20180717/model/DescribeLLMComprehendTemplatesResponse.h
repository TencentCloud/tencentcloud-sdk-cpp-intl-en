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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendTemplateItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeLLMComprehendTemplates response structure.
                */
                class DescribeLLMComprehendTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeLLMComprehendTemplatesResponse();
                    ~DescribeLLMComprehendTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of records that meet the filtering conditions.
                     * @return TotalCount Total number of records that meet the filtering conditions.
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
                     * 获取List of large model comprehend template details.
                     * @return LLMComprehendTemplateSet List of large model comprehend template details.
                     * 
                     */
                    std::vector<LLMComprehendTemplateItem> GetLLMComprehendTemplateSet() const;

                    /**
                     * 判断参数 LLMComprehendTemplateSet 是否已赋值
                     * @return LLMComprehendTemplateSet 是否已赋值
                     * 
                     */
                    bool LLMComprehendTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Total number of records that meet the filtering conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of large model comprehend template details.
                     */
                    std::vector<LLMComprehendTemplateItem> m_lLMComprehendTemplateSet;
                    bool m_lLMComprehendTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESRESPONSE_H_
