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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertGroupSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusAlertGroups response structure.
                */
                class DescribePrometheusAlertGroupsResponse : public AbstractModel
                {
                public:
                    DescribePrometheusAlertGroupsResponse();
                    ~DescribePrometheusAlertGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alert group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlertGroupSet Alert group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusAlertGroupSet> GetAlertGroupSet() const;

                    /**
                     * 判断参数 AlertGroupSet 是否已赋值
                     * @return AlertGroupSet 是否已赋值
                     * 
                     */
                    bool AlertGroupSetHasBeenSet() const;

                    /**
                     * 获取Total count of Alert groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total count of Alert groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Alert group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusAlertGroupSet> m_alertGroupSet;
                    bool m_alertGroupSetHasBeenSet;

                    /**
                     * Total count of Alert groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSRESPONSE_H_
