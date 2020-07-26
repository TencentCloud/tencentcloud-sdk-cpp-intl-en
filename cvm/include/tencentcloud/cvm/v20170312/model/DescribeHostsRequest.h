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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSREQUEST_H_

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
                * DescribeHosts request structure.
                */
                class DescribeHostsRequest : public AbstractModel
                {
                public:
                    DescribeHostsRequest();
                    ~DescribeHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>project-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>project ID</strong>**. You can query the existing project list through the [DescribeProject](https://cloud.tencent.com/document/api/378/4400) API or [CVM console](https://console.cloud.tencent.com/cvm/index), or create a project by calling the [AddProject](https://cloud.tencent.com/document/api/378/4398) API. For example, project ID: 1002189;</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>host-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>[CDH](https://cloud.tencent.com/document/product/416) ID</strong>**. For example, [CDH](https://cloud.tencent.com/document/product/416) ID: host-xxxxxxxx;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance name</strong>**. </p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance status </strong>**. (PENDING: creating | LAUNCH_FAILURE: creation failed | RUNNING: running | EXPIRED: expired)</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     * @return Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>project-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>project ID</strong>**. You can query the existing project list through the [DescribeProject](https://cloud.tencent.com/document/api/378/4400) API or [CVM console](https://console.cloud.tencent.com/cvm/index), or create a project by calling the [AddProject](https://cloud.tencent.com/document/api/378/4398) API. For example, project ID: 1002189;</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>host-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>[CDH](https://cloud.tencent.com/document/product/416) ID</strong>**. For example, [CDH](https://cloud.tencent.com/document/product/416) ID: host-xxxxxxxx;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance name</strong>**. </p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance status </strong>**. (PENDING: creating | LAUNCH_FAILURE: creation failed | RUNNING: running | EXPIRED: expired)</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>project-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>project ID</strong>**. You can query the existing project list through the [DescribeProject](https://cloud.tencent.com/document/api/378/4400) API or [CVM console](https://console.cloud.tencent.com/cvm/index), or create a project by calling the [AddProject](https://cloud.tencent.com/document/api/378/4398) API. For example, project ID: 1002189;</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>host-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>[CDH](https://cloud.tencent.com/document/product/416) ID</strong>**. For example, [CDH](https://cloud.tencent.com/document/product/416) ID: host-xxxxxxxx;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance name</strong>**. </p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance status </strong>**. (PENDING: creating | LAUNCH_FAILURE: creation failed | RUNNING: running | EXPIRED: expired)</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     * @param Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>project-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>project ID</strong>**. You can query the existing project list through the [DescribeProject](https://cloud.tencent.com/document/api/378/4400) API or [CVM console](https://console.cloud.tencent.com/cvm/index), or create a project by calling the [AddProject](https://cloud.tencent.com/document/api/378/4398) API. For example, project ID: 1002189;</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>host-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>[CDH](https://cloud.tencent.com/document/product/416) ID</strong>**. For example, [CDH](https://cloud.tencent.com/document/product/416) ID: host-xxxxxxxx;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance name</strong>**. </p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance status </strong>**. (PENDING: creating | LAUNCH_FAILURE: creation failed | RUNNING: running | EXPIRED: expired)</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset; default value: 0.
                     * @return Offset Offset; default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset; default value: 0.
                     * @param Offset Offset; default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results returned; default value: 20; maximum: 100.
                     * @return Limit Number of results returned; default value: 20; maximum: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned; default value: 20; maximum: 100.
                     * @param Limit Number of results returned; default value: 20; maximum: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>project-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>project ID</strong>**. You can query the existing project list through the [DescribeProject](https://cloud.tencent.com/document/api/378/4400) API or [CVM console](https://console.cloud.tencent.com/cvm/index), or create a project by calling the [AddProject](https://cloud.tencent.com/document/api/378/4398) API. For example, project ID: 1002189;</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>host-id</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>[CDH](https://cloud.tencent.com/document/product/416) ID</strong>**. For example, [CDH](https://cloud.tencent.com/document/product/416) ID: host-xxxxxxxx;</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance name</strong>**. </p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>CDH instance status </strong>**. (PENDING: creating | LAUNCH_FAILURE: creation failed | RUNNING: running | EXPIRED: expired)</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 5 `Filters.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset; default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned; default value: 20; maximum: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSREQUEST_H_
