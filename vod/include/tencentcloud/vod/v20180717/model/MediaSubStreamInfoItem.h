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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Substream information for adaptive bitrate streaming.
                */
                class MediaSubStreamInfoItem : public AbstractModel
                {
                public:
                    MediaSubStreamInfoItem();
                    ~MediaSubStreamInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-stream type. Valid values:
<li>audio: audio-only;</li>
<li>video: video (may contain audio stream).</li>
                     * @return Type Sub-stream type. Valid values:
<li>audio: audio-only;</li>
<li>video: video (may contain audio stream).</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Sub-stream type. Valid values:
<li>audio: audio-only;</li>
<li>video: video (may contain audio stream).</li>
                     * @param _type Sub-stream type. Valid values:
<li>audio: audio-only;</li>
<li>video: video (may contain audio stream).</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Video image width when the substream is a video stream. Unit: px.
                     * @return Width Video image width when the substream is a video stream. Unit: px.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Video image width when the substream is a video stream. Unit: px.
                     * @param _width Video image width when the substream is a video stream. Unit: px.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Substream video screen height in px.
                     * @return Height Substream video screen height in px.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Substream video screen height in px.
                     * @param _height Substream video screen height in px.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Substream media file size in bytes.
<font color=red>Note:</font> This field is 0 for adaptive bitrate stream files generated before 2023-02-09T16:00:00Z.
                     * @return Size Substream media file size in bytes.
<font color=red>Note:</font> This field is 0 for adaptive bitrate stream files generated before 2023-02-09T16:00:00Z.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Substream media file size in bytes.
<font color=red>Note:</font> This field is 0 for adaptive bitrate stream files generated before 2023-02-09T16:00:00Z.
                     * @param _size Substream media file size in bytes.
<font color=red>Note:</font> This field is 0 for adaptive bitrate stream files generated before 2023-02-09T16:00:00Z.
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * Sub-stream type. Valid values:
<li>audio: audio-only;</li>
<li>video: video (may contain audio stream).</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Video image width when the substream is a video stream. Unit: px.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Substream video screen height in px.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Substream media file size in bytes.
<font color=red>Note:</font> This field is 0 for adaptive bitrate stream files generated before 2023-02-09T16:00:00Z.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_
