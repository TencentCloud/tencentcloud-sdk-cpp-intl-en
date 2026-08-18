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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeDashboards response structure.
                */
                class DescribeDashboardsResponse : public AbstractModel
                {
                public:
                    DescribeDashboardsResponse();
                    ~DescribeDashboardsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of dashboards
                     * @return TotalCount Number of dashboards
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Dashboard details
                     * @return DashboardInfos Dashboard details
                     * 
                     */
                    std::vector<DashboardInfo> GetDashboardInfos() const;

                    /**
                     * 判断参数 DashboardInfos 是否已赋值
                     * @return DashboardInfos 是否已赋值
                     * 
                     */
                    bool DashboardInfosHasBeenSet() const;

                private:

                    /**
                     * Number of dashboards
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Dashboard details
                     */
                    std::vector<DashboardInfo> m_dashboardInfos;
                    bool m_dashboardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSRESPONSE_H_
