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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINBATCHDETAILSREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINBATCHDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlDomainBatchDetails request structure.
                */
                class DescribeIntlDomainBatchDetailsRequest : public AbstractModel
                {
                public:
                    DescribeIntlDomainBatchDetailsRequest();
                    ~DescribeIntlDomainBatchDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The log ID.
                     * @return LogId The log ID.
                     * 
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置The log ID.
                     * @param _logId The log ID.
                     * 
                     */
                    void SetLogId(const int64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取The offset. Default value: 0
                     * @return Offset The offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: 0
                     * @param _offset The offset. Default value: 0
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
                     * 获取The number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit The number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit The number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The sort key. Valid values: `Domain`, `UpdateOn`, `Status`
                     * @return OrderByKey The sort key. Valid values: `Domain`, `UpdateOn`, `Status`
                     * 
                     */
                    std::string GetOrderByKey() const;

                    /**
                     * 设置The sort key. Valid values: `Domain`, `UpdateOn`, `Status`
                     * @param _orderByKey The sort key. Valid values: `Domain`, `UpdateOn`, `Status`
                     * 
                     */
                    void SetOrderByKey(const std::string& _orderByKey);

                    /**
                     * 判断参数 OrderByKey 是否已赋值
                     * @return OrderByKey 是否已赋值
                     * 
                     */
                    bool OrderByKeyHasBeenSet() const;

                    /**
                     * 获取Valid values: `0` (ascending), `1` (descending).
                     * @return OrderBy Valid values: `0` (ascending), `1` (descending).
                     * 
                     */
                    int64_t GetOrderBy() const;

                    /**
                     * 设置Valid values: `0` (ascending), `1` (descending).
                     * @param _orderBy Valid values: `0` (ascending), `1` (descending).
                     * 
                     */
                    void SetOrderBy(const int64_t& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * The log ID.
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * The offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The sort key. Valid values: `Domain`, `UpdateOn`, `Status`
                     */
                    std::string m_orderByKey;
                    bool m_orderByKeyHasBeenSet;

                    /**
                     * Valid values: `0` (ascending), `1` (descending).
                     */
                    int64_t m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINBATCHDETAILSREQUEST_H_
