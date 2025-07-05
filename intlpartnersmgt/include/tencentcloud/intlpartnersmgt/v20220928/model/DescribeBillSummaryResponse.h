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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/SummaryDetails.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeBillSummary response structure.
                */
                class DescribeBillSummaryResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryResponse();
                    ~DescribeBillSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Detailed summary by billing dimension.
                     * @return SummaryDetail Detailed summary by billing dimension.
                     * 
                     */
                    std::vector<SummaryDetails> GetSummaryDetail() const;

                    /**
                     * 判断参数 SummaryDetail 是否已赋值
                     * @return SummaryDetail 是否已赋值
                     * 
                     */
                    bool SummaryDetailHasBeenSet() const;

                private:

                    /**
                     * Detailed summary by billing dimension.
                     */
                    std::vector<SummaryDetails> m_summaryDetail;
                    bool m_summaryDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYRESPONSE_H_
