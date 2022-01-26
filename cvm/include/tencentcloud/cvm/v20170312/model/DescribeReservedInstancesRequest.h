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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_

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
                * DescribeReservedInstances request structure.
                */
                class DescribeReservedInstancesRequest : public AbstractModel
                {
                public:
                    DescribeReservedInstancesRequest();
                    ~DescribeReservedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dry run. The default is false.
                     * @return DryRun Dry run. The default is false.
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Dry run. The default is false.
                     * @param DryRun Dry run. The default is false.
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param Offset Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param Limit Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filters by <strong>availability zone</strong> in which reserved instances can be purchased, such as `ap-guangzhou-1`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a></p>
<li><strong>duration</strong></li>
<p style="padding-left: 30px;">Filters by <strong>validity period</strong> of the reserved instance, such as `31536000`.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Unit: second</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: 31536000 (1 year)</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>specification of the reserved instance</strong>, such as `S3.MEDIUM4`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filters by <strong>type of the reserved instance</strong>, such as `S3`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>offering-type</strong></li>
<li><strong>offering-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>payment method</strong>, such as `All Upfront`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: All Upfront | Partial Upfront | No Upfront</p>
<li><strong>product-description</strong></li>
<p style="padding-left: 30px;">Filters by <strong>platform description</strong> (operating system) of the reserved instance, such as `linux`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: linux</p>
<li><strong>reserved-instances-id</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance ID</strong> in the form of 650c138f-ae7e-4750-952a-96841d6e9fc1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance status</strong>, such as `active`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: active (created) | pending (waiting to be created) | retired (expired)</p>
Each request can have up to 10 `Filters` and 5 `Filter.Values`.
                     * @return Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filters by <strong>availability zone</strong> in which reserved instances can be purchased, such as `ap-guangzhou-1`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a></p>
<li><strong>duration</strong></li>
<p style="padding-left: 30px;">Filters by <strong>validity period</strong> of the reserved instance, such as `31536000`.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Unit: second</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: 31536000 (1 year)</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>specification of the reserved instance</strong>, such as `S3.MEDIUM4`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filters by <strong>type of the reserved instance</strong>, such as `S3`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>offering-type</strong></li>
<li><strong>offering-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>payment method</strong>, such as `All Upfront`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: All Upfront | Partial Upfront | No Upfront</p>
<li><strong>product-description</strong></li>
<p style="padding-left: 30px;">Filters by <strong>platform description</strong> (operating system) of the reserved instance, such as `linux`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: linux</p>
<li><strong>reserved-instances-id</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance ID</strong> in the form of 650c138f-ae7e-4750-952a-96841d6e9fc1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance status</strong>, such as `active`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: active (created) | pending (waiting to be created) | retired (expired)</p>
Each request can have up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filters by <strong>availability zone</strong> in which reserved instances can be purchased, such as `ap-guangzhou-1`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a></p>
<li><strong>duration</strong></li>
<p style="padding-left: 30px;">Filters by <strong>validity period</strong> of the reserved instance, such as `31536000`.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Unit: second</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: 31536000 (1 year)</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>specification of the reserved instance</strong>, such as `S3.MEDIUM4`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filters by <strong>type of the reserved instance</strong>, such as `S3`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>offering-type</strong></li>
<li><strong>offering-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>payment method</strong>, such as `All Upfront`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: All Upfront | Partial Upfront | No Upfront</p>
<li><strong>product-description</strong></li>
<p style="padding-left: 30px;">Filters by <strong>platform description</strong> (operating system) of the reserved instance, such as `linux`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: linux</p>
<li><strong>reserved-instances-id</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance ID</strong> in the form of 650c138f-ae7e-4750-952a-96841d6e9fc1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance status</strong>, such as `active`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: active (created) | pending (waiting to be created) | retired (expired)</p>
Each request can have up to 10 `Filters` and 5 `Filter.Values`.
                     * @param Filters <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filters by <strong>availability zone</strong> in which reserved instances can be purchased, such as `ap-guangzhou-1`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a></p>
<li><strong>duration</strong></li>
<p style="padding-left: 30px;">Filters by <strong>validity period</strong> of the reserved instance, such as `31536000`.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Unit: second</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: 31536000 (1 year)</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>specification of the reserved instance</strong>, such as `S3.MEDIUM4`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filters by <strong>type of the reserved instance</strong>, such as `S3`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>offering-type</strong></li>
<li><strong>offering-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>payment method</strong>, such as `All Upfront`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: All Upfront | Partial Upfront | No Upfront</p>
<li><strong>product-description</strong></li>
<p style="padding-left: 30px;">Filters by <strong>platform description</strong> (operating system) of the reserved instance, such as `linux`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: linux</p>
<li><strong>reserved-instances-id</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance ID</strong> in the form of 650c138f-ae7e-4750-952a-96841d6e9fc1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance status</strong>, such as `active`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: active (created) | pending (waiting to be created) | retired (expired)</p>
Each request can have up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Dry run. The default is false.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Offset. The default value is 0. For more information on `Offset`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. The default value is 20. The maximum is 100. For more information on `Limit`, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <li><strong>zone</strong></li>
<p style="padding-left: 30px;">Filters by <strong>availability zone</strong> in which reserved instances can be purchased, such as `ap-guangzhou-1`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/6091?from_cn_redirect=1">Availability Zones</a></p>
<li><strong>duration</strong></li>
<p style="padding-left: 30px;">Filters by <strong>validity period</strong> of the reserved instance, such as `31536000`.</p><p style="padding-left: 30px;">Type: Integer</p><p style="padding-left: 30px;">Unit: second</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: 31536000 (1 year)</p>
<li><strong>instance-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>specification of the reserved instance</strong>, such as `S3.MEDIUM4`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>instance-family</strong></li>
<p style="padding-left: 30px;">Filters by <strong>type of the reserved instance</strong>, such as `S3`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: please see <a href="https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1">Reserved Instance Types</a></p>
<li><strong>offering-type</strong></li>
<li><strong>offering-type</strong></li>
<p style="padding-left: 30px;">Filters by <strong>payment method</strong>, such as `All Upfront`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: All Upfront | Partial Upfront | No Upfront</p>
<li><strong>product-description</strong></li>
<p style="padding-left: 30px;">Filters by <strong>platform description</strong> (operating system) of the reserved instance, such as `linux`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid value: linux</p>
<li><strong>reserved-instances-id</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance ID</strong> in the form of 650c138f-ae7e-4750-952a-96841d6e9fc1.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p>
<li><strong>state</strong></li>
<p style="padding-left: 30px;">Filters by <strong>reserved instance status</strong>, such as `active`.</p><p style="padding-left: 30px;">Type: String</p><p style="padding-left: 30px;">Required: no</p><p style="padding-left: 30px;">Valid values: active (created) | pending (waiting to be created) | retired (expired)</p>
Each request can have up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESREQUEST_H_
