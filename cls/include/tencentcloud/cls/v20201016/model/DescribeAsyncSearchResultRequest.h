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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAsyncSearchResult request structure.
                */
                class DescribeAsyncSearchResultRequest : public AbstractModel
                {
                public:
                    DescribeAsyncSearchResultRequest();
                    ~DescribeAsyncSearchResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offline search task ID
                     * @return AsyncSearchTaskId Offline search task ID
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置Offline search task ID
                     * @param AsyncSearchTaskId Offline search task ID
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return TopicId Logset ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Logset ID
                     * @param TopicId Logset ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取This field is used to load more logs. Pass through the last `Context` value returned to get more log content.
                     * @return Context This field is used to load more logs. Pass through the last `Context` value returned to get more log content.
                     */
                    std::string GetContext() const;

                    /**
                     * 设置This field is used to load more logs. Pass through the last `Context` value returned to get more log content.
                     * @param Context This field is used to load more logs. Pass through the last `Context` value returned to get more log content.
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Number of logs returned in a single call. Default value: 20. Maximum value: 500
                     * @return Limit Number of logs returned in a single call. Default value: 20. Maximum value: 500
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of logs returned in a single call. Default value: 20. Maximum value: 500
                     * @param Limit Number of logs returned in a single call. Default value: 20. Maximum value: 500
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Offline search task ID
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * This field is used to load more logs. Pass through the last `Context` value returned to get more log content.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Number of logs returned in a single call. Default value: 20. Maximum value: 500
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTREQUEST_H_
