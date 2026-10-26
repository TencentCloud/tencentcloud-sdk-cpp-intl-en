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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPTZREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPTZREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ControlDevicePTZ request structure.
                */
                class ControlDevicePTZRequest : public AbstractModel
                {
                public:
                    ControlDevicePTZRequest();
                    ~ControlDevicePTZRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID (obtain from the channel query API DescribeDeviceChannel)
                     * @return ChannelId Channel ID (obtain from the channel query API DescribeDeviceChannel)
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID (obtain from the channel query API DescribeDeviceChannel)
                     * @param _channelId Channel ID (obtain from the channel query API DescribeDeviceChannel)
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
                     * 获取Command type (up, down, left, right).
Upper left: leftup, upper right: rightup, lower left: leftdown, lower right: rightdown
Zoom in: zoom in, zoom out: zoom out
Focus far: focusfar, focus near: focusnear
Iris in: enlarge aperture, iris out: shrink aperture)
                     * @return Type Command type (up, down, left, right).
Upper left: leftup, upper right: rightup, lower left: leftdown, lower right: rightdown
Zoom in: zoom in, zoom out: zoom out
Focus far: focusfar, focus near: focusnear
Iris in: enlarge aperture, iris out: shrink aperture)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Command type (up, down, left, right).
Upper left: leftup, upper right: rightup, lower left: leftdown, lower right: rightdown
Zoom in: zoom in, zoom out: zoom out
Focus far: focusfar, focus near: focusnear
Iris in: enlarge aperture, iris out: shrink aperture)
                     * @param _type Command type (up, down, left, right).
Upper left: leftup, upper right: rightup, lower left: leftdown, lower right: rightdown
Zoom in: zoom in, zoom out: zoom out
Focus far: focusfar, focus near: focusnear
Iris in: enlarge aperture, iris out: shrink aperture)
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
                     * 获取Command description (speed range: 1-8)
                     * @return Speed Command description (speed range: 1-8)
                     * 
                     */
                    int64_t GetSpeed() const;

                    /**
                     * 设置Command description (speed range: 1-8)
                     * @param _speed Command description (speed range: 1-8)
                     * 
                     */
                    void SetSpeed(const int64_t& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * Channel ID (obtain from the channel query API DescribeDeviceChannel)
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Command type (up, down, left, right).
Upper left: leftup, upper right: rightup, lower left: leftdown, lower right: rightdown
Zoom in: zoom in, zoom out: zoom out
Focus far: focusfar, focus near: focusnear
Iris in: enlarge aperture, iris out: shrink aperture)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Command description (speed range: 1-8)
                     */
                    int64_t m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPTZREQUEST_H_
