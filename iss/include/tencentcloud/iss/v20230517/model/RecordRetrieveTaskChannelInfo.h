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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDRETRIEVETASKCHANNELINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDRETRIEVETASKCHANNELINFO_H_

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
                * Retrieve the task channel information
                */
                class RecordRetrieveTaskChannelInfo : public AbstractModel
                {
                public:
                    RecordRetrieveTaskChannelInfo();
                    ~RecordRetrieveTaskChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device ID to which the device channel belongs
                     * @return DeviceId Device ID to which the device channel belongs
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID to which the device channel belongs
                     * @param _deviceId Device ID to which the device channel belongs
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
                     * 获取Device name of the device channel
                     * @return DeviceName Device name of the device channel
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name of the device channel
                     * @param _deviceName Device name of the device channel
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
                     * 获取Device channel ID
                     * @return ChannelId Device channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Device channel ID
                     * @param _channelId Device channel ID
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
                     * 获取Device channel name
                     * @return ChannelName Device channel name
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Device channel name
                     * @param _channelName Device channel name
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Task status. 0: Retrieved, 1: Retrieving, 2: Pending retrieval, 3: No archived video recording
                     * @return Status Task status. 0: Retrieved, 1: Retrieving, 2: Pending retrieval, 3: No archived video recording
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 0: Retrieved, 1: Retrieving, 2: Pending retrieval, 3: No archived video recording
                     * @param _status Task status. 0: Retrieved, 1: Retrieving, 2: Pending retrieval, 3: No archived video recording
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Device ID to which the device channel belongs
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name of the device channel
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Device channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Device channel name
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Task status. 0: Retrieved, 1: Retrieving, 2: Pending retrieval, 3: No archived video recording
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDRETRIEVETASKCHANNELINFO_H_
