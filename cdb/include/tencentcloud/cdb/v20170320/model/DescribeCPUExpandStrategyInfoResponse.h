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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AutoStrategy.h>
#include <tencentcloud/cdb/v20170320/model/PeriodStrategy.h>
#include <tencentcloud/cdb/v20170320/model/TimeIntervalStrategy.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCPUExpandStrategyInfo response structure.
                */
                class DescribeCPUExpandStrategyInfoResponse : public AbstractModel
                {
                public:
                    DescribeCPUExpandStrategyInfoResponse();
                    ~DescribeCPUExpandStrategyInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy type. Output value: auto, manual, timeInterval, period.
Description: 1. auto means auto-scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle. 5. If the return is NULL, the elastic expansion strategy is not yet opened.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Policy type. Output value: auto, manual, timeInterval, period.
Description: 1. auto means auto-scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle. 5. If the return is NULL, the elastic expansion strategy is not yet opened.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Custom expansion with CPU that takes effect immediately. Valid when Type is manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpandCpu Custom expansion with CPU that takes effect immediately. Valid when Type is manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取Auto scale-out policy. Valid when Type is auto.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoStrategy Auto scale-out policy. Valid when Type is auto.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AutoStrategy GetAutoStrategy() const;

                    /**
                     * 判断参数 AutoStrategy 是否已赋值
                     * @return AutoStrategy 是否已赋值
                     * 
                     */
                    bool AutoStrategyHasBeenSet() const;

                    /**
                     * 获取Scaling policy by cycle. Valid when Type is period.
                     * @return PeriodStrategy Scaling policy by cycle. Valid when Type is period.
                     * 
                     */
                    PeriodStrategy GetPeriodStrategy() const;

                    /**
                     * 判断参数 PeriodStrategy 是否已赋值
                     * @return PeriodStrategy 是否已赋值
                     * 
                     */
                    bool PeriodStrategyHasBeenSet() const;

                    /**
                     * 获取Scaling policy by time period. Valid when Type is timeInterval.
                     * @return TimeIntervalStrategy Scaling policy by time period. Valid when Type is timeInterval.
                     * 
                     */
                    TimeIntervalStrategy GetTimeIntervalStrategy() const;

                    /**
                     * 判断参数 TimeIntervalStrategy 是否已赋值
                     * @return TimeIntervalStrategy 是否已赋值
                     * 
                     */
                    bool TimeIntervalStrategyHasBeenSet() const;

                private:

                    /**
                     * Policy type. Output value: auto, manual, timeInterval, period.
Description: 1. auto means auto-scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle. 5. If the return is NULL, the elastic expansion strategy is not yet opened.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Custom expansion with CPU that takes effect immediately. Valid when Type is manual.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * Auto scale-out policy. Valid when Type is auto.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AutoStrategy m_autoStrategy;
                    bool m_autoStrategyHasBeenSet;

                    /**
                     * Scaling policy by cycle. Valid when Type is period.
                     */
                    PeriodStrategy m_periodStrategy;
                    bool m_periodStrategyHasBeenSet;

                    /**
                     * Scaling policy by time period. Valid when Type is timeInterval.
                     */
                    TimeIntervalStrategy m_timeIntervalStrategy;
                    bool m_timeIntervalStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYINFORESPONSE_H_
