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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeZones request structure.
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The page offset. Default value: 0
                     * @return Offset The page offset. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0
                     * @param Offset The page offset. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @return Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @param Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-name`:<br>   Filter by <strong>site name</strong><br>   Type: String<br>   Required: No<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-xxx<br>   Type: String<br>   Required: No<li>`status`:<br>   Filter by <strong>site status</strong><br>   Type: String<br>   Required: No<li>`tag-key`:<br>   Filter by <strong>tag key</strong><br>   Type: String<br>   Required: No<li>`tag-value`:<br>   Filter by <strong>tag value</strong><br>   Type: String<br>   Required: No<li>`Fuzzy`:<br>   Filter by <strong>values in fuzzy query</strong> (only `zone-name` allowed). Values limit: 1<br>   Type: Boolean<br>   Required: No<br>   Default value: false
                     * @return Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-name`:<br>   Filter by <strong>site name</strong><br>   Type: String<br>   Required: No<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-xxx<br>   Type: String<br>   Required: No<li>`status`:<br>   Filter by <strong>site status</strong><br>   Type: String<br>   Required: No<li>`tag-key`:<br>   Filter by <strong>tag key</strong><br>   Type: String<br>   Required: No<li>`tag-value`:<br>   Filter by <strong>tag value</strong><br>   Type: String<br>   Required: No<li>`Fuzzy`:<br>   Filter by <strong>values in fuzzy query</strong> (only `zone-name` allowed). Values limit: 1<br>   Type: Boolean<br>   Required: No<br>   Default value: false
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-name`:<br>   Filter by <strong>site name</strong><br>   Type: String<br>   Required: No<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-xxx<br>   Type: String<br>   Required: No<li>`status`:<br>   Filter by <strong>site status</strong><br>   Type: String<br>   Required: No<li>`tag-key`:<br>   Filter by <strong>tag key</strong><br>   Type: String<br>   Required: No<li>`tag-value`:<br>   Filter by <strong>tag value</strong><br>   Type: String<br>   Required: No<li>`Fuzzy`:<br>   Filter by <strong>values in fuzzy query</strong> (only `zone-name` allowed). Values limit: 1<br>   Type: Boolean<br>   Required: No<br>   Default value: false
                     * @param Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-name`:<br>   Filter by <strong>site name</strong><br>   Type: String<br>   Required: No<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-xxx<br>   Type: String<br>   Required: No<li>`status`:<br>   Filter by <strong>site status</strong><br>   Type: String<br>   Required: No<li>`tag-key`:<br>   Filter by <strong>tag key</strong><br>   Type: String<br>   Required: No<li>`tag-value`:<br>   Filter by <strong>tag value</strong><br>   Type: String<br>   Required: No<li>`Fuzzy`:<br>   Filter by <strong>values in fuzzy query</strong> (only `zone-name` allowed). Values limit: 1<br>   Type: Boolean<br>   Required: No<br>   Default value: false
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * The page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. Each filter criteria can have up to 20 entries.
<li>`zone-name`:<br>   Filter by <strong>site name</strong><br>   Type: String<br>   Required: No<li>`zone-id`:<br>   Filter by <strong>site ID</strong>, such as zone-xxx<br>   Type: String<br>   Required: No<li>`status`:<br>   Filter by <strong>site status</strong><br>   Type: String<br>   Required: No<li>`tag-key`:<br>   Filter by <strong>tag key</strong><br>   Type: String<br>   Required: No<li>`tag-value`:<br>   Filter by <strong>tag value</strong><br>   Type: String<br>   Required: No<li>`Fuzzy`:<br>   Filter by <strong>values in fuzzy query</strong> (only `zone-name` allowed). Values limit: 1<br>   Type: Boolean<br>   Required: No<br>   Default value: false
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONESREQUEST_H_
