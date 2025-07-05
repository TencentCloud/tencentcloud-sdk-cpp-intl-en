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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEWEBVULEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEWEBVULEXPORTJOBREQUEST_H_

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
                * CreateWebVulExportJob request structure.
                */
                class CreateWebVulExportJobRequest : public AbstractModel
                {
                public:
                    CreateWebVulExportJobRequest();
                    ~CreateWebVulExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of results to be returned. Default value: `50000`. Maximum value: `50000`.
                     * @return Limit Number of results to be returned. Default value: `50000`. Maximum value: `50000`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `50000`. Maximum value: `50000`.
                     * @param _limit Number of results to be returned. Default value: `50000`. Maximum value: `50000`.
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Filter
<li>OnlyAffectedContainer- string - Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>OnlyAffectedNewestImage-string - Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>Level- String - Required: No - Severity. Valid values: `CRITICAL` (critical); `HIGH` (high); `MIDDLE` (medium); `LOW` (low).</li>
<li>Tags- string - Required: No - Vulnerability tag. Valid values: `POC`, `EXP`.</li>
<li>CanBeFixed- string - Required: No - Whether the vulnerability can be fixed. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Sub-type of the vulnerability</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>ImageName- String - Required: No - Image name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ComponentName- string - Required: No - Component name</li>
<li>ComponentVersion- string - Required: No - Component version</li>
<li>Name- string - Required: No - Vulnerability name</li>
<li>FocusOnType - string - Required: No - Urgency. Valid values: `ALL` (all); `SERIOUS_LEVEL (critical and high risks); `IS_SUGGEST` (high-priority); `POC_EXP` (POC/EXP); `NETWORK_EXP` (remote EXP).</li>
                     * @return Filters Filter
<li>OnlyAffectedContainer- string - Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>OnlyAffectedNewestImage-string - Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>Level- String - Required: No - Severity. Valid values: `CRITICAL` (critical); `HIGH` (high); `MIDDLE` (medium); `LOW` (low).</li>
<li>Tags- string - Required: No - Vulnerability tag. Valid values: `POC`, `EXP`.</li>
<li>CanBeFixed- string - Required: No - Whether the vulnerability can be fixed. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Sub-type of the vulnerability</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>ImageName- String - Required: No - Image name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ComponentName- string - Required: No - Component name</li>
<li>ComponentVersion- string - Required: No - Component version</li>
<li>Name- string - Required: No - Vulnerability name</li>
<li>FocusOnType - string - Required: No - Urgency. Valid values: `ALL` (all); `SERIOUS_LEVEL (critical and high risks); `IS_SUGGEST` (high-priority); `POC_EXP` (POC/EXP); `NETWORK_EXP` (remote EXP).</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置Filter
<li>OnlyAffectedContainer- string - Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>OnlyAffectedNewestImage-string - Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>Level- String - Required: No - Severity. Valid values: `CRITICAL` (critical); `HIGH` (high); `MIDDLE` (medium); `LOW` (low).</li>
<li>Tags- string - Required: No - Vulnerability tag. Valid values: `POC`, `EXP`.</li>
<li>CanBeFixed- string - Required: No - Whether the vulnerability can be fixed. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Sub-type of the vulnerability</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>ImageName- String - Required: No - Image name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ComponentName- string - Required: No - Component name</li>
<li>ComponentVersion- string - Required: No - Component version</li>
<li>Name- string - Required: No - Vulnerability name</li>
<li>FocusOnType - string - Required: No - Urgency. Valid values: `ALL` (all); `SERIOUS_LEVEL (critical and high risks); `IS_SUGGEST` (high-priority); `POC_EXP` (POC/EXP); `NETWORK_EXP` (remote EXP).</li>
                     * @param _filters Filter
<li>OnlyAffectedContainer- string - Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>OnlyAffectedNewestImage-string - Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>Level- String - Required: No - Severity. Valid values: `CRITICAL` (critical); `HIGH` (high); `MIDDLE` (medium); `LOW` (low).</li>
<li>Tags- string - Required: No - Vulnerability tag. Valid values: `POC`, `EXP`.</li>
<li>CanBeFixed- string - Required: No - Whether the vulnerability can be fixed. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Sub-type of the vulnerability</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>ImageName- String - Required: No - Image name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ComponentName- string - Required: No - Component name</li>
<li>ComponentVersion- string - Required: No - Component version</li>
<li>Name- string - Required: No - Vulnerability name</li>
<li>FocusOnType - string - Required: No - Urgency. Valid values: `ALL` (all); `SERIOUS_LEVEL (critical and high risks); `IS_SUGGEST` (high-priority); `POC_EXP` (POC/EXP); `NETWORK_EXP` (remote EXP).</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting order
                     * @return Order Sorting order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order
                     * @param _order Sorting order
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Number of results to be returned. Default value: `50000`. Maximum value: `50000`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter
<li>OnlyAffectedContainer- string - Required: No - Show only vulnerabilities that affect containers. Valid values: `true`, `false`.</li>
<li>OnlyAffectedNewestImage-string - Required: No - Show only vulnerabilities that affect the latest image tags. Valid values: `true`, `false`.</li>
<li>Level- String - Required: No - Severity. Valid values: `CRITICAL` (critical); `HIGH` (high); `MIDDLE` (medium); `LOW` (low).</li>
<li>Tags- string - Required: No - Vulnerability tag. Valid values: `POC`, `EXP`.</li>
<li>CanBeFixed- string - Required: No - Whether the vulnerability can be fixed. Valid values: `true`, `false`.</li>
<li>CategoryType- string - Required: No - Sub-type of the vulnerability</li>
<li>CVEID- string - Required: No - CVE No.</li>
<li>ImageID- string - Required: No - Image ID</li>
<li>ImageName- String - Required: No - Image name</li>
<li>ContainerID- string - Required: No - Container ID</li>
<li>ContainerName- string - Required: No - Container name</li>
<li>ComponentName- string - Required: No - Component name</li>
<li>ComponentVersion- string - Required: No - Component version</li>
<li>Name- string - Required: No - Vulnerability name</li>
<li>FocusOnType - string - Required: No - Urgency. Valid values: `ALL` (all); `SERIOUS_LEVEL (critical and high risks); `IS_SUGGEST` (high-priority); `POC_EXP` (POC/EXP); `NETWORK_EXP` (remote EXP).</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEWEBVULEXPORTJOBREQUEST_H_
