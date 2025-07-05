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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoverGroups request structure.
                */
                class DescribeDisasterRecoverGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverGroupsRequest();
                    ~DescribeDisasterRecoverGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of spread placement groups. You can operate up to 10 spread placement groups in each request.
                     * @return DisasterRecoverGroupIds ID list of spread placement groups. You can operate up to 10 spread placement groups in each request.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置ID list of spread placement groups. You can operate up to 10 spread placement groups in each request.
                     * @param _disasterRecoverGroupIds ID list of spread placement groups. You can operate up to 10 spread placement groups in each request.
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取Name of a spread placement group. Fuzzy match is supported.
                     * @return Name Name of a spread placement group. Fuzzy match is supported.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a spread placement group. Fuzzy match is supported.
                     * @param _name Name of a spread placement group. Fuzzy match is supported.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     * @return Offset Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     * @param _offset Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
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
                     * 获取Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @return Limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @param _limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
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
                     * 获取<li> `tag-key` - String - Optional - Filter by the tag key.</li>
<li>`tag-value` - String - Optional - Filter by the tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by the tag key-value pair. Replace `tag-key` with the actual tag keys.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     * @return Filters <li> `tag-key` - String - Optional - Filter by the tag key.</li>
<li>`tag-value` - String - Optional - Filter by the tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by the tag key-value pair. Replace `tag-key` with the actual tag keys.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li> `tag-key` - String - Optional - Filter by the tag key.</li>
<li>`tag-value` - String - Optional - Filter by the tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by the tag key-value pair. Replace `tag-key` with the actual tag keys.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     * @param _filters <li> `tag-key` - String - Optional - Filter by the tag key.</li>
<li>`tag-value` - String - Optional - Filter by the tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by the tag key-value pair. Replace `tag-key` with the actual tag keys.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * ID list of spread placement groups. You can operate up to 10 spread placement groups in each request.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * Name of a spread placement group. Fuzzy match is supported.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Offset; default value: 0. For more information on `Offset`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <li> `tag-key` - String - Optional - Filter by the tag key.</li>
<li>`tag-value` - String - Optional - Filter by the tag value.</li>
<li> `tag:tag-key` - String - Optional - Filter by the tag key-value pair. Replace `tag-key` with the actual tag keys.</li>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPSREQUEST_H_
