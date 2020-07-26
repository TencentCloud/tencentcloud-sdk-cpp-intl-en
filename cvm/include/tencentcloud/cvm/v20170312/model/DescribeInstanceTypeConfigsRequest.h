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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCETYPECONFIGSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCETYPECONFIGSREQUEST_H_

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
                * DescribeInstanceTypeConfigs request structure.
                */
                class DescribeInstanceTypeConfigsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceTypeConfigsRequest();
                    ~DescribeInstanceTypeConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>instance models</strong>**. For example, instance models: S1, I1 and M1.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 1 `Filters.Values`.
                     * @return Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>instance models</strong>**. For example, instance models: S1, I1 and M1.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 1 `Filters.Values`.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>instance models</strong>**. For example, instance models: S1, I1 and M1.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 1 `Filters.Values`.
                     * @param Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>instance models</strong>**. For example, instance models: S1, I1 and M1.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 1 `Filters.Values`.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>availability zones</strong>**. For example, availability zone: ap-guangzhou-1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: <a href="https://cloud.tencent.com/document/product/213/6091">list of availability zones</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filter results by **<strong>instance models</strong>**. For example, instance models: S1, I1 and M1.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Required: no</p>
Each request can have up to 10 `Filters` and 1 `Filters.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCETYPECONFIGSREQUEST_H_
