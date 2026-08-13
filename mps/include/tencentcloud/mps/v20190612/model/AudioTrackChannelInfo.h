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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TrackInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Audio track information.
                */
                class AudioTrackChannelInfo : public AbstractModel
                {
                public:
                    AudioTrackChannelInfo();
                    ~AudioTrackChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether audio mixing is enabled. Value range:
0: Disable audio mixing
1: Enable audio mixing
Default value: 0
                     * @return ChannelsRemix Whether audio mixing is enabled. Value range:
0: Disable audio mixing
1: Enable audio mixing
Default value: 0
                     * 
                     */
                    int64_t GetChannelsRemix() const;

                    /**
                     * 设置Whether audio mixing is enabled. Value range:
0: Disable audio mixing
1: Enable audio mixing
Default value: 0
                     * @param _channelsRemix Whether audio mixing is enabled. Value range:
0: Disable audio mixing
1: Enable audio mixing
Default value: 0
                     * 
                     */
                    void SetChannelsRemix(const int64_t& _channelsRemix);

                    /**
                     * 判断参数 ChannelsRemix 是否已赋值
                     * @return ChannelsRemix 是否已赋值
                     * 
                     */
                    bool ChannelsRemixHasBeenSet() const;

                    /**
                     * 获取Merge audio track input type, available values:
track: Indicates usage of the audio track id.
track_channel: Indicates usage of audio track id and sound channel id.
Default: track.
Note: If the original video is multichannel, recommend using track_channel.
                     * @return SelectType Merge audio track input type, available values:
track: Indicates usage of the audio track id.
track_channel: Indicates usage of audio track id and sound channel id.
Default: track.
Note: If the original video is multichannel, recommend using track_channel.
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置Merge audio track input type, available values:
track: Indicates usage of the audio track id.
track_channel: Indicates usage of audio track id and sound channel id.
Default: track.
Note: If the original video is multichannel, recommend using track_channel.
                     * @param _selectType Merge audio track input type, available values:
track: Indicates usage of the audio track id.
track_channel: Indicates usage of audio track id and sound channel id.
Default: track.
Note: If the original video is multichannel, recommend using track_channel.
                     * 
                     */
                    void SetSelectType(const std::string& _selectType);

                    /**
                     * 判断参数 SelectType 是否已赋值
                     * @return SelectType 是否已赋值
                     * 
                     */
                    bool SelectTypeHasBeenSet() const;

                    /**
                     * 获取Audio track info
                     * @return InputTrackInfo Audio track info
                     * 
                     */
                    std::vector<TrackInfo> GetInputTrackInfo() const;

                    /**
                     * 设置Audio track info
                     * @param _inputTrackInfo Audio track info
                     * 
                     */
                    void SetInputTrackInfo(const std::vector<TrackInfo>& _inputTrackInfo);

                    /**
                     * 判断参数 InputTrackInfo 是否已赋值
                     * @return InputTrackInfo 是否已赋值
                     * 
                     */
                    bool InputTrackInfoHasBeenSet() const;

                private:

                    /**
                     * Whether audio mixing is enabled. Value range:
0: Disable audio mixing
1: Enable audio mixing
Default value: 0
                     */
                    int64_t m_channelsRemix;
                    bool m_channelsRemixHasBeenSet;

                    /**
                     * Merge audio track input type, available values:
track: Indicates usage of the audio track id.
track_channel: Indicates usage of audio track id and sound channel id.
Default: track.
Note: If the original video is multichannel, recommend using track_channel.
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * Audio track info
                     */
                    std::vector<TrackInfo> m_inputTrackInfo;
                    bool m_inputTrackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_
