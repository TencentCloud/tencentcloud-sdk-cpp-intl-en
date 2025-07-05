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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDAUDIOINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDAUDIOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioDenoiseInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The audio remaster parameters.
                */
                class RebuildAudioInfo : public AbstractModel
                {
                public:
                    RebuildAudioInfo();
                    ~RebuildAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioDenoiseInfo The noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioDenoiseInfo GetAudioDenoiseInfo() const;

                    /**
                     * 设置The noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioDenoiseInfo The noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioDenoiseInfo(const AudioDenoiseInfo& _audioDenoiseInfo);

                    /**
                     * 判断参数 AudioDenoiseInfo 是否已赋值
                     * @return AudioDenoiseInfo 是否已赋值
                     * 
                     */
                    bool AudioDenoiseInfoHasBeenSet() const;

                private:

                    /**
                     * The noise removal parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AudioDenoiseInfo m_audioDenoiseInfo;
                    bool m_audioDenoiseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDAUDIOINFO_H_
