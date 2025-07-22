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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORDSAMPLESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORDSAMPLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleWord.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeWordSamples response structure.
                */
                class DescribeWordSamplesResponse : public AbstractModel
                {
                public:
                    DescribeWordSamplesResponse();
                    ~DescribeWordSamplesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of qualified records.
                     * @return TotalCount Total number of qualified records.
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
                     * 获取Keyword information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WordSet Keyword information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AiSampleWord> GetWordSet() const;

                    /**
                     * 判断参数 WordSet 是否已赋值
                     * @return WordSet 是否已赋值
                     * 
                     */
                    bool WordSetHasBeenSet() const;

                private:

                    /**
                     * Total number of qualified records.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Keyword information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AiSampleWord> m_wordSet;
                    bool m_wordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORDSAMPLESRESPONSE_H_
