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
                     * 获取Adaptive bitrate streaming template ID.
                     * @return Definition Adaptive bitrate streaming template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Adaptive bitrate streaming template ID.
                     * @param _definition Adaptive bitrate streaming template ID.
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
                     * 获取List of up to 10 image or text watermarks.
                     * @return WatermarkSet List of up to 10 image or text watermarks.
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置List of up to 10 image or text watermarks.
                     * @param _watermarkSet List of up to 10 image or text watermarks.
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
                     * 获取
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutputStorage 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outputStorage 
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The relative or absolute output path of the manifest file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}.{format}`.
                     * @return OutputObjectPath The relative or absolute output path of the manifest file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}.{format}`.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置The relative or absolute output path of the manifest file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}.{format}`.
                     * @param _outputObjectPath The relative or absolute output path of the manifest file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}.{format}`.
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
                     * 获取The relative output path of the substream file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * @return SubStreamObjectName The relative output path of the substream file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * 
                     */
                    std::string GetSubStreamObjectName() const;

                    /**
                     * 设置The relative output path of the substream file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     * @param _subStreamObjectName The relative output path of the substream file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
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
                     * 获取The relative output path of the segment file after being transcoded to adaptive bitrate streaming (in HLS format only). If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * @return SegmentObjectName The relative output path of the segment file after being transcoded to adaptive bitrate streaming (in HLS format only). If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置The relative output path of the segment file after being transcoded to adaptive bitrate streaming (in HLS format only). If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     * @param _segmentObjectName The relative output path of the segment file after being transcoded to adaptive bitrate streaming (in HLS format only). If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
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
                     * 获取
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AddOnSubtitles 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _addOnSubtitles 
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DrmInfo 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    DrmInfo GetDrmInfo() const;

                    /**
                     * 设置
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _drmInfo 
Note: This field may return·null, indicating that no valid values can be obtained.
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
Common: audio-video.
PureAudio: audio-only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefinitionType Adaptive transcoding template type.
Common: audio-video.
PureAudio: audio-only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefinitionType() const;

                    /**
                     * 设置Adaptive transcoding template type.
Common: audio-video.
PureAudio: audio-only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _definitionType Adaptive transcoding template type.
Common: audio-video.
PureAudio: audio-only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefinitionType(const std::string& _definitionType);

                    /**
                     * 判断参数 DefinitionType 是否已赋值
                     * @return DefinitionType 是否已赋值
                     * 
                     */
                    bool DefinitionTypeHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate streaming template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * List of up to 10 image or text watermarks.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The relative or absolute output path of the manifest file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}.{format}`.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * The relative output path of the substream file after being transcoded to adaptive bitrate streaming. If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}.{format}`.
                     */
                    std::string m_subStreamObjectName;
                    bool m_subStreamObjectNameHasBeenSet;

                    /**
                     * The relative output path of the segment file after being transcoded to adaptive bitrate streaming (in HLS format only). If this parameter is left empty, a relative path in the following format will be used by default: `{inputName}_adaptiveDynamicStreaming_{definition}_{subStreamNumber}_{segmentNumber}.{format}`.
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                    /**
                     * 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    DrmInfo m_drmInfo;
                    bool m_drmInfoHasBeenSet;

                    /**
                     * Adaptive transcoding template type.
Common: audio-video.
PureAudio: audio-only.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_definitionType;
                    bool m_definitionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADAPTIVEDYNAMICSTREAMINGTASKINPUT_H_
