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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioTaskOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class AigcAudioTaskOutput : public AbstractModel
                {
                public:
                    AigcAudioTaskOutput();
                    ~AigcAudioTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return AudioInfos 
                     * 
                     */
                    std::vector<AigcAudioTaskOutputFileInfo> GetAudioInfos() const;

                    /**
                     * 设置
                     * @param _audioInfos 
                     * 
                     */
                    void SetAudioInfos(const std::vector<AigcAudioTaskOutputFileInfo>& _audioInfos);

                    /**
                     * 判断参数 AudioInfos 是否已赋值
                     * @return AudioInfos 是否已赋值
                     * 
                     */
                    bool AudioInfosHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoInfos 
                     * 
                     */
                    std::vector<AigcAudioTaskOutputFileInfo> GetVideoInfos() const;

                    /**
                     * 设置
                     * @param _videoInfos 
                     * 
                     */
                    void SetVideoInfos(const std::vector<AigcAudioTaskOutputFileInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<AigcAudioTaskOutputFileInfo> m_audioInfos;
                    bool m_audioInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AigcAudioTaskOutputFileInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOTASKOUTPUT_H_
