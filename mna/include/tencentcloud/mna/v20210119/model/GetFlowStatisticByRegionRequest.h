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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYREGIONREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowStatisticByRegion request structure.
                */
                class GetFlowStatisticByRegionRequest : public AbstractModel
                {
                public:
                    GetFlowStatisticByRegionRequest();
                    ~GetFlowStatisticByRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Search start time
                     * @return BeginTime Search start time
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Search start time
                     * @param _beginTime Search start time
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取end time
                     * @return EndTime end time
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置end time
                     * @param _endTime end time
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * @return Type Traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * @param _type Traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Time granularity (1: hourly statistics, 2: daily statistics)
                     * @return TimeGranularity Time granularity (1: hourly statistics, 2: daily statistics)
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置Time granularity (1: hourly statistics, 2: daily statistics)
                     * @param _timeGranularity Time granularity (1: hourly statistics, 2: daily statistics)
                     * 
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     * 
                     */
                    bool TimeGranularityHasBeenSet() const;

                    /**
                     * 获取Gateway type. 0: public cloud gateway; 1: private gateway.
                     * @return GatewayType Gateway type. 0: public cloud gateway; 1: private gateway.
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置Gateway type. 0: public cloud gateway; 1: private gateway.
                     * @param _gatewayType Gateway type. 0: public cloud gateway; 1: private gateway.
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. Leave it blank to represent all regions.
                     * @return AccessRegion Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. Leave it blank to represent all regions.
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. Leave it blank to represent all regions.
                     * @param _accessRegion Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. Leave it blank to represent all regions.
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                private:

                    /**
                     * Search start time
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * end time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Time granularity (1: hourly statistics, 2: daily statistics)
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * Gateway type. 0: public cloud gateway; 1: private gateway.
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. Leave it blank to represent all regions.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYREGIONREQUEST_H_
