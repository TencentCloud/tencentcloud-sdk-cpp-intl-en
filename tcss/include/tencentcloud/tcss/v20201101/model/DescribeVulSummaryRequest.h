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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulSummary request structure.
                */
                class DescribeVulSummaryRequest : public AbstractModel
                {
                public:
                    DescribeVulSummaryRequest();
                    ~DescribeVulSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter
<li>OnlyAffectedNewestImage- string- Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>OnlyAffectedContainer-string- Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `ALL` (all vulnerabilities).</li>
                     * @return Filters Filter
<li>OnlyAffectedNewestImage- string- Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>OnlyAffectedContainer-string- Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `ALL` (all vulnerabilities).</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filter
<li>OnlyAffectedNewestImage- string- Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>OnlyAffectedContainer-string- Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `ALL` (all vulnerabilities).</li>
                     * @param _filters Filter
<li>OnlyAffectedNewestImage- string- Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>OnlyAffectedContainer-string- Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `ALL` (all vulnerabilities).</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Filter
<li>OnlyAffectedNewestImage- string- Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>OnlyAffectedContainer-string- Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `ALL` (all vulnerabilities).</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYREQUEST_H_
