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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAuditInstanceList request structure.
                */
                class DescribeAuditInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeAuditInstanceListRequest();
                    ~DescribeAuditInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Product name: postgres</p>
                     * @return Product <p>Product name: postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Product name: postgres</p>
                     * @param _product <p>Product name: postgres</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable</p><p>Enumeration value:</p><ul><li>0: Not enabled</li><li>1: Enabled</li></ul>
                     * @return AuditSwitch <p>Whether to enable</p><p>Enumeration value:</p><ul><li>0: Not enabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    uint64_t GetAuditSwitch() const;

                    /**
                     * 设置<p>Whether to enable</p><p>Enumeration value:</p><ul><li>0: Not enabled</li><li>1: Enabled</li></ul>
                     * @param _auditSwitch <p>Whether to enable</p><p>Enumeration value:</p><ul><li>0: Not enabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    void SetAuditSwitch(const uint64_t& _auditSwitch);

                    /**
                     * 判断参数 AuditSwitch 是否已赋值
                     * @return AuditSwitch 是否已赋值
                     * 
                     */
                    bool AuditSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Pagination limit</p>
                     * @return Limit <p>Pagination limit</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Pagination limit</p>
                     * @param _limit <p>Pagination limit</p>
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
                     * 获取<p>Page offset amount</p>
                     * @return Offset <p>Page offset amount</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Page offset amount</p>
                     * @param _offset <p>Page offset amount</p>
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
                     * 获取<p>Instance filtering parameters</p><p>Input parameter limitation: Supported filter criteria: InstanceId-instance ID, InstanceName-instance name</p>
                     * @return Filters <p>Instance filtering parameters</p><p>Input parameter limitation: Supported filter criteria: InstanceId-instance ID, InstanceName-instance name</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Instance filtering parameters</p><p>Input parameter limitation: Supported filter criteria: InstanceId-instance ID, InstanceName-instance name</p>
                     * @param _filters <p>Instance filtering parameters</p><p>Input parameter limitation: Supported filter criteria: InstanceId-instance ID, InstanceName-instance name</p>
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
                     * <p>Product name: postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>Whether to enable</p><p>Enumeration value:</p><ul><li>0: Not enabled</li><li>1: Enabled</li></ul>
                     */
                    uint64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * <p>Pagination limit</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Page offset amount</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Instance filtering parameters</p><p>Input parameter limitation: Supported filter criteria: InstanceId-instance ID, InstanceName-instance name</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
