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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYFORORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYFORORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummaryForOrganization request structure.
                */
                class DescribeBillSummaryForOrganizationRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryForOrganizationRequest();
                    ~DescribeBillSummaryForOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Bill month in the format of "yyyy-mm".
                     * @return Month Bill month in the format of "yyyy-mm".
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month in the format of "yyyy-mm".
                     * @param _month Bill month in the format of "yyyy-mm".
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
                     * 获取Bill dimension. Valid values: `business`, `project`, `region`, `payMode`, and `tag`.
                     * @return GroupType Bill dimension. Valid values: `business`, `project`, `region`, `payMode`, and `tag`.
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Bill dimension. Valid values: `business`, `project`, `region`, `payMode`, and `tag`.
                     * @param _groupType Bill dimension. Valid values: `business`, `project`, `region`, `payMode`, and `tag`.
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
                     * 获取Tag key. Pass in it when `GroupType` is `tag`.
                     * @return TagKey Tag key. Pass in it when `GroupType` is `tag`.
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 设置Tag key. Pass in it when `GroupType` is `tag`.
                     * @param _tagKey Tag key. Pass in it when `GroupType` is `tag`.
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
                     * Bill month in the format of "yyyy-mm".
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Bill dimension. Valid values: `business`, `project`, `region`, `payMode`, and `tag`.
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Tag key. Pass in it when `GroupType` is `tag`.
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYFORORGANIZATIONREQUEST_H_
