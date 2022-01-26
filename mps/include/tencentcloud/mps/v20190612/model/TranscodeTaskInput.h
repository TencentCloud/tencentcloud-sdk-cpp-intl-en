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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawTranscodeParameter.h>
#include <tencentcloud/mps/v20190612/model/OverrideTranscodeParameter.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/MosaicInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>
#include <tencentcloud/mps/v20190612/model/HeadTailParameter.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter type of a transcoding task
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of a video transcoding template.
                     * @return Definition ID of a video transcoding template.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置ID of a video transcoding template.
                     * @param Definition ID of a video transcoding template.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Custom video transcoding parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the transcoding parameter preferably.
                     * @return RawParameter Custom video transcoding parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the transcoding parameter preferably.
                     */
                    RawTranscodeParameter GetRawParameter() const;

                    /**
                     * 设置Custom video transcoding parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the transcoding parameter preferably.
                     * @param RawParameter Custom video transcoding parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the transcoding parameter preferably.
                     */
                    void SetRawParameter(const RawTranscodeParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return OverrideParameter Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    OverrideTranscodeParameter GetOverrideParameter() const;

                    /**
                     * 设置Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param OverrideParameter Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetOverrideParameter(const OverrideTranscodeParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WatermarkSet List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WatermarkSet List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取List of blurs. Up to 10 ones can be supported.
                     * @return MosaicSet List of blurs. Up to 10 ones can be supported.
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置List of blurs. Up to 10 ones can be supported.
                     * @param MosaicSet List of blurs. Up to 10 ones can be supported.
                     */
                    void SetMosaicSet(const std::vector<MosaicInput>& _mosaicSet);

                    /**
                     * 判断参数 MosaicSet 是否已赋值
                     * @return MosaicSet 是否已赋值
                     */
                    bool MosaicSetHasBeenSet() const;

                    /**
                     * 获取Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     * @return StartTimeOffset Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     * @param StartTimeOffset Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     * @return EndTimeOffset End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     * @param EndTimeOffset End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OutputStorage Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Path to a primary output file, which can be a relative path or an absolute path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}.{format}`.
                     * @return OutputObjectPath Path to a primary output file, which can be a relative path or an absolute path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}.{format}`.
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Path to a primary output file, which can be a relative path or an absolute path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}.{format}`.
                     * @param OutputObjectPath Path to a primary output file, which can be a relative path or an absolute path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}.{format}`.
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     * @return SegmentObjectName Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     * @param SegmentObjectName Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     */
                    void SetSegmentObjectName(const std::string& _segmentObjectName);

                    /**
                     * 判断参数 SegmentObjectName 是否已赋值
                     * @return SegmentObjectName 是否已赋值
                     */
                    bool SegmentObjectNameHasBeenSet() const;

                    /**
                     * 获取Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectNumberFormat Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ObjectNumberFormat Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                    /**
                     * 获取Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     * @return HeadTailParameter Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    HeadTailParameter GetHeadTailParameter() const;

                    /**
                     * 设置Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     * @param HeadTailParameter Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetHeadTailParameter(const HeadTailParameter& _headTailParameter);

                    /**
                     * 判断参数 HeadTailParameter 是否已赋值
                     * @return HeadTailParameter 是否已赋值
                     */
                    bool HeadTailParameterHasBeenSet() const;

                private:

                    /**
                     * ID of a video transcoding template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Custom video transcoding parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the transcoding parameter preferably.
                     */
                    RawTranscodeParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    OverrideTranscodeParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * List of up to 10 image or text watermarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * List of blurs. Up to 10 ones can be supported.
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                    /**
                     * Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Path to a primary output file, which can be a relative path or an absolute path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}.{format}`.
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                    /**
                     * Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    HeadTailParameter m_headTailParameter;
                    bool m_headTailParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_
