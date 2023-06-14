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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/StreamVideoInfo.h>
#include <tencentcloud/mdl/v20200326/model/StreamAudioInfo.h>
#include <tencentcloud/mdl/v20200326/model/StreamScte35Info.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Push information.
                */
                class StreamInfo : public AbstractModel
                {
                public:
                    StreamInfo();
                    ~StreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client IP.
                     * @return ClientIp Client IP.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP.
                     * @param _clientIp Client IP.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Video information of pushed streams.
                     * @return Video Video information of pushed streams.
                     * 
                     */
                    std::vector<StreamVideoInfo> GetVideo() const;

                    /**
                     * 设置Video information of pushed streams.
                     * @param _video Video information of pushed streams.
                     * 
                     */
                    void SetVideo(const std::vector<StreamVideoInfo>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取Audio information of pushed streams.
                     * @return Audio Audio information of pushed streams.
                     * 
                     */
                    std::vector<StreamAudioInfo> GetAudio() const;

                    /**
                     * 设置Audio information of pushed streams.
                     * @param _audio Audio information of pushed streams.
                     * 
                     */
                    void SetAudio(const std::vector<StreamAudioInfo>& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取SCTE-35 information of pushed streams.
                     * @return Scte35 SCTE-35 information of pushed streams.
                     * 
                     */
                    std::vector<StreamScte35Info> GetScte35() const;

                    /**
                     * 设置SCTE-35 information of pushed streams.
                     * @param _scte35 SCTE-35 information of pushed streams.
                     * 
                     */
                    void SetScte35(const std::vector<StreamScte35Info>& _scte35);

                    /**
                     * 判断参数 Scte35 是否已赋值
                     * @return Scte35 是否已赋值
                     * 
                     */
                    bool Scte35HasBeenSet() const;

                private:

                    /**
                     * Client IP.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Video information of pushed streams.
                     */
                    std::vector<StreamVideoInfo> m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * Audio information of pushed streams.
                     */
                    std::vector<StreamAudioInfo> m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * SCTE-35 information of pushed streams.
                     */
                    std::vector<StreamScte35Info> m_scte35;
                    bool m_scte35HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMINFO_H_
