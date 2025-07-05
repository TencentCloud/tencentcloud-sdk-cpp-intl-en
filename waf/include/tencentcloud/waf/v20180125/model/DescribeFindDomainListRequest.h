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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFINDDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFINDDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeFindDomainList request structure.
                */
                class DescribeFindDomainListRequest : public AbstractModel
                {
                public:
                    DescribeFindDomainListRequest();
                    ~DescribeFindDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination
                     * @return Offset Pagination
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination
                     * @param _offset Pagination
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
                     * 获取Capacity per page
                     * @return Limit Capacity per page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Capacity per page
                     * @param _limit Capacity per page
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
                     * 获取Filter criteria.
                     * @return Key Filter criteria.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Filter criteria.
                     * @param _key Filter criteria.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Whether to access WAF
                     * @return IsWafDomain Whether to access WAF
                     * 
                     */
                    std::string GetIsWafDomain() const;

                    /**
                     * 设置Whether to access WAF
                     * @param _isWafDomain Whether to access WAF
                     * 
                     */
                    void SetIsWafDomain(const std::string& _isWafDomain);

                    /**
                     * 判断参数 IsWafDomain 是否已赋值
                     * @return IsWafDomain 是否已赋值
                     * 
                     */
                    bool IsWafDomainHasBeenSet() const;

                    /**
                     * 获取Sort parameters
                     * @return By Sort parameters
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort parameters
                     * @param _by Sort parameters
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
                     * 获取Sorting method
                     * @return Order Sorting method
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method
                     * @param _order Sorting method
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Pagination
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Capacity per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Whether to access WAF
                     */
                    std::string m_isWafDomain;
                    bool m_isWafDomainHasBeenSet;

                    /**
                     * Sort parameters
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting method
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFINDDOMAINLISTREQUEST_H_
