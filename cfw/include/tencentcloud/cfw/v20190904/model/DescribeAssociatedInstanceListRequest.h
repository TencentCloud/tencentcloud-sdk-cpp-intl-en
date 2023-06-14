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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAssociatedInstanceList request structure.
                */
                class DescribeAssociatedInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeAssociatedInstanceListRequest();
                    ~DescribeAssociatedInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List offset
                     * @return Offset List offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置List offset
                     * @param _offset List offset
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
                     * 获取Number of records per page
                     * @return Limit Number of records per page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of records per page
                     * @param _limit Number of records per page
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
                     * 获取Region code (e.g. ap-guangzhou). All Tencent Cloud regions are supported.
                     * @return Area Region code (e.g. ap-guangzhou). All Tencent Cloud regions are supported.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region code (e.g. ap-guangzhou). All Tencent Cloud regions are supported.
                     * @param _area Region code (e.g. ap-guangzhou). All Tencent Cloud regions are supported.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Additional search criteria (JSON string)
                     * @return SearchValue Additional search criteria (JSON string)
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Additional search criteria (JSON string)
                     * @param _searchValue Additional search criteria (JSON string)
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

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

                    /**
                     * 获取Sort order. asc: ascending; desc: descending
                     * @return Order Sort order. asc: ascending; desc: descending
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order. asc: ascending; desc: descending
                     * @param _order Sort order. asc: ascending; desc: descending
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
                     * 获取Security group ID
                     * @return SecurityGroupId Security group ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
                     * @param _securityGroupId Security group ID
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance type. '3': CVM instance; '4': CLB instance; '5': ENI instance; '6': Cloud database
                     * @return Type Instance type. '3': CVM instance; '4': CLB instance; '5': ENI instance; '6': Cloud database
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Instance type. '3': CVM instance; '4': CLB instance; '5': ENI instance; '6': Cloud database
                     * @param _type Instance type. '3': CVM instance; '4': CLB instance; '5': ENI instance; '6': Cloud database
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * List offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of records per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Region code (e.g. ap-guangzhou). All Tencent Cloud regions are supported.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Additional search criteria (JSON string)
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sort order. asc: ascending; desc: descending
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Security group ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Instance type. '3': CVM instance; '4': CLB instance; '5': ENI instance; '6': Cloud database
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTREQUEST_H_
