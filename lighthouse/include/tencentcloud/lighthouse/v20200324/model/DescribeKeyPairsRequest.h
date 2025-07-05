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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEKEYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeKeyPairs request structure.
                */
                class DescribeKeyPairsRequest : public AbstractModel
                {
                public:
                    DescribeKeyPairsRequest();
                    ~DescribeKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair ID list.
                     * @return KeyIds Key pair ID list.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置Key pair ID list.
                     * @param _keyIds Key pair ID list.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
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
                     * 获取Filter list.
<li>key-id</li>Filter by **key pair ID**.
Type: String
Required: no
<li>key-name</li>Filter by the **key pair name**. Fuzzy match is supported.
Type: String
Required: no
Each request can contain up to 10 `Filters` and up to 5 `Filter.Values` for each filter. `KeyIds` and `Filters` cannot be specified at the same time.
                     * @return Filters Filter list.
<li>key-id</li>Filter by **key pair ID**.
Type: String
Required: no
<li>key-name</li>Filter by the **key pair name**. Fuzzy match is supported.
Type: String
Required: no
Each request can contain up to 10 `Filters` and up to 5 `Filter.Values` for each filter. `KeyIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list.
<li>key-id</li>Filter by **key pair ID**.
Type: String
Required: no
<li>key-name</li>Filter by the **key pair name**. Fuzzy match is supported.
Type: String
Required: no
Each request can contain up to 10 `Filters` and up to 5 `Filter.Values` for each filter. `KeyIds` and `Filters` cannot be specified at the same time.
                     * @param _filters Filter list.
<li>key-id</li>Filter by **key pair ID**.
Type: String
Required: no
<li>key-name</li>Filter by the **key pair name**. Fuzzy match is supported.
Type: String
Required: no
Each request can contain up to 10 `Filters` and up to 5 `Filter.Values` for each filter. `KeyIds` and `Filters` cannot be specified at the same time.
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
                     * Key pair ID list.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter list.
<li>key-id</li>Filter by **key pair ID**.
Type: String
Required: no
<li>key-name</li>Filter by the **key pair name**. Fuzzy match is supported.
Type: String
Required: no
Each request can contain up to 10 `Filters` and up to 5 `Filter.Values` for each filter. `KeyIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEKEYPAIRSREQUEST_H_
