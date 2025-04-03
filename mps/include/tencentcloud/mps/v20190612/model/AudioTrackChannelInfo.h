/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Whether to enable audio mix. valid values:.
0: indicates not enabling audio mix.
1: Indicates enabling audio mix.
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChannelsRemix Whether to enable audio mix. valid values:.
0: indicates not enabling audio mix.
1: Indicates enabling audio mix.
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetChannelsRemix() const;

                    /**
                     * 设置Whether to enable audio mix. valid values:.
0: indicates not enabling audio mix.
1: Indicates enabling audio mix.
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _channelsRemix Whether to enable audio mix. valid values:.
0: indicates not enabling audio mix.
1: Indicates enabling audio mix.
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Audio track input type. valid values:.
trask: indicates usage of the audio track id.
trask_channel: indicates usage of the audio track id and sound channel id.
Default: trask.
If the original aduio track is multichannel, recommend using trask_channel.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SelectType Audio track input type. valid values:.
trask: indicates usage of the audio track id.
trask_channel: indicates usage of the audio track id and sound channel id.
Default: trask.
If the original aduio track is multichannel, recommend using trask_channel.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置Audio track input type. valid values:.
trask: indicates usage of the audio track id.
trask_channel: indicates usage of the audio track id and sound channel id.
Default: trask.
If the original aduio track is multichannel, recommend using trask_channel.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _selectType Audio track input type. valid values:.
trask: indicates usage of the audio track id.
trask_channel: indicates usage of the audio track id and sound channel id.
Default: trask.
If the original aduio track is multichannel, recommend using trask_channel.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Audio track information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InputTrackInfo Audio track information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TrackInfo> GetInputTrackInfo() const;

                    /**
                     * 设置Audio track information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inputTrackInfo Audio track information.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Whether to enable audio mix. valid values:.
0: indicates not enabling audio mix.
1: Indicates enabling audio mix.
Default value: 0

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_channelsRemix;
                    bool m_channelsRemixHasBeenSet;

                    /**
                     * Audio track input type. valid values:.
trask: indicates usage of the audio track id.
trask_channel: indicates usage of the audio track id and sound channel id.
Default: trask.
If the original aduio track is multichannel, recommend using trask_channel.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * Audio track information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TrackInfo> m_inputTrackInfo;
                    bool m_inputTrackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_
