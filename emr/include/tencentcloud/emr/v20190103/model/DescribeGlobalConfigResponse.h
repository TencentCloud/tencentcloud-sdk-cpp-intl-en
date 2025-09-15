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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGLOBALCONFIGRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGLOBALCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CapacityGlobalConfig.h>
#include <tencentcloud/emr/v20190103/model/FairGlobalConfig.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeGlobalConfig response structure.
                */
                class DescribeGlobalConfigResponse : public AbstractModel
                {
                public:
                    DescribeGlobalConfigResponse();
                    ~DescribeGlobalConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the resource scheduling feature is enabled.
                     * @return EnableResourceSchedule Whether the resource scheduling feature is enabled.
                     * 
                     */
                    bool GetEnableResourceSchedule() const;

                    /**
                     * 判断参数 EnableResourceSchedule 是否已赋值
                     * @return EnableResourceSchedule 是否已赋值
                     * 
                     */
                    bool EnableResourceScheduleHasBeenSet() const;

                    /**
                     * 获取Currently effective resource scheduler.
                     * @return ActiveScheduler Currently effective resource scheduler.
                     * 
                     */
                    std::string GetActiveScheduler() const;

                    /**
                     * 判断参数 ActiveScheduler 是否已赋值
                     * @return ActiveScheduler 是否已赋值
                     * 
                     */
                    bool ActiveSchedulerHasBeenSet() const;

                    /**
                     * 获取Information of the fair scheduler.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CapacityGlobalConfig Information of the fair scheduler.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CapacityGlobalConfig GetCapacityGlobalConfig() const;

                    /**
                     * 判断参数 CapacityGlobalConfig 是否已赋值
                     * @return CapacityGlobalConfig 是否已赋值
                     * 
                     */
                    bool CapacityGlobalConfigHasBeenSet() const;

                    /**
                     * 获取Information of the capacity scheduler.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FairGlobalConfig Information of the capacity scheduler.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FairGlobalConfig GetFairGlobalConfig() const;

                    /**
                     * 判断参数 FairGlobalConfig 是否已赋值
                     * @return FairGlobalConfig 是否已赋值
                     * 
                     */
                    bool FairGlobalConfigHasBeenSet() const;

                    /**
                     * 获取Latest resource scheduler.
                     * @return Scheduler Latest resource scheduler.
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                private:

                    /**
                     * Whether the resource scheduling feature is enabled.
                     */
                    bool m_enableResourceSchedule;
                    bool m_enableResourceScheduleHasBeenSet;

                    /**
                     * Currently effective resource scheduler.
                     */
                    std::string m_activeScheduler;
                    bool m_activeSchedulerHasBeenSet;

                    /**
                     * Information of the fair scheduler.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CapacityGlobalConfig m_capacityGlobalConfig;
                    bool m_capacityGlobalConfigHasBeenSet;

                    /**
                     * Information of the capacity scheduler.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FairGlobalConfig m_fairGlobalConfig;
                    bool m_fairGlobalConfigHasBeenSet;

                    /**
                     * Latest resource scheduler.
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEGLOBALCONFIGRESPONSE_H_
