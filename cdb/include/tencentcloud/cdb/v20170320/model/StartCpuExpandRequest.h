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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_STARTCPUEXPANDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_STARTCPUEXPANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AutoStrategy.h>
#include <tencentcloud/cdb/v20170320/model/TimeIntervalStrategy.h>
#include <tencentcloud/cdb/v20170320/model/PeriodStrategy.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * StartCpuExpand request structure.
                */
                class StartCpuExpandRequest : public AbstractModel
                {
                public:
                    StartCpuExpandRequest();
                    ~StartCpuExpandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Scale-out type supports auto-scaling and custom scaling.
Description: 1. auto means automatic scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle.
                     * @return Type Scale-out type supports auto-scaling and custom scaling.
Description: 1. auto means automatic scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Scale-out type supports auto-scaling and custom scaling.
Description: 1. auto means automatic scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle.
                     * @param _type Scale-out type supports auto-scaling and custom scaling.
Description: 1. auto means automatic scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores for scale-out during customization.
Description: 1. This parameter is required when Type is set to manual, timeInterval, or period. 2. The maximum number of CPU cores to increase is the current instance's CPU core number. For example, an 8-core 16GB instance can scale out up to 8 CPU cores, with a range of 1 - 8.
                     * @return ExpandCpu Number of CPU cores for scale-out during customization.
Description: 1. This parameter is required when Type is set to manual, timeInterval, or period. 2. The maximum number of CPU cores to increase is the current instance's CPU core number. For example, an 8-core 16GB instance can scale out up to 8 CPU cores, with a range of 1 - 8.
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 设置Number of CPU cores for scale-out during customization.
Description: 1. This parameter is required when Type is set to manual, timeInterval, or period. 2. The maximum number of CPU cores to increase is the current instance's CPU core number. For example, an 8-core 16GB instance can scale out up to 8 CPU cores, with a range of 1 - 8.
                     * @param _expandCpu Number of CPU cores for scale-out during customization.
Description: 1. This parameter is required when Type is set to manual, timeInterval, or period. 2. The maximum number of CPU cores to increase is the current instance's CPU core number. For example, an 8-core 16GB instance can scale out up to 8 CPU cores, with a range of 1 - 8.
                     * 
                     */
                    void SetExpandCpu(const int64_t& _expandCpu);

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取Automatic scale-out policy. This parameter is required when Type is set to auto.
                     * @return AutoStrategy Automatic scale-out policy. This parameter is required when Type is set to auto.
                     * 
                     */
                    AutoStrategy GetAutoStrategy() const;

                    /**
                     * 设置Automatic scale-out policy. This parameter is required when Type is set to auto.
                     * @param _autoStrategy Automatic scale-out policy. This parameter is required when Type is set to auto.
                     * 
                     */
                    void SetAutoStrategy(const AutoStrategy& _autoStrategy);

                    /**
                     * 判断参数 AutoStrategy 是否已赋值
                     * @return AutoStrategy 是否已赋值
                     * 
                     */
                    bool AutoStrategyHasBeenSet() const;

                    /**
                     * 获取Scaling policy by time period.
Description: When Type is timeInterval, TimeIntervalStrategy is required.
                     * @return TimeIntervalStrategy Scaling policy by time period.
Description: When Type is timeInterval, TimeIntervalStrategy is required.
                     * 
                     */
                    TimeIntervalStrategy GetTimeIntervalStrategy() const;

                    /**
                     * 设置Scaling policy by time period.
Description: When Type is timeInterval, TimeIntervalStrategy is required.
                     * @param _timeIntervalStrategy Scaling policy by time period.
Description: When Type is timeInterval, TimeIntervalStrategy is required.
                     * 
                     */
                    void SetTimeIntervalStrategy(const TimeIntervalStrategy& _timeIntervalStrategy);

                    /**
                     * 判断参数 TimeIntervalStrategy 是否已赋值
                     * @return TimeIntervalStrategy 是否已赋值
                     * 
                     */
                    bool TimeIntervalStrategyHasBeenSet() const;

                    /**
                     * 获取Scale by cycle.
Description: When Type is period, PeriodStrategy is required.
                     * @return PeriodStrategy Scale by cycle.
Description: When Type is period, PeriodStrategy is required.
                     * 
                     */
                    PeriodStrategy GetPeriodStrategy() const;

                    /**
                     * 设置Scale by cycle.
Description: When Type is period, PeriodStrategy is required.
                     * @param _periodStrategy Scale by cycle.
Description: When Type is period, PeriodStrategy is required.
                     * 
                     */
                    void SetPeriodStrategy(const PeriodStrategy& _periodStrategy);

                    /**
                     * 判断参数 PeriodStrategy 是否已赋值
                     * @return PeriodStrategy 是否已赋值
                     * 
                     */
                    bool PeriodStrategyHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Scale-out type supports auto-scaling and custom scaling.
Description: 1. auto means automatic scaling. 2. manual means custom scaling with immediate effect. 3. timeInterval means custom scaling by time. 4. period means custom scaling by cycle.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of CPU cores for scale-out during customization.
Description: 1. This parameter is required when Type is set to manual, timeInterval, or period. 2. The maximum number of CPU cores to increase is the current instance's CPU core number. For example, an 8-core 16GB instance can scale out up to 8 CPU cores, with a range of 1 - 8.
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * Automatic scale-out policy. This parameter is required when Type is set to auto.
                     */
                    AutoStrategy m_autoStrategy;
                    bool m_autoStrategyHasBeenSet;

                    /**
                     * Scaling policy by time period.
Description: When Type is timeInterval, TimeIntervalStrategy is required.
                     */
                    TimeIntervalStrategy m_timeIntervalStrategy;
                    bool m_timeIntervalStrategyHasBeenSet;

                    /**
                     * Scale by cycle.
Description: When Type is period, PeriodStrategy is required.
                     */
                    PeriodStrategy m_periodStrategy;
                    bool m_periodStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_STARTCPUEXPANDREQUEST_H_
