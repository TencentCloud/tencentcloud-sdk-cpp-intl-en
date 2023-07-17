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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSREQUEST_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            namespace Model
            {
                /**
                * DescribeEvents request structure.
                */
                class DescribeEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventsRequest();
                    ~DescribeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取event occurrence date
                     * @return EventDate event occurrence date
                     * 
                     */
                    std::string GetEventDate() const;

                    /**
                     * 设置event occurrence date
                     * @param _eventDate event occurrence date
                     * 
                     */
                    void SetEventDate(const std::string& _eventDate);

                    /**
                     * 判断参数 EventDate 是否已赋值
                     * @return EventDate 是否已赋值
                     * 
                     */
                    bool EventDateHasBeenSet() const;

                    /**
                     * 获取Query by Product ID(s). Product ID examples: cvm, lb, cdb, cdn, crs.
                     * @return ProductIds Query by Product ID(s). Product ID examples: cvm, lb, cdb, cdn, crs.
                     * 
                     */
                    std::vector<std::string> GetProductIds() const;

                    /**
                     * 设置Query by Product ID(s). Product ID examples: cvm, lb, cdb, cdn, crs.
                     * @param _productIds Query by Product ID(s). Product ID examples: cvm, lb, cdb, cdn, crs.
                     * 
                     */
                    void SetProductIds(const std::vector<std::string>& _productIds);

                    /**
                     * 判断参数 ProductIds 是否已赋值
                     * @return ProductIds 是否已赋值
                     * 
                     */
                    bool ProductIdsHasBeenSet() const;

                    /**
                     * 获取 1. Query by Region ID(s). Region ID examples: ap-guangzhou、ap-shanghai、ap-singapore.
2. The region ID for non-region-specific products should be set to non-regional.
                     * @return RegionIds  1. Query by Region ID(s). Region ID examples: ap-guangzhou、ap-shanghai、ap-singapore.
2. The region ID for non-region-specific products should be set to non-regional.
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置 1. Query by Region ID(s). Region ID examples: ap-guangzhou、ap-shanghai、ap-singapore.
2. The region ID for non-region-specific products should be set to non-regional.
                     * @param _regionIds  1. Query by Region ID(s). Region ID examples: ap-guangzhou、ap-shanghai、ap-singapore.
2. The region ID for non-region-specific products should be set to non-regional.
                     * 
                     */
                    void SetRegionIds(const std::vector<std::string>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                private:

                    /**
                     * event occurrence date
                     */
                    std::string m_eventDate;
                    bool m_eventDateHasBeenSet;

                    /**
                     * Query by Product ID(s). Product ID examples: cvm, lb, cdb, cdn, crs.
                     */
                    std::vector<std::string> m_productIds;
                    bool m_productIdsHasBeenSet;

                    /**
                     *  1. Query by Region ID(s). Region ID examples: ap-guangzhou、ap-shanghai、ap-singapore.
2. The region ID for non-region-specific products should be set to non-regional.
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSREQUEST_H_
