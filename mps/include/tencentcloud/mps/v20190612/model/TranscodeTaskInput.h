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
#include <tencentcloud/mps/v20190612/model/BlindWatermarkInput.h>
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
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置ID of a video transcoding template.
                     * @param _definition ID of a video transcoding template.
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
                     * 获取Custom video transcoding parameter. valid when Definition is set to 0.
This parameter is used in high customization scenarios. it is recommended that you preferentially use Definition to specify transcoding parameters.
                     * @return RawParameter Custom video transcoding parameter. valid when Definition is set to 0.
This parameter is used in high customization scenarios. it is recommended that you preferentially use Definition to specify transcoding parameters.
                     * 
                     */
                    RawTranscodeParameter GetRawParameter() const;

                    /**
                     * 设置Custom video transcoding parameter. valid when Definition is set to 0.
This parameter is used in high customization scenarios. it is recommended that you preferentially use Definition to specify transcoding parameters.
                     * @param _rawParameter Custom video transcoding parameter. valid when Definition is set to 0.
This parameter is used in high customization scenarios. it is recommended that you preferentially use Definition to specify transcoding parameters.
                     * 
                     */
                    void SetRawParameter(const RawTranscodeParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
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
                     * 
                     */
                    OverrideTranscodeParameter GetOverrideParameter() const;

                    /**
                     * 设置Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _overrideParameter Video transcoding custom parameter, which is valid when `Definition` is not 0.
When any parameters in this structure are entered, they will be used to override corresponding parameters in templates.
This parameter is used in highly customized scenarios. We recommend you only use `Definition` to specify the transcoding parameter.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetOverrideParameter(const OverrideTranscodeParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

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
                     * 获取Digital watermark parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BlindWatermark Digital watermark parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置Digital watermark parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _blindWatermark Digital watermark parameter.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of blurs. Up to 10 ones can be supported.
                     * @return MosaicSet List of blurs. Up to 10 ones can be supported.
                     * 
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置List of blurs. Up to 10 ones can be supported.
                     * @param _mosaicSet List of blurs. Up to 10 ones can be supported.
                     * 
                     */
                    void SetMosaicSet(const std::vector<MosaicInput>& _mosaicSet);

                    /**
                     * 判断参数 MosaicSet 是否已赋值
                     * @return MosaicSet 是否已赋值
                     * 
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
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     * @param _startTimeOffset Start time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will start at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will start at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will start at the nth second before the end of the original video.</li>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
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
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     * @param _endTimeOffset End time offset of a transcoded video, in seconds.
<li>If this parameter is left empty or set to 0, the transcoded video will end at the same time as the original video.</li>
<li>If this parameter is set to a positive number (n for example), the transcoded video will end at the nth second of the original video.</li>
<li>If this parameter is set to a negative number (-n for example), the transcoded video will end at the nth second before the end of the original video.</li>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputStorage Target bucket of an output file. If this parameter is left empty, the `OutputStorage` value of the upper folder will be inherited.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Output path of the main file after transcoding, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_transcode_{definition}.{format}`.
                     * @return OutputObjectPath Output path of the main file after transcoding, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_transcode_{definition}.{format}`.
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Output path of the main file after transcoding, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_transcode_{definition}.{format}`.
                     * @param _outputObjectPath Output path of the main file after transcoding, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_transcode_{definition}.{format}`.
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
                     * 获取Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     * @return SegmentObjectName Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
                     * @param _segmentObjectName Path to an output file part (the path to ts during transcoding to HLS), which can only be a relative path. If this parameter is left empty, the following relative path will be used by default: `{inputName}_transcode_{definition}_{number}.{format}`.
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
                     * 获取Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectNumberFormat Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectNumberFormat Rule of the `{number}` variable in the output path after transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     * 
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                    /**
                     * 获取Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     * @return HeadTailParameter Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    HeadTailParameter GetHeadTailParameter() const;

                    /**
                     * 设置Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _headTailParameter Opening and closing credits parameters
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetHeadTailParameter(const HeadTailParameter& _headTailParameter);

                    /**
                     * 判断参数 HeadTailParameter 是否已赋值
                     * @return HeadTailParameter 是否已赋值
                     * 
                     */
                    bool HeadTailParameterHasBeenSet() const;

                private:

                    /**
                     * ID of a video transcoding template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Custom video transcoding parameter. valid when Definition is set to 0.
This parameter is used in high customization scenarios. it is recommended that you preferentially use Definition to specify transcoding parameters.
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
                     * Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * Digital watermark parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

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
                     * Output path of the main file after transcoding, which can be a relative or absolute path.
If you need to define an output path, the path must end with `.{format}`. For variable names, refer to [Filename Variable](https://intl.cloud.tencent.com/document/product/862/37039?from_cn_redirect=1).Relative path example:
<li>Filename_{Variable name}.{format}.</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}.</li>
If left empty, a relative path is used by default: `{inputName}_transcode_{definition}.{format}`.
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
