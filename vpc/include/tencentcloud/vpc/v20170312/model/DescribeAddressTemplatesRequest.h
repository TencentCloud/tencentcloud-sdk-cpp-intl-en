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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAddressTemplates request structure.
                */
                class DescribeAddressTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAddressTemplatesRequest();
                    ~DescribeAddressTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filters
<li>address-template-name - IP address template name.</li>
<li>address-template-id - IP address template ID, such as `ipm-mdunqeb6`.</li>
<li>address-ip - IP address.</li>
                     * @return Filters Filters
<li>address-template-name - IP address template name.</li>
<li>address-template-id - IP address template ID, such as `ipm-mdunqeb6`.</li>
<li>address-ip - IP address.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
<li>address-template-name - IP address template name.</li>
<li>address-template-id - IP address template ID, such as `ipm-mdunqeb6`.</li>
<li>address-ip - IP address.</li>
                     * @param _filters Filters
<li>address-template-name - IP address template name.</li>
<li>address-template-id - IP address template ID, such as `ipm-mdunqeb6`.</li>
<li>address-ip - IP address.</li>
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
                     * 获取Offset. The default value is 0.
                     * @return Offset Offset. The default value is 0.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0.
                     * @param _offset Offset. The default value is 0.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of values to be returned. The default value is 20. Maximum is 100.
                     * @return Limit Number of values to be returned. The default value is 20. Maximum is 100.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number of values to be returned. The default value is 20. Maximum is 100.
                     * @param _limit Number of values to be returned. The default value is 20. Maximum is 100.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Filters
<li>address-template-name - IP address template name.</li>
<li>address-template-id - IP address template ID, such as `ipm-mdunqeb6`.</li>
<li>address-ip - IP address.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. The default value is 0.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of values to be returned. The default value is 20. Maximum is 100.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_
