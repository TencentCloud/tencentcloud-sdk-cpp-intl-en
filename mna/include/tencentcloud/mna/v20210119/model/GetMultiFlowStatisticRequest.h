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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_

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
                * GetMultiFlowStatistic request structure.
                */
                class GetMultiFlowStatisticRequest : public AbstractModel
                {
                public:
                    GetMultiFlowStatisticRequest();
                    ~GetMultiFlowStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device id list, up to 10 devices at a time
                     * @return DeviceIds Device id list, up to 10 devices at a time
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置Device id list, up to 10 devices at a time
                     * @param _deviceIds Device id list, up to 10 devices at a time
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取1659514436
                     * @return BeginTime 1659514436
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置1659514436
                     * @param _beginTime 1659514436
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
                     * 获取1659515000
                     * @return EndTime 1659515000
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置1659515000
                     * @param _endTime 1659515000
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
                     * 获取Statistics traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * @return Type Statistics traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Statistics traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     * @param _type Statistics traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
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
                     * 获取Statistical time granularity (1: hourly statistics, 2: daily statistics).
                     * @return TimeGranularity Statistical time granularity (1: hourly statistics, 2: daily statistics).
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置Statistical time granularity (1: hourly statistics, 2: daily statistics).
                     * @param _timeGranularity Statistical time granularity (1: hourly statistics, 2: daily statistics).
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

                    /**
                     * 获取Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * @return GatewayType Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * @param _gatewayType Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                private:

                    /**
                     * Device id list, up to 10 devices at a time
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * 1659514436
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 1659515000
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistics traffic type (1: uplink traffic, 2: downstream traffic, 3: sum of upstream and downstream)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Statistical time granularity (1: hourly statistics, 2: daily statistics).
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. Leave it blank to represent all regions.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Gateway type. 0: public cloud gateway; 1: private gateway. Default is 0 if not specified.
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICREQUEST_H_
