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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Media type
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format
                     * @return Codecs Encoding format
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置Encoding format
                     * @param Codecs Encoding format
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取Segment duration during stream detection
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Duration Segment duration during stream detection
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Segment duration during stream detection
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Duration Segment duration during stream detection
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Width, in pixels
                     * @return Width Width, in pixels
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width, in pixels
                     * @param Width Width, in pixels
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Height, in pixels
                     * @return Height Height, in pixels
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height, in pixels
                     * @param Height Height, in pixels
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Cover
                     * @return Thumbnail Cover
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置Cover
                     * @param Thumbnail Cover
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     */
                    bool ThumbnailHasBeenSet() const;

                private:

                    /**
                     * Encoding format
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * Segment duration during stream detection
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Width, in pixels
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height, in pixels
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Cover
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_MEDIAINFO_H_
