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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICECHANNELDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICECHANNELDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Returned results of querying device channel information
                */
                class DescribeDeviceChannelData : public AbstractModel
                {
                public:
                    DescribeDeviceChannelData();
                    ~DescribeDeviceChannelData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Channel encoding
                     * @return ChannelCode Channel encoding
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置Channel encoding
                     * @param _channelCode Channel encoding
                     * 
                     */
                    void SetChannelCode(const std::string& _channelCode);

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return Name Channel name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name
                     * @param _name Channel name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Stream status (0: not transmitted, 1: in transit)
                     * @return Status Stream status (0: not transmitted, 1: in transit)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Stream status (0: not transmitted, 1: in transit)
                     * @param _status Stream status (0: not transmitted, 1: in transit)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether Ptz is controllable (0: no, 1: yes)
                     * @return PTZType Whether Ptz is controllable (0: no, 1: yes)
                     * 
                     */
                    int64_t GetPTZType() const;

                    /**
                     * 设置Whether Ptz is controllable (0: no, 1: yes)
                     * @param _pTZType Whether Ptz is controllable (0: no, 1: yes)
                     * 
                     */
                    void SetPTZType(const int64_t& _pTZType);

                    /**
                     * 判断参数 PTZType 是否已赋值
                     * @return PTZType 是否已赋值
                     * 
                     */
                    bool PTZTypeHasBeenSet() const;

                    /**
                     * 获取Channel manufacturer
                     * @return Manufacturer Channel manufacturer
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置Channel manufacturer
                     * @param _manufacturer Channel manufacturer
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取Channel supports resolution (resolution list separated by '/', National Standard Protocol example (6/3), custom example (12800960/640480))
                     * @return Resolution Channel supports resolution (resolution list separated by '/', National Standard Protocol example (6/3), custom example (12800960/640480))
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Channel supports resolution (resolution list separated by '/', National Standard Protocol example (6/3), custom example (12800960/640480))
                     * @param _resolution Channel supports resolution (resolution list separated by '/', National Standard Protocol example (6/3), custom example (12800960/640480))
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取Channel offline status (0: offline, 1: online)
                     * @return State Channel offline status (0: offline, 1: online)
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Channel offline status (0: offline, 1: online)
                     * @param _state Channel offline status (0: offline, 1: online)
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Channel encoding
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Stream status (0: not transmitted, 1: in transit)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether Ptz is controllable (0: no, 1: yes)
                     */
                    int64_t m_pTZType;
                    bool m_pTZTypeHasBeenSet;

                    /**
                     * Channel manufacturer
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * Channel supports resolution (resolution list separated by '/', National Standard Protocol example (6/3), custom example (12800960/640480))
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Channel offline status (0: offline, 1: online)
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICECHANNELDATA_H_
