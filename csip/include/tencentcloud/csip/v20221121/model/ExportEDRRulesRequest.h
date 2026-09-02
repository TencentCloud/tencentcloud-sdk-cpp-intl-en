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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTEDRRULESREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTEDRRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ExportEDRRules request structure.
                */
                class ExportEDRRulesRequest : public AbstractModel
                {
                public:
                    ExportEDRRulesRequest();
                    ~ExportEDRRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria: Name, RuleContent, RuleType, ContentType, Action, Level, DetectMode, DetectType, AttackStage, Status</p>
                     * @return Filters <p>Filter criteria: Name, RuleContent, RuleType, ContentType, Action, Level, DetectMode, DetectType, AttackStage, Status</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria: Name, RuleContent, RuleType, ContentType, Action, Level, DetectMode, DetectType, AttackStage, Status</p>
                     * @param _filters <p>Filter criteria: Name, RuleContent, RuleType, ContentType, Action, Level, DetectMode, DetectType, AttackStage, Status</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method (case insensitive): ASC for ascending order; DESC for descending order</p>
                     * @return Order <p>Sorting method (case insensitive): ASC for ascending order; DESC for descending order</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting method (case insensitive): ASC for ascending order; DESC for descending order</p>
                     * @param _order <p>Sorting method (case insensitive): ASC for ascending order; DESC for descending order</p>
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
                     * 获取<p>Sort column: ModifyTime</p>
                     * @return By <p>Sort column: ModifyTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sort column: ModifyTime</p>
                     * @param _by <p>Sort column: ModifyTime</p>
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
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter criteria: Name, RuleContent, RuleType, ContentType, Action, Level, DetectMode, DetectType, AttackStage, Status</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sorting method (case insensitive): ASC for ascending order; DESC for descending order</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sort column: ModifyTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTEDRRULESREQUEST_H_
