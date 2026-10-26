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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPRESETREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPRESETREQUEST_H_

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
                * ControlDevicePreset request structure.
                */
                class ControlDevicePresetRequest : public AbstractModel
                {
                public:
                    ControlDevicePresetRequest();
                    ~ControlDevicePresetRequest() = default;
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
                     * 获取Command (goto: preset position call;
Set: preset position settings
del: Delete preset position)
                     * @return Cmd Command (goto: preset position call;
Set: preset position settings
del: Delete preset position)
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置Command (goto: preset position call;
Set: preset position settings
del: Delete preset position)
                     * @param _cmd Command (goto: preset position call;
Set: preset position settings
del: Delete preset position)
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取Preset position index (supports only index positions 1-10; an error is reported if exceeded)
                     * @return Index Preset position index (supports only index positions 1-10; an error is reported if exceeded)
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Preset position index (supports only index positions 1-10; an error is reported if exceeded)
                     * @param _index Preset position index (supports only index positions 1-10; an error is reported if exceeded)
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * Channel ID (obtain from the channel query API DescribeDeviceChannel)
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Command (goto: preset position call;
Set: preset position settings
del: Delete preset position)
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * Preset position index (supports only index positions 1-10; an error is reported if exceeded)
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPRESETREQUEST_H_
