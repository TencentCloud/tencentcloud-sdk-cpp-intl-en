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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCSEARCHTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCSEARCHTASKREQUEST_H_

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
                * CreateAsyncSearchTask request structure.
                */
                class CreateAsyncSearchTaskRequest : public AbstractModel
                {
                public:
                    CreateAsyncSearchTaskRequest();
                    ~CreateAsyncSearchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetId Logset ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID. Currently, only log topics whose `StorageType` is `cold` are supported.
                     * @return TopicId Log topic ID. Currently, only log topics whose `StorageType` is `cold` are supported.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID. Currently, only log topics whose `StorageType` is `cold` are supported.
                     * @param TopicId Log topic ID. Currently, only log topics whose `StorageType` is `cold` are supported.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Query statement. Maximum length: 1024
                     * @return Query Query statement. Maximum length: 1024
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement. Maximum length: 1024
                     * @param Query Query statement. Maximum length: 1024
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Log scan order. Valid values: `asc`: ascending; `desc`: descending. Default value: desc
                     * @return Sort Log scan order. Valid values: `asc`: ascending; `desc`: descending. Default value: desc
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Log scan order. Valid values: `asc`: ascending; `desc`: descending. Default value: desc
                     * @param Sort Log scan order. Valid values: `asc`: ascending; `desc`: descending. Default value: desc
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID. Currently, only log topics whose `StorageType` is `cold` are supported.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Query statement. Maximum length: 1024
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Log scan order. Valid values: `asc`: ascending; `desc`: descending. Default value: desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEASYNCSEARCHTASKREQUEST_H_
