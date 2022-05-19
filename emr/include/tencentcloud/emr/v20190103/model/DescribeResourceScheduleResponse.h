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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeResourceSchedule response structure.
                */
                class DescribeResourceScheduleResponse : public AbstractModel
                {
                public:
                    DescribeResourceScheduleResponse();
                    ~DescribeResourceScheduleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable the resource scheduling feature
                     * @return OpenSwitch Whether to enable the resource scheduling feature
                     */
                    bool GetOpenSwitch() const;

                    /**
                     * 判断参数 OpenSwitch 是否已赋值
                     * @return OpenSwitch 是否已赋值
                     */
                    bool OpenSwitchHasBeenSet() const;

                    /**
                     * 获取The resource scheduler in service
                     * @return Scheduler The resource scheduler in service
                     */
                    std::string GetScheduler() const;

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Fair Scheduler information
                     * @return FSInfo Fair Scheduler information
                     */
                    std::string GetFSInfo() const;

                    /**
                     * 判断参数 FSInfo 是否已赋值
                     * @return FSInfo 是否已赋值
                     */
                    bool FSInfoHasBeenSet() const;

                    /**
                     * 获取Capacity Scheduler information
                     * @return CSInfo Capacity Scheduler information
                     */
                    std::string GetCSInfo() const;

                    /**
                     * 判断参数 CSInfo 是否已赋值
                     * @return CSInfo 是否已赋值
                     */
                    bool CSInfoHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the resource scheduling feature
                     */
                    bool m_openSwitch;
                    bool m_openSwitchHasBeenSet;

                    /**
                     * The resource scheduler in service
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Fair Scheduler information
                     */
                    std::string m_fSInfo;
                    bool m_fSInfoHasBeenSet;

                    /**
                     * Capacity Scheduler information
                     */
                    std::string m_cSInfo;
                    bool m_cSInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULERESPONSE_H_
