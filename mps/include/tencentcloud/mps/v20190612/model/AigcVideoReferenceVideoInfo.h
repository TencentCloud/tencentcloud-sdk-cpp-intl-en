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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEVIDEOINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Reference video asset for AIGC video generation.
                */
                class AigcVideoReferenceVideoInfo : public AbstractModel
                {
                public:
                    AigcVideoReferenceVideoInfo();
                    ~AigcVideoReferenceVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reference video URL, which must be accessible from the public network.
This can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.
The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
If the reference video is a video for editing, the first and last frames cannot be defined.
                     * @return VideoUrl Reference video URL, which must be accessible from the public network.
This can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.
The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
If the reference video is a video for editing, the first and last frames cannot be defined.
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置Reference video URL, which must be accessible from the public network.
This can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.
The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
If the reference video is a video for editing, the first and last frames cannot be defined.
                     * @param _videoUrl Reference video URL, which must be accessible from the public network.
This can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.
The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
If the reference video is a video for editing, the first and last frames cannot be defined.
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
                     * @return ReferType The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
                     * 
                     */
                    std::string GetReferType() const;

                    /**
                     * 设置The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
                     * @param _referType The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
                     * 
                     */
                    void SetReferType(const std::string& _referType);

                    /**
                     * 判断参数 ReferType 是否已赋值
                     * @return ReferType 是否已赋值
                     * 
                     */
                    bool ReferTypeHasBeenSet() const;

                    /**
                     * 获取The KeepOriginalSound parameter specifies whether to keep the original sound of the video. Valid values: yes (keep the original sound); no (remove the original sound). This parameter also applies to feature reference videos (feature).
                     * @return KeepOriginalSound The KeepOriginalSound parameter specifies whether to keep the original sound of the video. Valid values: yes (keep the original sound); no (remove the original sound). This parameter also applies to feature reference videos (feature).
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置The KeepOriginalSound parameter specifies whether to keep the original sound of the video. Valid values: yes (keep the original sound); no (remove the original sound). This parameter also applies to feature reference videos (feature).
                     * @param _keepOriginalSound The KeepOriginalSound parameter specifies whether to keep the original sound of the video. Valid values: yes (keep the original sound); no (remove the original sound). This parameter also applies to feature reference videos (feature).
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                private:

                    /**
                     * Reference video URL, which must be accessible from the public network.
This can be used as a feature reference video or a video for editing. The default type is video for editing. You can choose to keep the original sound of the video.
The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
If the reference video is a video for editing, the first and last frames cannot be defined.
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * The ReferType parameter specifies the reference video type: feature indicates feature reference video, and base indicates video for editing.
                     */
                    std::string m_referType;
                    bool m_referTypeHasBeenSet;

                    /**
                     * The KeepOriginalSound parameter specifies whether to keep the original sound of the video. Valid values: yes (keep the original sound); no (remove the original sound). This parameter also applies to feature reference videos (feature).
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEVIDEOINFO_H_
