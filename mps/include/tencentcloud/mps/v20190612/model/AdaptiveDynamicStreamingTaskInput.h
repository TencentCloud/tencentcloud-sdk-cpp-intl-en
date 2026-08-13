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
#include <tencentcloud/mps/v20190612/model/BlindWatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/AddOnSubtitle.h>
#include <tencentcloud/mps/v20190612/model/DrmInfo.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>
#include <tencentcloud/mps/v20190612/model/AddOnAudio.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveStreamTemplate.h>


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
                     * 获取<p>Adaptive bitrate streaming template ID.</p>
                     * @return Definition <p>Adaptive bitrate streaming template ID.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Adaptive bitrate streaming template ID.</p>
                     * @param _definition <p>Adaptive bitrate streaming template ID.</p>
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
                     * 获取<p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * @return WatermarkSet <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置<p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     * @param _watermarkSet <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
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
                     * 获取<p>Digital watermark parameter.</p>
                     * @return BlindWatermark <p>Digital watermark parameter.</p>
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置<p>Digital watermark parameter.</p>
                     * @param _blindWatermark <p>Digital watermark parameter.</p>
                     * 
                     */
                    void SetBlindWatermark(const BlindWatermarkInput& _blindWatermark);

                    /**
                     * 判断参数 BlindWatermark 是否已赋值
                     * @return BlindWatermark 是否已赋值
                     * 
                     */
                    bool BlindWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>Target storage for files after adaptive bitrate streaming. If left blank, it inherits the upper-level OutputStorage value.</p>
                     * @return OutputStorage <p>Target storage for files after adaptive bitrate streaming. If left blank, it inherits the upper-level OutputStorage value.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Target storage for files after adaptive bitrate streaming. If left blank, it inherits the upper-level OutputStorage value.</p>
                     * @param _outputStorage <p>Target storage for files after adaptive bitrate streaming. If left blank, it inherits the upper-level OutputStorage value.</p>
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
                     * 获取<p>Output path for the manifest file after adaptive bitrate streaming, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">Filename Variables</a>.<br>Relative path example:</p><li>Filename_{variable name}.{format}</li><li>Filename.{format}</li>Absolute path example:<li>/custom path/Filename_{variable name}.{format}</li>If this is not specified, the default relative path is {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * @return OutputObjectPath <p>Output path for the manifest file after adaptive bitrate streaming, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">Filename Variables</a>.<br>Relative path example:</p><li>Filename_{variable name}.{format}</li><li>Filename.{format}</li>Absolute path example:<li>/custom path/Filename_{variable name}.{format}</li>If this is not specified, the default relative path is {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>Output path for the manifest file after adaptive bitrate streaming, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">Filename Variables</a>.<br>Relative path example:</p><li>Filename_{variable name}.{format}</li><li>Filename.{format}</li>Absolute path example:<li>/custom path/Filename_{variable name}.{format}</li>If this is not specified, the default relative path is {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     * @param _outputObjectPath <p>Output path for the manifest file after adaptive bitrate streaming, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">Filename Variables</a>.<br>Relative path example:</p><li>Filename_{variable name}.{format}</li><li>Filename.{format}</li>Absolute path example:<li>/custom path/Filename_{variable name}.{format}</li>If this is not specified, the default relative path is {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
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
                     * 获取<p>Output path for substream files after adaptive bitrate streaming, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>.</p>
                     * @return SubStreamObjectName <p>Output path for substream files after adaptive bitrate streaming, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>.</p>
                     * 
                     */
                    std::string GetSubStreamObjectName() const;

                    /**
                     * 设置<p>Output path for substream files after adaptive bitrate streaming, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>.</p>
                     * @param _subStreamObjectName <p>Output path for substream files after adaptive bitrate streaming, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>.</p>
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
                     * 获取<p>Output path for segment files after adaptive bitrate streaming (HLS only), which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>.</p>
                     * @return SegmentObjectName <p>Output path for segment files after adaptive bitrate streaming (HLS only), which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>.</p>
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置<p>Output path for segment files after adaptive bitrate streaming (HLS only), which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>.</p>
                     * @param _segmentObjectName <p>Output path for segment files after adaptive bitrate streaming (HLS only), which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>.</p>
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
                     * 获取<p>External subtitle feature. Specifies the subtitle file to be inserted.</p>
                     * @return AddOnSubtitles <p>External subtitle feature. Specifies the subtitle file to be inserted.</p>
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置<p>External subtitle feature. Specifies the subtitle file to be inserted.</p>
                     * @param _addOnSubtitles <p>External subtitle feature. Specifies the subtitle file to be inserted.</p>
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
                     * 获取<p>Drm information.</p>
                     * @return DrmInfo <p>Drm information.</p>
                     * 
                     */
                    DrmInfo GetDrmInfo() const;

                    /**
                     * 设置<p>Drm information.</p>
                     * @param _drmInfo <p>Drm information.</p>
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
                     * 获取<p>Adaptive bitrate streaming template type. Valid values:<br>Common: audio and video.<br>PureAudio: audio only.</p>
                     * @return DefinitionType <p>Adaptive bitrate streaming template type. Valid values:<br>Common: audio and video.<br>PureAudio: audio only.</p>
                     * 
                     */
                    std::string GetDefinitionType() const;

                    /**
                     * 设置<p>Adaptive bitrate streaming template type. Valid values:<br>Common: audio and video.<br>PureAudio: audio only.</p>
                     * @param _definitionType <p>Adaptive bitrate streaming template type. Valid values:<br>Common: audio and video.<br>PureAudio: audio only.</p>
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
                     * 获取<p>Hard subtitle (burned-in subtitle) feature. Specifies the subtitle source, font size, location, and other subtitle parameters.</p>
                     * @return SubtitleTemplate <p>Hard subtitle (burned-in subtitle) feature. Specifies the subtitle source, font size, location, and other subtitle parameters.</p>
                     * 
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置<p>Hard subtitle (burned-in subtitle) feature. Specifies the subtitle source, font size, location, and other subtitle parameters.</p>
                     * @param _subtitleTemplate <p>Hard subtitle (burned-in subtitle) feature. Specifies the subtitle source, font size, location, and other subtitle parameters.</p>
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
                     * 获取<p>Extended transcoding parameter field.</p>
                     * @return StdExtInfo <p>Extended transcoding parameter field.</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>Extended transcoding parameter field.</p>
                     * @param _stdExtInfo <p>Extended transcoding parameter field.</p>
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>Set the frame at the specified pts time as a key frame and segment it. Unit: milliseconds (relative deviation <=1ms is allowed). When both gop and segment duration are specified simultaneously, they function together. Note that RawPts must be enabled, keep the frame rate following the source, and ensure the passed-in pts time corresponds to a frame in the source.</p>
                     * @return KeyPTSList <p>Set the frame at the specified pts time as a key frame and segment it. Unit: milliseconds (relative deviation <=1ms is allowed). When both gop and segment duration are specified simultaneously, they function together. Note that RawPts must be enabled, keep the frame rate following the source, and ensure the passed-in pts time corresponds to a frame in the source.</p>
                     * 
                     */
                    std::vector<int64_t> GetKeyPTSList() const;

                    /**
                     * 设置<p>Set the frame at the specified pts time as a key frame and segment it. Unit: milliseconds (relative deviation <=1ms is allowed). When both gop and segment duration are specified simultaneously, they function together. Note that RawPts must be enabled, keep the frame rate following the source, and ensure the passed-in pts time corresponds to a frame in the source.</p>
                     * @param _keyPTSList <p>Set the frame at the specified pts time as a key frame and segment it. Unit: milliseconds (relative deviation <=1ms is allowed). When both gop and segment duration are specified simultaneously, they function together. Note that RawPts must be enabled, keep the frame rate following the source, and ensure the passed-in pts time corresponds to a frame in the source.</p>
                     * 
                     */
                    void SetKeyPTSList(const std::vector<int64_t>& _keyPTSList);

                    /**
                     * 判断参数 KeyPTSList 是否已赋值
                     * @return KeyPTSList 是否已赋值
                     * 
                     */
                    bool KeyPTSListHasBeenSet() const;

                    /**
                     * 获取<p>External audio feature. Specifies the audio files to be inserted.</p>
                     * @return AddOnAudios <p>External audio feature. Specifies the audio files to be inserted.</p>
                     * 
                     */
                    std::vector<AddOnAudio> GetAddOnAudios() const;

                    /**
                     * 设置<p>External audio feature. Specifies the audio files to be inserted.</p>
                     * @param _addOnAudios <p>External audio feature. Specifies the audio files to be inserted.</p>
                     * 
                     */
                    void SetAddOnAudios(const std::vector<AddOnAudio>& _addOnAudios);

                    /**
                     * 判断参数 AddOnAudios 是否已赋值
                     * @return AddOnAudios 是否已赋值
                     * 
                     */
                    bool AddOnAudiosHasBeenSet() const;

                    /**
                     * 获取<p>When not empty, directly replace the StreamInfos field of the template. The field format is the same as the StreamInfos when creating an adaptive template.</p>
                     * @return StdExtStreamInfos <p>When not empty, directly replace the StreamInfos field of the template. The field format is the same as the StreamInfos when creating an adaptive template.</p>
                     * 
                     */
                    std::vector<AdaptiveStreamTemplate> GetStdExtStreamInfos() const;

                    /**
                     * 设置<p>When not empty, directly replace the StreamInfos field of the template. The field format is the same as the StreamInfos when creating an adaptive template.</p>
                     * @param _stdExtStreamInfos <p>When not empty, directly replace the StreamInfos field of the template. The field format is the same as the StreamInfos when creating an adaptive template.</p>
                     * 
                     */
                    void SetStdExtStreamInfos(const std::vector<AdaptiveStreamTemplate>& _stdExtStreamInfos);

                    /**
                     * 判断参数 StdExtStreamInfos 是否已赋值
                     * @return StdExtStreamInfos 是否已赋值
                     * 
                     */
                    bool StdExtStreamInfosHasBeenSet() const;

                private:

                    /**
                     * <p>Adaptive bitrate streaming template ID.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Watermark list. Up to 10 image or text watermarks are supported.</p>
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * <p>Digital watermark parameter.</p>
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

                    /**
                     * <p>Target storage for files after adaptive bitrate streaming. If left blank, it inherits the upper-level OutputStorage value.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Output path for the manifest file after adaptive bitrate streaming, which can be a relative or absolute path.<br>To define the output path, the path must end with <code>.{format}</code>. For variable names, see <a href="https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1">Filename Variables</a>.<br>Relative path example:</p><li>Filename_{variable name}.{format}</li><li>Filename.{format}</li>Absolute path example:<li>/custom path/Filename_{variable name}.{format}</li>If this is not specified, the default relative path is {inputName}_adaptiveDynamicStreaming_{definition}.{format}.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>Output path for substream files after adaptive bitrate streaming, which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}</code>.</p>
                     */
                    std::string m_subStreamObjectName;
                    bool m_subStreamObjectNameHasBeenSet;

                    /**
                     * <p>Output path for segment files after adaptive bitrate streaming (HLS only), which can only be a relative path. If this is not specified, the default relative path is <code>{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}</code>.</p>
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * <p>External subtitle feature. Specifies the subtitle file to be inserted.</p>
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                    /**
                     * <p>Drm information.</p>
                     */
                    DrmInfo m_drmInfo;
                    bool m_drmInfoHasBeenSet;

                    /**
                     * <p>Adaptive bitrate streaming template type. Valid values:<br>Common: audio and video.<br>PureAudio: audio only.</p>
                     */
                    std::string m_definitionType;
                    bool m_definitionTypeHasBeenSet;

                    /**
                     * <p>Hard subtitle (burned-in subtitle) feature. Specifies the subtitle source, font size, location, and other subtitle parameters.</p>
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                    /**
                     * <p>Extended transcoding parameter field.</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                    /**
                     * <p>Set the frame at the specified pts time as a key frame and segment it. Unit: milliseconds (relative deviation <=1ms is allowed). When both gop and segment duration are specified simultaneously, they function together. Note that RawPts must be enabled, keep the frame rate following the source, and ensure the passed-in pts time corresponds to a frame in the source.</p>
                     */
                    std::vector<int64_t> m_keyPTSList;
                    bool m_keyPTSListHasBeenSet;

                    /**
                     * <p>External audio feature. Specifies the audio files to be inserted.</p>
                     */
                    std::vector<AddOnAudio> m_addOnAudios;
                    bool m_addOnAudiosHasBeenSet;

                    /**
                     * <p>When not empty, directly replace the StreamInfos field of the template. The field format is the same as the StreamInfos when creating an adaptive template.</p>
                     */
                    std::vector<AdaptiveStreamTemplate> m_stdExtStreamInfos;
                    bool m_stdExtStreamInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
