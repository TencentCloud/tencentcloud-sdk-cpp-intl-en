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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_TRACKSELECTOR_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_TRACKSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * 
                */
                class TrackSelector : public AbstractModel
                {
                public:
                    TrackSelector();
                    ~TrackSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return VideoIndex 
                     * 
                     */
                    std::vector<int64_t> GetVideoIndex() const;

                    /**
                     * 设置
                     * @param _videoIndex 
                     * 
                     */
                    void SetVideoIndex(const std::vector<int64_t>& _videoIndex);

                    /**
                     * 判断参数 VideoIndex 是否已赋值
                     * @return VideoIndex 是否已赋值
                     * 
                     */
                    bool VideoIndexHasBeenSet() const;

                    /**
                     * 获取
                     * @return AudioIndex 
                     * 
                     */
                    std::vector<int64_t> GetAudioIndex() const;

                    /**
                     * 设置
                     * @param _audioIndex 
                     * 
                     */
                    void SetAudioIndex(const std::vector<int64_t>& _audioIndex);

                    /**
                     * 判断参数 AudioIndex 是否已赋值
                     * @return AudioIndex 是否已赋值
                     * 
                     */
                    bool AudioIndexHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<int64_t> m_videoIndex;
                    bool m_videoIndexHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<int64_t> m_audioIndex;
                    bool m_audioIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_TRACKSELECTOR_H_
