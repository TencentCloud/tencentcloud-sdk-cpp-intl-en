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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeBillSummary request structure.
                */
                class DescribeBillSummaryRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryRequest();
                    ~DescribeBillSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The month to which the bill belongs, formatted as YYYY-MM.
                     * @return Month The month to which the bill belongs, formatted as YYYY-MM.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置The month to which the bill belongs, formatted as YYYY-MM.
                     * @param _month The month to which the bill belongs, formatted as YYYY-MM.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Billing dimension. Optional parameters: product, project, tag
                     * @return GroupType Billing dimension. Optional parameters: product, project, tag
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Billing dimension. Optional parameters: product, project, tag
                     * @param _groupType Billing dimension. Optional parameters: product, project, tag
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取Tag value list
                     * @return TagKey Tag value list
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 设置Tag value list
                     * @param _tagKey Tag value list
                     * 
                     */
                    void SetTagKey(const std::vector<std::string>& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * The month to which the bill belongs, formatted as YYYY-MM.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Billing dimension. Optional parameters: product, project, tag
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Tag value list
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
