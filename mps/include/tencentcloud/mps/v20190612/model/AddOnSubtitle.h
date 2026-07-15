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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of the subtitles to add.
                */
                class AddOnSubtitle : public AbstractModel
                {
                public:
                    AddOnSubtitle();
                    ~AddOnSubtitle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Insertion method. Valid values:</p><li>subtitle-stream: Inserts a subtitle track.</li><li>close-caption-708: Encodes CEA-708 subtitles into SEI frames.</li><li>close-caption-608: Encodes CEA-608 subtitles into SEI frames.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Insertion method. Valid values:</p><li>subtitle-stream: Inserts a subtitle track.</li><li>close-caption-708: Encodes CEA-708 subtitles into SEI frames.</li><li>close-caption-608: Encodes CEA-608 subtitles into SEI frames.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Insertion method. Valid values:</p><li>subtitle-stream: Inserts a subtitle track.</li><li>close-caption-708: Encodes CEA-708 subtitles into SEI frames.</li><li>close-caption-608: Encodes CEA-608 subtitles into SEI frames.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Insertion method. Valid values:</p><li>subtitle-stream: Inserts a subtitle track.</li><li>close-caption-708: Encodes CEA-708 subtitles into SEI frames.</li><li>close-caption-608: Encodes CEA-608 subtitles into SEI frames.</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Subtitle file.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Subtitle <p>Subtitle file.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaInputInfo GetSubtitle() const;

                    /**
                     * 设置<p>Subtitle file.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitle <p>Subtitle file.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubtitle(const MediaInputInfo& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle name.<br>Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleName <p>Subtitle name.<br>Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置<p>Subtitle name.<br>Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleName <p>Subtitle name.<br>Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle language, such as eng.</p>
                     * @return SubtitleLanguage <p>Subtitle language, such as eng.</p>
                     * 
                     */
                    std::string GetSubtitleLanguage() const;

                    /**
                     * 设置<p>Subtitle language, such as eng.</p>
                     * @param _subtitleLanguage <p>Subtitle language, such as eng.</p>
                     * 
                     */
                    void SetSubtitleLanguage(const std::string& _subtitleLanguage);

                    /**
                     * 判断参数 SubtitleLanguage 是否已赋值
                     * @return SubtitleLanguage 是否已赋值
                     * 
                     */
                    bool SubtitleLanguageHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle output format. Valid values: {&quot;WebVTT&quot;,&quot;TTML&quot;}.<br>Default value: &quot;WebVTT&quot;.</p>
                     * @return OutputFormat <p>Subtitle output format. Valid values: {&quot;WebVTT&quot;,&quot;TTML&quot;}.<br>Default value: &quot;WebVTT&quot;.</p>
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置<p>Subtitle output format. Valid values: {&quot;WebVTT&quot;,&quot;TTML&quot;}.<br>Default value: &quot;WebVTT&quot;.</p>
                     * @param _outputFormat <p>Subtitle output format. Valid values: {&quot;WebVTT&quot;,&quot;TTML&quot;}.<br>Default value: &quot;WebVTT&quot;.</p>
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取<p>Default subtitle track. When set to true, the current subtitle is designated as the default subtitle track. A maximum of 1 default subtitle track can be specified.<br>Default value: false.</p>
                     * @return DefaultTrack <p>Default subtitle track. When set to true, the current subtitle is designated as the default subtitle track. A maximum of 1 default subtitle track can be specified.<br>Default value: false.</p>
                     * 
                     */
                    bool GetDefaultTrack() const;

                    /**
                     * 设置<p>Default subtitle track. When set to true, the current subtitle is designated as the default subtitle track. A maximum of 1 default subtitle track can be specified.<br>Default value: false.</p>
                     * @param _defaultTrack <p>Default subtitle track. When set to true, the current subtitle is designated as the default subtitle track. A maximum of 1 default subtitle track can be specified.<br>Default value: false.</p>
                     * 
                     */
                    void SetDefaultTrack(const bool& _defaultTrack);

                    /**
                     * 判断参数 DefaultTrack 是否已赋值
                     * @return DefaultTrack 是否已赋值
                     * 
                     */
                    bool DefaultTrackHasBeenSet() const;

                private:

                    /**
                     * <p>Insertion method. Valid values:</p><li>subtitle-stream: Inserts a subtitle track.</li><li>close-caption-708: Encodes CEA-708 subtitles into SEI frames.</li><li>close-caption-608: Encodes CEA-608 subtitles into SEI frames.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Subtitle file.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaInputInfo m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * <p>Subtitle name.<br>Note: Only Chinese characters, letters, digits, spaces, underscores (_), hyphens (-), periods (.), and brackets are supported. The length cannot exceed 64 characters.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                    /**
                     * <p>Subtitle language, such as eng.</p>
                     */
                    std::string m_subtitleLanguage;
                    bool m_subtitleLanguageHasBeenSet;

                    /**
                     * <p>Subtitle output format. Valid values: {&quot;WebVTT&quot;,&quot;TTML&quot;}.<br>Default value: &quot;WebVTT&quot;.</p>
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * <p>Default subtitle track. When set to true, the current subtitle is designated as the default subtitle track. A maximum of 1 default subtitle track can be specified.<br>Default value: false.</p>
                     */
                    bool m_defaultTrack;
                    bool m_defaultTrackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_
