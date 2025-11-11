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
                     * 获取Search term.
                     * @return SearchWord Search term.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Search term.
                     * @param _searchWord Search term.
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

                    /**
                     * 获取Specifies whether to query the topic list from the connection.
                     * @return QueryFromConnectResource Specifies whether to query the topic list from the connection.
                     * 
                     */
                    bool GetQueryFromConnectResource() const;

                    /**
                     * 设置Specifies whether to query the topic list from the connection.
                     * @param _queryFromConnectResource Specifies whether to query the topic list from the connection.
                     * 
                     */
                    void SetQueryFromConnectResource(const bool& _queryFromConnectResource);

                    /**
                     * 判断参数 QueryFromConnectResource 是否已赋值
                     * @return QueryFromConnectResource 是否已赋值
                     * 
                     */
                    bool QueryFromConnectResourceHasBeenSet() const;

                    /**
                     * 获取Connection ID.
                     * @return ConnectResourceId Connection ID.
                     * 
                     */
                    std::string GetConnectResourceId() const;

                    /**
                     * 设置Connection ID.
                     * @param _connectResourceId Connection ID.
                     * 
                     */
                    void SetConnectResourceId(const std::string& _connectResourceId);

                    /**
                     * 判断参数 ConnectResourceId 是否已赋值
                     * @return ConnectResourceId 是否已赋值
                     * 
                     */
                    bool ConnectResourceIdHasBeenSet() const;

                    /**
                     * 获取topic resource expression.
                     * @return TopicRegularExpression topic resource expression.
                     * 
                     */
                    std::string GetTopicRegularExpression() const;

                    /**
                     * 设置topic resource expression.
                     * @param _topicRegularExpression topic resource expression.
                     * 
                     */
                    void SetTopicRegularExpression(const std::string& _topicRegularExpression);

                    /**
                     * 判断参数 TopicRegularExpression 是否已赋值
                     * @return TopicRegularExpression 是否已赋值
                     * 
                     */
                    bool TopicRegularExpressionHasBeenSet() const;

                private:

                    /**
                     * Search term.
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

                    /**
                     * Specifies whether to query the topic list from the connection.
                     */
                    bool m_queryFromConnectResource;
                    bool m_queryFromConnectResourceHasBeenSet;

                    /**
                     * Connection ID.
                     */
                    std::string m_connectResourceId;
                    bool m_connectResourceIdHasBeenSet;

                    /**
                     * topic resource expression.
                     */
                    std::string m_topicRegularExpression;
                    bool m_topicRegularExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
