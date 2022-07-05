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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUAUDIOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUAUDIOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AudioEncode.h>
#include <tencentcloud/trtc/v20190722/model/McuUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The audio parameters for relaying.
                */
                class McuAudioParams : public AbstractModel
                {
                public:
                    McuAudioParams();
                    ~McuAudioParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The audio encoding parameters.
                     * @return AudioEncode The audio encoding parameters.
                     */
                    AudioEncode GetAudioEncode() const;

                    /**
                     * 设置The audio encoding parameters.
                     * @param AudioEncode The audio encoding parameters.
                     */
                    void SetAudioEncode(const AudioEncode& _audioEncode);

                    /**
                     * 判断参数 AudioEncode 是否已赋值
                     * @return AudioEncode 是否已赋值
                     */
                    bool AudioEncodeHasBeenSet() const;

                    /**
                     * 获取The users whose audios are mixed. For the `StartPublishCdnStream` API, if you do not pass this parameter or leave it empty, the audios of all anchors will be mixed. For the `UpdatePublishCdnStream` API, if you do not pass this parameter, TRTC will not change the users whose audios are mixed; if you pass in an empty string, the audios of all anchors will be mixed.
                     * @return SubscribeAudioList The users whose audios are mixed. For the `StartPublishCdnStream` API, if you do not pass this parameter or leave it empty, the audios of all anchors will be mixed. For the `UpdatePublishCdnStream` API, if you do not pass this parameter, TRTC will not change the users whose audios are mixed; if you pass in an empty string, the audios of all anchors will be mixed.
                     */
                    std::vector<McuUserInfoParams> GetSubscribeAudioList() const;

                    /**
                     * 设置The users whose audios are mixed. For the `StartPublishCdnStream` API, if you do not pass this parameter or leave it empty, the audios of all anchors will be mixed. For the `UpdatePublishCdnStream` API, if you do not pass this parameter, TRTC will not change the users whose audios are mixed; if you pass in an empty string, the audios of all anchors will be mixed.
                     * @param SubscribeAudioList The users whose audios are mixed. For the `StartPublishCdnStream` API, if you do not pass this parameter or leave it empty, the audios of all anchors will be mixed. For the `UpdatePublishCdnStream` API, if you do not pass this parameter, TRTC will not change the users whose audios are mixed; if you pass in an empty string, the audios of all anchors will be mixed.
                     */
                    void SetSubscribeAudioList(const std::vector<McuUserInfoParams>& _subscribeAudioList);

                    /**
                     * 判断参数 SubscribeAudioList 是否已赋值
                     * @return SubscribeAudioList 是否已赋值
                     */
                    bool SubscribeAudioListHasBeenSet() const;

                private:

                    /**
                     * The audio encoding parameters.
                     */
                    AudioEncode m_audioEncode;
                    bool m_audioEncodeHasBeenSet;

                    /**
                     * The users whose audios are mixed. For the `StartPublishCdnStream` API, if you do not pass this parameter or leave it empty, the audios of all anchors will be mixed. For the `UpdatePublishCdnStream` API, if you do not pass this parameter, TRTC will not change the users whose audios are mixed; if you pass in an empty string, the audios of all anchors will be mixed.
                     */
                    std::vector<McuUserInfoParams> m_subscribeAudioList;
                    bool m_subscribeAudioListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUAUDIOPARAMS_H_
