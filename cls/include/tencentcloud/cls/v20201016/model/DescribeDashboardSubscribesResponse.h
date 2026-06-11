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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSUBSCRIBESRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSUBSCRIBESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardSubscribeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeDashboardSubscribes response structure.
                */
                class DescribeDashboardSubscribesResponse : public AbstractModel
                {
                public:
                    DescribeDashboardSubscribesResponse();
                    ~DescribeDashboardSubscribesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Dashboard subscription list
                     * @return DashboardSubscribeInfos Dashboard subscription list
                     * 
                     */
                    std::vector<DashboardSubscribeInfo> GetDashboardSubscribeInfos() const;

                    /**
                     * 判断参数 DashboardSubscribeInfos 是否已赋值
                     * @return DashboardSubscribeInfos 是否已赋值
                     * 
                     */
                    bool DashboardSubscribeInfosHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Dashboard subscription list
                     */
                    std::vector<DashboardSubscribeInfo> m_dashboardSubscribeInfos;
                    bool m_dashboardSubscribeInfosHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSUBSCRIBESRESPONSE_H_
