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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATABYNAMEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATABYNAMEREQUEST_H_

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
                * GetStatisticDataByName request structure.
                */
                class GetStatisticDataByNameRequest : public AbstractModel
                {
                public:
                    GetStatisticDataByNameRequest();
                    ~GetStatisticDataByNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device name. If not specified, pass "-1".
                     * @return DeviceName Device name. If not specified, pass "-1".
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name. If not specified, pass "-1".
                     * @param _deviceName Device name. If not specified, pass "-1".
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Start time of statistics (seconds).
                     * @return BeginTime Start time of statistics (seconds).
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Start time of statistics (seconds).
                     * @param _beginTime Start time of statistics (seconds).
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
                     * 获取Statistics end time (s).
                     * @return EndTime Statistics end time (s).
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Statistics end time (s).
                     * @param _endTime Statistics end time (s).
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
                     * 获取Aggregation granularity:
Hourly statistics
2: Daily statistics
                     * @return TimeGranularity Aggregation granularity:
Hourly statistics
2: Daily statistics
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置Aggregation granularity:
Hourly statistics
2: Daily statistics
                     * @param _timeGranularity Aggregation granularity:
Hourly statistics
2: Daily statistics
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

                    /**
                     * 获取Device name list. Up to 10 devices. Used when downloading traffic volume of multiple devices. At this point, DeviceName can be "-1".
                     * @return DeviceList Device name list. Up to 10 devices. Used when downloading traffic volume of multiple devices. At this point, DeviceName can be "-1".
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置Device name list. Up to 10 devices. Used when downloading traffic volume of multiple devices. At this point, DeviceName can be "-1".
                     * @param _deviceList Device name list. Up to 10 devices. Used when downloading traffic volume of multiple devices. At this point, DeviceName can be "-1".
                     * 
                     */
                    void SetDeviceList(const std::vector<std::string>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取Device group ID. If not specified, do not pass it. Used when downloading data by grouping.
                     * @return GroupId Device group ID. If not specified, do not pass it. Used when downloading data by grouping.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Device group ID. If not specified, do not pass it. Used when downloading data by grouping.
                     * @param _groupId Device group ID. If not specified, do not pass it. Used when downloading data by grouping.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Application ID. Leave blank if no designated application is specified. Used when downloading data by app.
                     * @return MpApplicationId Application ID. Leave blank if no designated application is specified. Used when downloading data by app.
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 设置Application ID. Leave blank if no designated application is specified. Used when downloading data by app.
                     * @param _mpApplicationId Application ID. Leave blank if no designated application is specified. Used when downloading data by app.
                     * 
                     */
                    void SetMpApplicationId(const std::string& _mpApplicationId);

                    /**
                     * 判断参数 MpApplicationId 是否已赋值
                     * @return MpApplicationId 是否已赋值
                     * 
                     */
                    bool MpApplicationIdHasBeenSet() const;

                private:

                    /**
                     * Device name. If not specified, pass "-1".
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Start time of statistics (seconds).
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Statistics end time (s).
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Aggregation granularity:
Hourly statistics
2: Daily statistics
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

                    /**
                     * Device name list. Up to 10 devices. Used when downloading traffic volume of multiple devices. At this point, DeviceName can be "-1".
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * Device group ID. If not specified, do not pass it. Used when downloading data by grouping.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Application ID. Leave blank if no designated application is specified. Used when downloading data by app.
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATABYNAMEREQUEST_H_
