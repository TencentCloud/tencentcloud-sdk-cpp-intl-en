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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeDatahubTopics request structure.
                */
                class DescribeDatahubTopicsRequest : public AbstractModel
                {
                public:
                    DescribeDatahubTopicsRequest();
                    ~DescribeDatahubTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Keyword for query
                     * @return SearchWord Keyword for query
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Keyword for query
                     * @param _searchWord Keyword for query
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取Query offset, which defaults to `0`.
                     * @return Offset Query offset, which defaults to `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Query offset, which defaults to `0`.
                     * @param _offset Query offset, which defaults to `0`.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of results to be returned in this request. Default value: `50`. Maximum value: `50`.
                     * @return Limit Maximum number of results to be returned in this request. Default value: `50`. Maximum value: `50`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of results to be returned in this request. Default value: `50`. Maximum value: `50`.
                     * @param _limit Maximum number of results to be returned in this request. Default value: `50`. Maximum value: `50`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Keyword for query
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Query offset, which defaults to `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of results to be returned in this request. Default value: `50`. Maximum value: `50`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
