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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineOverviewStatistic.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineOverview response structure.
                */
                class DescribeBaselineOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBaselineOverviewResponse();
                    ~DescribeBaselineOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline overview statistics (number of failed items for hosts/clusters and fixes in the past one year).</p>
                     * @return Statistics <p>Baseline overview statistics (number of failed items for hosts/clusters and fixes in the past one year).</p>
                     * 
                     */
                    BaselineOverviewStatistic GetStatistics() const;

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取<p>Last baseline scan completion time.</p>
                     * @return LatestScanTime <p>Last baseline scan completion time.</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether any periodic scanning is currently enabled. true: on, false: off.</p>
                     * @return EnableCycleScan <p>Whether any periodic scanning is currently enabled. true: on, false: off.</p>
                     * 
                     */
                    bool GetEnableCycleScan() const;

                    /**
                     * 判断参数 EnableCycleScan 是否已赋值
                     * @return EnableCycleScan 是否已赋值
                     * 
                     */
                    bool EnableCycleScanHasBeenSet() const;

                    /**
                     * 获取<p>Number of in-progress scan main tasks.</p>
                     * @return ScanningTaskCount <p>Number of in-progress scan main tasks.</p>
                     * 
                     */
                    uint64_t GetScanningTaskCount() const;

                    /**
                     * 判断参数 ScanningTaskCount 是否已赋值
                     * @return ScanningTaskCount 是否已赋值
                     * 
                     */
                    bool ScanningTaskCountHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline overview statistics (number of failed items for hosts/clusters and fixes in the past one year).</p>
                     */
                    BaselineOverviewStatistic m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * <p>Last baseline scan completion time.</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>Whether any periodic scanning is currently enabled. true: on, false: off.</p>
                     */
                    bool m_enableCycleScan;
                    bool m_enableCycleScanHasBeenSet;

                    /**
                     * <p>Number of in-progress scan main tasks.</p>
                     */
                    uint64_t m_scanningTaskCount;
                    bool m_scanningTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEOVERVIEWRESPONSE_H_
