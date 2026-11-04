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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELSUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELSUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/LabelSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeLabelSummaryList response structure.
                */
                class DescribeLabelSummaryListResponse : public AbstractModel
                {
                public:
                    DescribeLabelSummaryListResponse();
                    ~DescribeLabelSummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Tag list.</p>
                     * @return LabelList <p>Tag list.</p>
                     * 
                     */
                    std::vector<LabelSummary> GetLabelList() const;

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>Total.</p>
                     * @return TotalCount <p>Total.</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Tag list.</p>
                     */
                    std::vector<LabelSummary> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>Total.</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBELABELSUMMARYLISTRESPONSE_H_
