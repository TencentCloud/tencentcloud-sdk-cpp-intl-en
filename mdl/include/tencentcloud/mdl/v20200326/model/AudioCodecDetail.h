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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOCODECDETAIL_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOCODECDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Audio codec configuration.
                */
                class AudioCodecDetail : public AbstractModel
                {
                public:
                    AudioCodecDetail();
                    ~AudioCodecDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel configuration, optional values: MONO (mono), STEREO (two-channel), 5.1 (surround).
                     * @return ChannelMode Channel configuration, optional values: MONO (mono), STEREO (two-channel), 5.1 (surround).
                     * 
                     */
                    std::string GetChannelMode() const;

                    /**
                     * 设置Channel configuration, optional values: MONO (mono), STEREO (two-channel), 5.1 (surround).
                     * @param _channelMode Channel configuration, optional values: MONO (mono), STEREO (two-channel), 5.1 (surround).
                     * 
                     */
                    void SetChannelMode(const std::string& _channelMode);

                    /**
                     * 判断参数 ChannelMode 是否已赋值
                     * @return ChannelMode 是否已赋值
                     * 
                     */
                    bool ChannelModeHasBeenSet() const;

                    /**
                     * 获取Level in aac case, optional values: "LC" "HE-AAC" "HE-AACV2".
                     * @return Profile Level in aac case, optional values: "LC" "HE-AAC" "HE-AACV2".
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置Level in aac case, optional values: "LC" "HE-AAC" "HE-AACV2".
                     * @param _profile Level in aac case, optional values: "LC" "HE-AAC" "HE-AACV2".
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * Channel configuration, optional values: MONO (mono), STEREO (two-channel), 5.1 (surround).
                     */
                    std::string m_channelMode;
                    bool m_channelModeHasBeenSet;

                    /**
                     * Level in aac case, optional values: "LC" "HE-AAC" "HE-AACV2".
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOCODECDETAIL_H_
