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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_

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
                * Video transcoding playback information (v2017)
                */
                class TranscodePlayInfo2017 : public AbstractModel
                {
                public:
                    TranscodePlayInfo2017();
                    ~TranscodePlayInfo2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playback address.
                     * @return Url Playback address.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Playback address.
                     * @param _url Playback address.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * @return Definition Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * @param _definition Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     * @return Bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     * @param _bitrate Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Maximum value of the height of a video stream in px.
                     * @return Height Maximum value of the height of a video stream in px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum value of the height of a video stream in px.
                     * @param _height Maximum value of the height of a video stream in px.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Maximum value of the width of a video stream in px.
                     * @return Width Maximum value of the width of a video stream in px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum value of the width of a video stream in px.
                     * @param _width Maximum value of the width of a video stream in px.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * Playback address.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Transcoding specification ID. For more information, please see [Transcoding Parameter Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sum of the average bitrate of a video stream and that of an audio stream in bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum value of the height of a video stream in px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum value of the width of a video stream in px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_
