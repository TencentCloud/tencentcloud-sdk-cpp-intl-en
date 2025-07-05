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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotwordsSet.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAsrHotwordsList response structure.
                */
                class DescribeAsrHotwordsListResponse : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsListResponse();
                    ~DescribeAsrHotwordsListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of hotword lexicons.
                     * @return TotalCount Total number of hotword lexicons.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. All hotword lexicons are returned by default.
                     * @return Limit Number of returned entries. All hotword lexicons are returned by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Hotword lexicon list.
                     * @return AsrHotwordsSet Hotword lexicon list.
                     * 
                     */
                    std::vector<AsrHotwordsSet> GetAsrHotwordsSet() const;

                    /**
                     * 判断参数 AsrHotwordsSet 是否已赋值
                     * @return AsrHotwordsSet 是否已赋值
                     * 
                     */
                    bool AsrHotwordsSetHasBeenSet() const;

                private:

                    /**
                     * Total number of hotword lexicons.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. All hotword lexicons are returned by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Hotword lexicon list.
                     */
                    std::vector<AsrHotwordsSet> m_asrHotwordsSet;
                    bool m_asrHotwordsSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSLISTRESPONSE_H_
