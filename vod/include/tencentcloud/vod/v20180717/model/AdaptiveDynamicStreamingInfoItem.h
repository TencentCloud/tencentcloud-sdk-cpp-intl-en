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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSubStreamInfoItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Adaptive bitrate streaming information
                */
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Adaptive bitrate streaming specification.
                     * @return Definition Adaptive bitrate streaming specification.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Adaptive bitrate streaming specification.
                     * @param Definition Adaptive bitrate streaming specification.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取The packaging format. Valid values:
<li>`HLS`</li>
<li>`DASH`</li>
                     * @return Package The packaging format. Valid values:
<li>`HLS`</li>
<li>`DASH`</li>
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置The packaging format. Valid values:
<li>`HLS`</li>
<li>`DASH`</li>
                     * @param Package The packaging format. Valid values:
<li>`HLS`</li>
<li>`DASH`</li>
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取Encryption type.
                     * @return DrmType Encryption type.
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置Encryption type.
                     * @param DrmType Encryption type.
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取Playback address.
                     * @return Url Playback address.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Playback address.
                     * @param Url Playback address.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取File size (bytes)
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
<li>If the file is a DASH file, the value of this parameter is the sum of the size of the MPD and segment files.</li>
<li><font color=red>Note</font>: For adaptive bitrate streaming files generated before 2022-01-10T16:00:00Z, the value of this parameter is `0`.</li>
                     * @return Size File size (bytes)
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
<li>If the file is a DASH file, the value of this parameter is the sum of the size of the MPD and segment files.</li>
<li><font color=red>Note</font>: For adaptive bitrate streaming files generated before 2022-01-10T16:00:00Z, the value of this parameter is `0`.</li>
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size (bytes)
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
<li>If the file is a DASH file, the value of this parameter is the sum of the size of the MPD and segment files.</li>
<li><font color=red>Note</font>: For adaptive bitrate streaming files generated before 2022-01-10T16:00:00Z, the value of this parameter is `0`.</li>
                     * @param Size File size (bytes)
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
<li>If the file is a DASH file, the value of this parameter is the sum of the size of the MPD and segment files.</li>
<li><font color=red>Note</font>: For adaptive bitrate streaming files generated before 2022-01-10T16:00:00Z, the value of this parameter is `0`.</li>
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     * @return DigitalWatermarkType The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     * @param DigitalWatermarkType The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     */
                    void SetDigitalWatermarkType(const std::string& _digitalWatermarkType);

                    /**
                     * 判断参数 DigitalWatermarkType 是否已赋值
                     * @return DigitalWatermarkType 是否已赋值
                     */
                    bool DigitalWatermarkTypeHasBeenSet() const;

                    /**
                     * 获取The information of the streams.
                     * @return SubStreamSet The information of the streams.
                     */
                    std::vector<MediaSubStreamInfoItem> GetSubStreamSet() const;

                    /**
                     * 设置The information of the streams.
                     * @param SubStreamSet The information of the streams.
                     */
                    void SetSubStreamSet(const std::vector<MediaSubStreamInfoItem>& _subStreamSet);

                    /**
                     * 判断参数 SubStreamSet 是否已赋值
                     * @return SubStreamSet 是否已赋值
                     */
                    bool SubStreamSetHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate streaming specification.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The packaging format. Valid values:
<li>`HLS`</li>
<li>`DASH`</li>
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * Encryption type.
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * Playback address.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * File size (bytes)
<li>If the file is an HLS file, the value of this parameter is the sum of the size of the M3U8 and TS files.</li>
<li>If the file is a DASH file, the value of this parameter is the sum of the size of the MPD and segment files.</li>
<li><font color=red>Note</font>: For adaptive bitrate streaming files generated before 2022-01-10T16:00:00Z, the value of this parameter is `0`.</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * The watermark type. Valid values:
<li>Trace: Digital watermark</li>
<li>None: Regular watermark</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * The information of the streams.
                     */
                    std::vector<MediaSubStreamInfoItem> m_subStreamSet;
                    bool m_subStreamSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
