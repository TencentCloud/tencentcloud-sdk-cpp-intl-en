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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/AddOnSubtitle.h>
#include <tencentcloud/mps/v20190612/model/DrmInfo.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter type of adaptive bitrate streaming
                */
                class AdaptiveDynamicStreamingTaskInput : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingTaskInput();
                    ~AdaptiveDynamicStreamingTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Adaptive dynamic streaming template ID.
                     * @return Definition Adaptive dynamic streaming template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Adaptive dynamic streaming template ID.
                     * @param _definition Adaptive dynamic streaming template ID.
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
                     * 获取Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * @return WatermarkSet Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * @param _watermarkSet Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取Target storage for files after adaptive dynamic streaming. If left blank, it inherits the upper-level OutputStorage value.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OutputStorage Target storage for files after adaptive dynamic streaming. If left blank, it inherits the upper-level OutputStorage value.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target storage for files after adaptive dynamic streaming. If left blank, it inherits the upper-level OutputStorage value.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _outputStorage Target storage for files after adaptive dynamic streaming. If left blank, it inherits the upper-level OutputStorage value.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Output path for the manifest file after adaptive dynamic streaming. It can be either a relative path or an absolute path.
If you need to define an output path, the path must end with `.{format}`. Refer to [Filename Variable Description](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1) for variable names.
Example of relative path:
<li>filename_{variable name}.{format}</li>
<li>filename.{format}</li>
Example of absolute path:
<li>/custom path/filename_{variable name}.{format}</li>
If not filled in, it is a relative path by default: {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * @return OutputObjectPath Output path for the manifest file after adaptive dynamic streaming. It can be either a relative path or an absolute path.
If you need to define an output path, the path must end with `.{format}`. Refer to [Filename Variable Description](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1) for variable names.
Example of relative path:
<li>filename_{variable name}.{format}</li>
<li>filename.{format}</li>
Example of absolute path:
<li>/custom path/filename_{variable name}.{format}</li>
If not filled in, it is a relative path by default: {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Output path for the manifest file after adaptive dynamic streaming. It can be either a relative path or an absolute path.
If you need to define an output path, the path must end with `.{format}`. Refer to [Filename Variable Description](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1) for variable names.
Example of relative path:
<li>filename_{variable name}.{format}</li>
<li>filename.{format}</li>
Example of absolute path:
<li>/custom path/filename_{variable name}.{format}</li>
If not filled in, it is a relative path by default: {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * @param _outputObjectPath Output path for the manifest file after adaptive dynamic streaming. It can be either a relative path or an absolute path.
If you need to define an output path, the path must end with `.{format}`. Refer to [Filename Variable Description](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1) for variable names.
Example of relative path:
<li>filename_{variable name}.{format}</li>
<li>filename.{format}</li>
Example of absolute path:
<li>/custom path/filename_{variable name}.{format}</li>
If not filled in, it is a relative path by default: {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取After adaptive dynamic streaming, the output path of substream files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * @return SubStreamObjectName After adaptive dynamic streaming, the output path of substream files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * 
                     */
                    std::string GetSubStreamObjectName() const;

                    /**
                     * 设置After adaptive dynamic streaming, the output path of substream files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * @param _subStreamObjectName After adaptive dynamic streaming, the output path of substream files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * 
                     */
                    void SetSubStreamObjectName(const std::string& _subStreamObjectName);

                    /**
                     * 判断参数 SubStreamObjectName 是否已赋值
                     * @return SubStreamObjectName 是否已赋值
                     * 
                     */
                    bool SubStreamObjectNameHasBeenSet() const;

                    /**
                     * 获取After adaptive dynamic streaming (for HLS only), the output path of segment files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * @return SegmentObjectName After adaptive dynamic streaming (for HLS only), the output path of segment files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置After adaptive dynamic streaming (for HLS only), the output path of segment files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * @param _segmentObjectName After adaptive dynamic streaming (for HLS only), the output path of segment files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * 
                     */
                    void SetSegmentObjectName(const std::string& _segmentObjectName);

                    /**
                     * 判断参数 SegmentObjectName 是否已赋值
                     * @return SegmentObjectName 是否已赋值
                     * 
                     */
                    bool SegmentObjectNameHasBeenSet() const;

                    /**
                     * 获取External subtitle feature specifies the subtitle file to be inserted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AddOnSubtitles External subtitle feature specifies the subtitle file to be inserted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置External subtitle feature specifies the subtitle file to be inserted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _addOnSubtitles External subtitle feature specifies the subtitle file to be inserted.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAddOnSubtitles(const std::vector<AddOnSubtitle>& _addOnSubtitles);

                    /**
                     * 判断参数 AddOnSubtitles 是否已赋值
                     * @return AddOnSubtitles 是否已赋值
                     * 
                     */
                    bool AddOnSubtitlesHasBeenSet() const;

                    /**
                     * 获取Specifies the Drm information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DrmInfo Specifies the Drm information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DrmInfo GetDrmInfo() const;

                    /**
                     * 设置Specifies the Drm information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _drmInfo Specifies the Drm information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDrmInfo(const DrmInfo& _drmInfo);

                    /**
                     * 判断参数 DrmInfo 是否已赋值
                     * @return DrmInfo 是否已赋值
                     * 
                     */
                    bool DrmInfoHasBeenSet() const;

                    /**
                     * 获取Adaptive transcoding template type.
Common: audio/video type.
PureAudio: audio-only.
                     * @return DefinitionType Adaptive transcoding template type.
Common: audio/video type.
PureAudio: audio-only.
                     * 
                     */
                    std::string GetDefinitionType() const;

                    /**
                     * 设置Adaptive transcoding template type.
Common: audio/video type.
PureAudio: audio-only.
                     * @param _definitionType Adaptive transcoding template type.
Common: audio/video type.
PureAudio: audio-only.
                     * 
                     */
                    void SetDefinitionType(const std::string& _definitionType);

                    /**
                     * 判断参数 DefinitionType 是否已赋值
                     * @return DefinitionType 是否已赋值
                     * 
                     */
                    bool DefinitionTypeHasBeenSet() const;

                    /**
                     * 获取Hard subtitle (suppression subtitle) feature, specify subtitles source, font size, position and other subtitle parameters.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubtitleTemplate Hard subtitle (suppression subtitle) feature, specify subtitles source, font size, position and other subtitle parameters.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置Hard subtitle (suppression subtitle) feature, specify subtitles source, font size, position and other subtitle parameters.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subtitleTemplate Hard subtitle (suppression subtitle) feature, specify subtitles source, font size, position and other subtitle parameters.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubtitleTemplate(const SubtitleTemplate& _subtitleTemplate);

                    /**
                     * 判断参数 SubtitleTemplate 是否已赋值
                     * @return SubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取Transcoding parameter extension field.
                     * @return StdExtInfo Transcoding parameter extension field.
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置Transcoding parameter extension field.
                     * @param _stdExtInfo Transcoding parameter extension field.
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                private:

                    /**
                     * Adaptive dynamic streaming template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * Target storage for files after adaptive dynamic streaming. If left blank, it inherits the upper-level OutputStorage value.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Output path for the manifest file after adaptive dynamic streaming. It can be either a relative path or an absolute path.
If you need to define an output path, the path must end with `.{format}`. Refer to [Filename Variable Description](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1) for variable names.
Example of relative path:
<li>filename_{variable name}.{format}</li>
<li>filename.{format}</li>
Example of absolute path:
<li>/custom path/filename_{variable name}.{format}</li>
If not filled in, it is a relative path by default: {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * After adaptive dynamic streaming, the output path of substream files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     */
                    std::string m_subStreamObjectName;
                    bool m_subStreamObjectNameHasBeenSet;

                    /**
                     * After adaptive dynamic streaming (for HLS only), the output path of segment files can only be a relative path. If not filled in, it is a relative path by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * External subtitle feature specifies the subtitle file to be inserted.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                    /**
                     * Specifies the Drm information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DrmInfo m_drmInfo;
                    bool m_drmInfoHasBeenSet;

                    /**
                     * Adaptive transcoding template type.
Common: audio/video type.
PureAudio: audio-only.
                     */
                    std::string m_definitionType;
                    bool m_definitionTypeHasBeenSet;

                    /**
                     * Hard subtitle (suppression subtitle) feature, specify subtitles source, font size, position and other subtitle parameters.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                    /**
                     * Transcoding parameter extension field.
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
