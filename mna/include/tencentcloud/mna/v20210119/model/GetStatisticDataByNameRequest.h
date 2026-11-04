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
                     * 获取<p>Device name. If no device is specified, you can pass "-1"</p>
                     * @return DeviceName <p>Device name. If no device is specified, you can pass "-1"</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>Device name. If no device is specified, you can pass "-1"</p>
                     * @param _deviceName <p>Device name. If no device is specified, you can pass "-1"</p>
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
                     * 获取<p>Start time of statistics, unit: s</p>
                     * @return BeginTime <p>Start time of statistics, unit: s</p>
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置<p>Start time of statistics, unit: s</p>
                     * @param _beginTime <p>Start time of statistics, unit: s</p>
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
                     * 获取<p>Statistics end time, unit: s</p>
                     * @return EndTime <p>Statistics end time, unit: s</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Statistics end time, unit: s</p>
                     * @param _endTime <p>Statistics end time, unit: s</p>
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
                     * 获取<p>Time granularity</p><p>Enumeration values:</p><ul><li>1: hourly statistics</li><li>2: daily statistics</li><li>3: per minute</li><li>4: every 5 minutes</li></ul>
                     * @return TimeGranularity <p>Time granularity</p><p>Enumeration values:</p><ul><li>1: hourly statistics</li><li>2: daily statistics</li><li>3: per minute</li><li>4: every 5 minutes</li></ul>
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置<p>Time granularity</p><p>Enumeration values:</p><ul><li>1: hourly statistics</li><li>2: daily statistics</li><li>3: per minute</li><li>4: every 5 minutes</li></ul>
                     * @param _timeGranularity <p>Time granularity</p><p>Enumeration values:</p><ul><li>1: hourly statistics</li><li>2: daily statistics</li><li>3: per minute</li><li>4: every 5 minutes</li></ul>
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
                     * 获取<p>Access region. Value range: ['MC','AP','EU','AM'] MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. If not specified, it represents all regions.</p>
                     * @return AccessRegion <p>Access region. Value range: ['MC','AP','EU','AM'] MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. If not specified, it represents all regions.</p>
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置<p>Access region. Value range: ['MC','AP','EU','AM'] MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. If not specified, it represents all regions.</p>
                     * @param _accessRegion <p>Access region. Value range: ['MC','AP','EU','AM'] MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. If not specified, it represents all regions.</p>
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
                     * 获取<p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not passed.</p>
                     * @return GatewayType <p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not passed.</p>
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置<p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not passed.</p>
                     * @param _gatewayType <p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not passed.</p>
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
                     * 获取<p>Device name list, up to 10 devices. Used when downloading traffic for multiple devices. At this point, DeviceName can be set to "-1"</p>
                     * @return DeviceList <p>Device name list, up to 10 devices. Used when downloading traffic for multiple devices. At this point, DeviceName can be set to "-1"</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceList() const;

                    /**
                     * 设置<p>Device name list, up to 10 devices. Used when downloading traffic for multiple devices. At this point, DeviceName can be set to "-1"</p>
                     * @param _deviceList <p>Device name list, up to 10 devices. Used when downloading traffic for multiple devices. At this point, DeviceName can be set to "-1"</p>
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
                     * 获取<p>Device group ID. Do not pass it if no group is specified. Used when downloading data by group</p>
                     * @return GroupId <p>Device group ID. Do not pass it if no group is specified. Used when downloading data by group</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>Device group ID. Do not pass it if no group is specified. Used when downloading data by group</p>
                     * @param _groupId <p>Device group ID. Do not pass it if no group is specified. Used when downloading data by group</p>
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
                     * 获取<p>Application ID. If not specified, leave it blank. Used when downloading data by application</p>
                     * @return MpApplicationId <p>Application ID. If not specified, leave it blank. Used when downloading data by application</p>
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 设置<p>Application ID. If not specified, leave it blank. Used when downloading data by application</p>
                     * @param _mpApplicationId <p>Application ID. If not specified, leave it blank. Used when downloading data by application</p>
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
                     * <p>Device name. If no device is specified, you can pass "-1"</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>Start time of statistics, unit: s</p>
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Statistics end time, unit: s</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Time granularity</p><p>Enumeration values:</p><ul><li>1: hourly statistics</li><li>2: daily statistics</li><li>3: per minute</li><li>4: every 5 minutes</li></ul>
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * <p>Access region. Value range: ['MC','AP','EU','AM'] MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas. If not specified, it represents all regions.</p>
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * <p>Gateway type. 0: public cloud gateway; 1: private gateway. Defaults to 0 if not passed.</p>
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * <p>Device name list, up to 10 devices. Used when downloading traffic for multiple devices. At this point, DeviceName can be set to "-1"</p>
                     */
                    std::vector<std::string> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * <p>Device group ID. Do not pass it if no group is specified. Used when downloading data by group</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Application ID. If not specified, leave it blank. Used when downloading data by application</p>
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATABYNAMEREQUEST_H_
