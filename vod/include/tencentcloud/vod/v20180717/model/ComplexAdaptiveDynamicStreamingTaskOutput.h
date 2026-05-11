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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKOUTPUT_H_

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
                * Output result of adaptive bitrate streaming.
                */
                class ComplexAdaptiveDynamicStreamingTaskOutput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskOutput();
                    ~ComplexAdaptiveDynamicStreamingTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Adaptive bitrate template ID.
                     * @return Definition Adaptive bitrate template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Adaptive bitrate template ID.
                     * @param _definition Adaptive bitrate template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Adaptive bitrate stream packaging format. Optional values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * @return Format Adaptive bitrate stream packaging format. Optional values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Adaptive bitrate stream packaging format. Optional values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * @param _format Adaptive bitrate stream packaging format. Optional values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取DRM solution type. Available values:
<li>Empty string: Unencrypted.</li>
<li>SimpleAES;</li>
<li>Widevine;</li>
<li>FairPlay.</li>
                     * @return DrmType DRM solution type. Available values:
<li>Empty string: Unencrypted.</li>
<li>SimpleAES;</li>
<li>Widevine;</li>
<li>FairPlay.</li>
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置DRM solution type. Available values:
<li>Empty string: Unencrypted.</li>
<li>SimpleAES;</li>
<li>Widevine;</li>
<li>FairPlay.</li>
                     * @param _drmType DRM solution type. Available values:
<li>Empty string: Unencrypted.</li>
<li>SimpleAES;</li>
<li>Widevine;</li>
<li>FairPlay.</li>
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取Playback address of the adaptive bitrate stream.
                     * @return Url Playback address of the adaptive bitrate stream.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Playback address of the adaptive bitrate stream.
                     * @param _url Playback address of the adaptive bitrate stream.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Adaptive bitrate stream packaging format. Optional values:
<li>HLS;</li>
<li>MPEG-DASH.</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * DRM solution type. Available values:
<li>Empty string: Unencrypted.</li>
<li>SimpleAES;</li>
<li>Widevine;</li>
<li>FairPlay.</li>
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * Playback address of the adaptive bitrate stream.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKOUTPUT_H_
