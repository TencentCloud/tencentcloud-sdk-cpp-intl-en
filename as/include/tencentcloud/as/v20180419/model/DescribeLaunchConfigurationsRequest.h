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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBELAUNCHCONFIGURATIONSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBELAUNCHCONFIGURATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Filter.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeLaunchConfigurations request structure.
                */
                class DescribeLaunchConfigurationsRequest : public AbstractModel
                {
                public:
                    DescribeLaunchConfigurationsRequest();
                    ~DescribeLaunchConfigurationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries by one or more launch configuration IDs in the format of `asc-ouy1ax38`. The maximum quantity per request is 100. This parameter does not support specifying both `LaunchConfigurationIds` and `Filters` at the same time.
                     * @return LaunchConfigurationIds Queries by one or more launch configuration IDs in the format of `asc-ouy1ax38`. The maximum quantity per request is 100. This parameter does not support specifying both `LaunchConfigurationIds` and `Filters` at the same time.
                     * 
                     */
                    std::vector<std::string> GetLaunchConfigurationIds() const;

                    /**
                     * 设置Queries by one or more launch configuration IDs in the format of `asc-ouy1ax38`. The maximum quantity per request is 100. This parameter does not support specifying both `LaunchConfigurationIds` and `Filters` at the same time.
                     * @param _launchConfigurationIds Queries by one or more launch configuration IDs in the format of `asc-ouy1ax38`. The maximum quantity per request is 100. This parameter does not support specifying both `LaunchConfigurationIds` and `Filters` at the same time.
                     * 
                     */
                    void SetLaunchConfigurationIds(const std::vector<std::string>& _launchConfigurationIds);

                    /**
                     * 判断参数 LaunchConfigurationIds 是否已赋值
                     * @return LaunchConfigurationIds 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria

<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration ID.</li>
<li>launch-configuration-name - String - required: no - (filter condition) filter by launch configuration name.</li>
<li>vague-launch-configuration-name - String - required: no - (filter condition) fuzzy search by launch configuration name.</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key.</li>
<li>tag-value - String - required: no - (filter condition) filter by tag value.</li>
<li>tag:tag-key - String - required: no - (filter condition) filter by Tag key-value pair. Replace tag-key with a specific tag key. See Example 3 for usage.</li>
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. The parameter does not support specifying both `LaunchConfigurationIds` and `Filters`.
                     * @return Filters Filter criteria

<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration ID.</li>
<li>launch-configuration-name - String - required: no - (filter condition) filter by launch configuration name.</li>
<li>vague-launch-configuration-name - String - required: no - (filter condition) fuzzy search by launch configuration name.</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key.</li>
<li>tag-value - String - required: no - (filter condition) filter by tag value.</li>
<li>tag:tag-key - String - required: no - (filter condition) filter by Tag key-value pair. Replace tag-key with a specific tag key. See Example 3 for usage.</li>
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. The parameter does not support specifying both `LaunchConfigurationIds` and `Filters`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria

<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration ID.</li>
<li>launch-configuration-name - String - required: no - (filter condition) filter by launch configuration name.</li>
<li>vague-launch-configuration-name - String - required: no - (filter condition) fuzzy search by launch configuration name.</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key.</li>
<li>tag-value - String - required: no - (filter condition) filter by tag value.</li>
<li>tag:tag-key - String - required: no - (filter condition) filter by Tag key-value pair. Replace tag-key with a specific tag key. See Example 3 for usage.</li>
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. The parameter does not support specifying both `LaunchConfigurationIds` and `Filters`.
                     * @param _filters Filter criteria

<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration ID.</li>
<li>launch-configuration-name - String - required: no - (filter condition) filter by launch configuration name.</li>
<li>vague-launch-configuration-name - String - required: no - (filter condition) fuzzy search by launch configuration name.</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key.</li>
<li>tag-value - String - required: no - (filter condition) filter by tag value.</li>
<li>tag:tag-key - String - required: no - (filter condition) filter by Tag key-value pair. Replace tag-key with a specific tag key. See Example 3 for usage.</li>
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. The parameter does not support specifying both `LaunchConfigurationIds` and `Filters`.
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
                     * 获取The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取The offset. Default value: `0`. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset The offset. Default value: `0`. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: `0`. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset The offset. Default value: `0`. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Queries by one or more launch configuration IDs in the format of `asc-ouy1ax38`. The maximum quantity per request is 100. This parameter does not support specifying both `LaunchConfigurationIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> m_launchConfigurationIds;
                    bool m_launchConfigurationIdsHasBeenSet;

                    /**
                     * Filter criteria

<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration ID.</li>
<li>launch-configuration-name - String - required: no - (filter condition) filter by launch configuration name.</li>
<li>vague-launch-configuration-name - String - required: no - (filter condition) fuzzy search by launch configuration name.</li>
<li>tag-key - String - required: no - (filter condition) filter by tag key.</li>
<li>tag-value - String - required: no - (filter condition) filter by tag value.</li>
<li>tag:tag-key - String - required: no - (filter condition) filter by Tag key-value pair. Replace tag-key with a specific tag key. See Example 3 for usage.</li>
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. The parameter does not support specifying both `LaunchConfigurationIds` and `Filters`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The offset. Default value: `0`. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBELAUNCHCONFIGURATIONSREQUEST_H_
