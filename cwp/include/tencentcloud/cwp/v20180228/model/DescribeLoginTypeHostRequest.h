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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEHOSTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLoginTypeHost request structure.
                */
                class DescribeLoginTypeHostRequest : public AbstractModel
                {
                public:
                    DescribeLoginTypeHostRequest();
                    ~DescribeLoginTypeHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>Name - string - Required: No - Host name</li> <li>InstanceId - string - Required: No - Instance ID</li> <li>PublicIp - string - Required: No - Public IP address</li> <li>PrivateIp - string - Required: No - Private IP</li>
                     * @return Filters <li>Name - string - Required: No - Host name</li> <li>InstanceId - string - Required: No - Instance ID</li> <li>PublicIp - string - Required: No - Public IP address</li> <li>PrivateIp - string - Required: No - Private IP</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>Name - string - Required: No - Host name</li> <li>InstanceId - string - Required: No - Instance ID</li> <li>PublicIp - string - Required: No - Public IP address</li> <li>PrivateIp - string - Required: No - Private IP</li>
                     * @param _filters <li>Name - string - Required: No - Host name</li> <li>InstanceId - string - Required: No - Instance ID</li> <li>PublicIp - string - Required: No - Public IP address</li> <li>PrivateIp - string - Required: No - Private IP</li>
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
                     * 获取<p>The maximum number of entries. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>The maximum number of entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>The maximum number of entries. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>The maximum number of entries. Default value: 10. Maximum value: 100.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Sort order: [ASC: ascending, DESC: descending]</p>
                     * @return Order <p>Sort order: [ASC: ascending, DESC: descending]</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sort order: [ASC: ascending, DESC: descending]</p>
                     * @param _order <p>Sort order: [ASC: ascending, DESC: descending]</p>
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
                     * 获取<p>Optional sorting column: [Id]</p>
                     * @return By <p>Optional sorting column: [Id]</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Optional sorting column: [Id]</p>
                     * @param _by <p>Optional sorting column: [Id]</p>
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
                     * <li>Name - string - Required: No - Host name</li> <li>InstanceId - string - Required: No - Instance ID</li> <li>PublicIp - string - Required: No - Public IP address</li> <li>PrivateIp - string - Required: No - Private IP</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>The maximum number of entries. Default value: 10. Maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sort order: [ASC: ascending, DESC: descending]</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Optional sorting column: [Id]</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEHOSTREQUEST_H_
