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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/TagFilter.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoxKeyDetails request structure.
                */
                class DescribeWhiteBoxKeyDetailsRequest : public AbstractModel
                {
                public:
                    DescribeWhiteBoxKeyDetailsRequest();
                    ~DescribeWhiteBoxKeyDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter: key status. 0: disabled, 1: enabled
                     * @return KeyStatus Filter: key status. 0: disabled, 1: enabled
                     * 
                     */
                    int64_t GetKeyStatus() const;

                    /**
                     * 设置Filter: key status. 0: disabled, 1: enabled
                     * @param _keyStatus Filter: key status. 0: disabled, 1: enabled
                     * 
                     */
                    void SetKeyStatus(const int64_t& _keyStatus);

                    /**
                     * 判断参数 KeyStatus 是否已赋值
                     * @return KeyStatus 是否已赋值
                     * 
                     */
                    bool KeyStatusHasBeenSet() const;

                    /**
                     * 获取This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     * @return Offset This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     * @param _offset This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
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
                     * 获取This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 0, indicating not to paginate.
                     * @return Limit This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 0, indicating not to paginate.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 0, indicating not to paginate.
                     * @param _limit This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 0, indicating not to paginate.
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
                     * 获取Tag filter condition
                     * @return TagFilters Tag filter condition
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter condition
                     * @param _tagFilters Tag filter condition
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Filter: key status. 0: disabled, 1: enabled
                     */
                    int64_t m_keyStatus;
                    bool m_keyStatusHasBeenSet;

                    /**
                     * This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 0, indicating not to paginate.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Tag filter condition
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_
