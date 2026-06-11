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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeConfigs request structure.
                */
                class DescribeConfigsRequest : public AbstractModel
                {
                public:
                    DescribeConfigsRequest();
                    ~DescribeConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取configName
-Filter by [collection configuration name] using fuzzy matching.
-Type: String
-Required: No
-Example: test-config.

configId
-Filter by [collection configuration ID].
-Type: String
-Required: No
-Example: 3581a3be-aa41-423b-995a-54ec84da6264

topicId
- Filter by [log topic].
-Type: String
-Required: No
-Example: 3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * @return Filters configName
-Filter by [collection configuration name] using fuzzy matching.
-Type: String
-Required: No
-Example: test-config.

configId
-Filter by [collection configuration ID].
-Type: String
-Required: No
-Example: 3581a3be-aa41-423b-995a-54ec84da6264

topicId
- Filter by [log topic].
-Type: String
-Required: No
-Example: 3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置configName
-Filter by [collection configuration name] using fuzzy matching.
-Type: String
-Required: No
-Example: test-config.

configId
-Filter by [collection configuration ID].
-Type: String
-Required: No
-Example: 3581a3be-aa41-423b-995a-54ec84da6264

topicId
- Filter by [log topic].
-Type: String
-Required: No
-Example: 3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * @param _filters configName
-Filter by [collection configuration name] using fuzzy matching.
-Type: String
-Required: No
-Example: test-config.

configId
-Filter by [collection configuration ID].
-Type: String
-Required: No
-Example: 3581a3be-aa41-423b-995a-54ec84da6264

topicId
- Filter by [log topic].
-Type: String
-Required: No
-Example: 3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * configName
-Filter by [collection configuration name] using fuzzy matching.
-Type: String
-Required: No
-Example: test-config.

configId
-Filter by [collection configuration ID].
-Type: String
-Required: No
-Example: 3581a3be-aa41-423b-995a-54ec84da6264

topicId
- Filter by [log topic].
-Type: String
-Required: No
-Example: 3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).

The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGSREQUEST_H_
