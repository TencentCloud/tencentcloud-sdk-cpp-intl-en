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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTREQUEST_H_

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
                * DescribeBlockIgnoreList request structure.
                */
                class DescribeBlockIgnoreListRequest : public AbstractModel
                {
                public:
                    DescribeBlockIgnoreListRequest();
                    ~DescribeBlockIgnoreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
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
                     * 获取Page offset.
                     * @return Offset Page offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset.
                     * @param _offset Page offset.
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
                     * 获取Direction. Valid values: 1: inbound public access; 0: outbound public access; 3: private network access; empty string: all access.
                     * @return Direction Direction. Valid values: 1: inbound public access; 0: outbound public access; 3: private network access; empty string: all access.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Direction. Valid values: 1: inbound public access; 0: outbound public access; 3: private network access; empty string: all access.
                     * @param _direction Direction. Valid values: 1: inbound public access; 0: outbound public access; 3: private network access; empty string: all access.
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Rule type. Valid values: 1: block; 2: allow.
                     * @return RuleType Rule type. Valid values: 1: block; 2: allow.
                     * 
                     */
                    uint64_t GetRuleType() const;

                    /**
                     * 设置Rule type. Valid values: 1: block; 2: allow.
                     * @param _ruleType Rule type. Valid values: 1: block; 2: allow.
                     * 
                     */
                    void SetRuleType(const uint64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Column by which rules are sorted. Valid values: EndTime: end time; StartTime: start time; MatchTimes: number of matching times.
                     * @return Order Column by which rules are sorted. Valid values: EndTime: end time; StartTime: start time; MatchTimes: number of matching times.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Column by which rules are sorted. Valid values: EndTime: end time; StartTime: start time; MatchTimes: number of matching times.
                     * @param _order Column by which rules are sorted. Valid values: EndTime: end time; StartTime: start time; MatchTimes: number of matching times.
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
                     * 获取Sort order. Valid values: desc: descending; asc: ascending.
                     * @return By Sort order. Valid values: desc: descending; asc: ascending.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort order. Valid values: desc: descending; asc: ascending.
                     * @param _by Sort order. Valid values: desc: descending; asc: ascending.
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
                     * 获取Search keys, in a JSON string. Valid values: {}: empty; domain: domain name; level: threat level; ignore_reason: reason for allowing access; rule_source: source of a security event; address: geographical location; common: fuzzy search.
                     * @return SearchValue Search keys, in a JSON string. Valid values: {}: empty; domain: domain name; level: threat level; ignore_reason: reason for allowing access; rule_source: source of a security event; address: geographical location; common: fuzzy search.
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Search keys, in a JSON string. Valid values: {}: empty; domain: domain name; level: threat level; ignore_reason: reason for allowing access; rule_source: source of a security event; address: geographical location; common: fuzzy search.
                     * @param _searchValue Search keys, in a JSON string. Valid values: {}: empty; domain: domain name; level: threat level; ignore_reason: reason for allowing access; rule_source: source of a security event; address: geographical location; common: fuzzy search.
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                private:

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Direction. Valid values: 1: inbound public access; 0: outbound public access; 3: private network access; empty string: all access.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Rule type. Valid values: 1: block; 2: allow.
                     */
                    uint64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Column by which rules are sorted. Valid values: EndTime: end time; StartTime: start time; MatchTimes: number of matching times.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sort order. Valid values: desc: descending; asc: ascending.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Search keys, in a JSON string. Valid values: {}: empty; domain: domain name; level: threat level; ignore_reason: reason for allowing access; rule_source: source of a security event; address: geographical location; common: fuzzy search.
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTREQUEST_H_
