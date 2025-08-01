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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBENUMBERSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBENUMBERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/NumberInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeNumbers response structure.
                */
                class DescribeNumbersResponse : public AbstractModel
                {
                public:
                    DescribeNumbersResponse();
                    ~DescribeNumbersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
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
                     * 获取Number list.
                     * @return Numbers Number list.
                     * 
                     */
                    std::vector<NumberInfo> GetNumbers() const;

                    /**
                     * 判断参数 Numbers 是否已赋值
                     * @return Numbers 是否已赋值
                     * 
                     */
                    bool NumbersHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Number list.
                     */
                    std::vector<NumberInfo> m_numbers;
                    bool m_numbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBENUMBERSRESPONSE_H_
