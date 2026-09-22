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
                * Playback information of video transcoding (2017)
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
                     * 获取Transcoding specification ID. See [transcoding parameter template](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1).
                     * @return Definition Transcoding specification ID. See [transcoding parameter template](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Transcoding specification ID. See [transcoding parameter template](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1).
                     * @param _definition Transcoding specification ID. See [transcoding parameter template](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1).
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
                     * 获取Sum of the mean video stream bitrate and mean audio stream bitrate. Unit: bps.
                     * @return Bitrate Sum of the mean video stream bitrate and mean audio stream bitrate. Unit: bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Sum of the mean video stream bitrate and mean audio stream bitrate. Unit: bps.
                     * @param _bitrate Sum of the mean video stream bitrate and mean audio stream bitrate. Unit: bps.
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
                     * 获取Maximum height of the video stream. Measurement unit: px.
                     * @return Height Maximum height of the video stream. Measurement unit: px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Maximum height of the video stream. Measurement unit: px.
                     * @param _height Maximum height of the video stream. Measurement unit: px.
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
                     * 获取Maximum video stream width in px.
                     * @return Width Maximum video stream width in px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Maximum video stream width in px.
                     * @param _width Maximum video stream width in px.
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
                     * Transcoding specification ID. See [transcoding parameter template](https://www.tencentcloud.com/document/product/266/33476?from_cn_redirect=1).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sum of the mean video stream bitrate and mean audio stream bitrate. Unit: bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Maximum height of the video stream. Measurement unit: px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Maximum video stream width in px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODEPLAYINFO2017_H_
