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
                * Transcode task input parameter type
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video transcoding template ID.
                     * @return Definition Video transcoding template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Video transcoding template ID.
                     * @param _definition Video transcoding template ID.
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
                     * 获取Custom video transcoding parameter. It takes effect when Definition is set to 0.
This parameter is used in high customization scenarios. It is recommended that you preferentially use Definition to specify transcoding parameters.
                     * @return RawParameter Custom video transcoding parameter. It takes effect when Definition is set to 0.
This parameter is used in high customization scenarios. It is recommended that you preferentially use Definition to specify transcoding parameters.
                     * 
                     */
                    RawTranscodeParameter GetRawParameter() const;

                    /**
                     * 设置Custom video transcoding parameter. It takes effect when Definition is set to 0.
This parameter is used in high customization scenarios. It is recommended that you preferentially use Definition to specify transcoding parameters.
                     * @param _rawParameter Custom video transcoding parameter. It takes effect when Definition is set to 0.
This parameter is used in high customization scenarios. It is recommended that you preferentially use Definition to specify transcoding parameters.
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
                     * 获取
                     * @return OverrideParameter 
                     * 
                     */
                    OverrideTranscodeParameter GetOverrideParameter() const;

                    /**
                     * 设置
                     * @param _overrideParameter 
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
                     * 获取
                     * @return BlindWatermark 
                     * 
                     */
                    BlindWatermarkInput GetBlindWatermark() const;

                    /**
                     * 设置
                     * @param _blindWatermark 
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
                     * 获取Mosaic list. A maximum of 10 images is supported.
                     * @return MosaicSet Mosaic list. A maximum of 10 images is supported.
                     * 
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置Mosaic list. A maximum of 10 images is supported.
                     * @param _mosaicSet Mosaic list. A maximum of 10 images is supported.
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
                     * 获取Start time offset of the transcoded video, in seconds.
<li>If this parameter is not specified or is set to 0, the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts n seconds before the end of the original video.</li>
                     * @return StartTimeOffset Start time offset of the transcoded video, in seconds.
<li>If this parameter is not specified or is set to 0, the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts n seconds before the end of the original video.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of the transcoded video, in seconds.
<li>If this parameter is not specified or is set to 0, the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts n seconds before the end of the original video.</li>
                     * @param _startTimeOffset Start time offset of the transcoded video, in seconds.
<li>If this parameter is not specified or is set to 0, the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts n seconds before the end of the original video.</li>
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
                     * 获取End time offset of the transcoded video, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video ends at the nth second of the original video.</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     * @return EndTimeOffset End time offset of the transcoded video, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video ends at the nth second of the original video.</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of the transcoded video, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video ends at the nth second of the original video.</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     * @param _endTimeOffset End time offset of the transcoded video, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video ends at the nth second of the original video.</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
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
                     * 获取
                     * @return OutputStorage 
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置
                     * @param _outputStorage 
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
To define the output path, the path must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>
If left empty, the default relative path is `{inputName}_transcode_{definition}.{format}`.

                     * @return OutputObjectPath Output path of the main file after transcoding, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>
If left empty, the default relative path is `{inputName}_transcode_{definition}.{format}`.

                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置Output path of the main file after transcoding, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>
If left empty, the default relative path is `{inputName}_transcode_{definition}.{format}`.

                     * @param _outputObjectPath Output path of the main file after transcoding, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>
If left empty, the default relative path is `{inputName}_transcode_{definition}.{format}`.

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
                     * 获取Output path for segment files after transcoding (the path of TS files when transcoding to HLS), which can only be a relative path. If left empty, it defaults to `{inputName}_transcode_{definition}_{number}.{format}`.
                     * @return SegmentObjectName Output path for segment files after transcoding (the path of TS files when transcoding to HLS), which can only be a relative path. If left empty, it defaults to `{inputName}_transcode_{definition}_{number}.{format}`.
                     * 
                     */
                    std::string GetSegmentObjectName() const;

                    /**
                     * 设置Output path for segment files after transcoding (the path of TS files when transcoding to HLS), which can only be a relative path. If left empty, it defaults to `{inputName}_transcode_{definition}_{number}.{format}`.
                     * @param _segmentObjectName Output path for segment files after transcoding (the path of TS files when transcoding to HLS), which can only be a relative path. If left empty, it defaults to `{inputName}_transcode_{definition}_{number}.{format}`.
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
                     * @return ObjectNumberFormat 
                     * 
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置
                     * @param _objectNumberFormat 
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
                     * 获取
                     * @return HeadTailParameter 
                     * 
                     */
                    HeadTailParameter GetHeadTailParameter() const;

                    /**
                     * 设置
                     * @param _headTailParameter 
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
                     * Video transcoding template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Custom video transcoding parameter. It takes effect when Definition is set to 0.
This parameter is used in high customization scenarios. It is recommended that you preferentially use Definition to specify transcoding parameters.
                     */
                    RawTranscodeParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * 
                     */
                    OverrideTranscodeParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * Watermark list. Multiple image or text watermarks up to a maximum of 10 are supported.
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 
                     */
                    BlindWatermarkInput m_blindWatermark;
                    bool m_blindWatermarkHasBeenSet;

                    /**
                     * Mosaic list. A maximum of 10 images is supported.
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                    /**
                     * Start time offset of the transcoded video, in seconds.
<li>If this parameter is not specified or is set to 0, the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts n seconds before the end of the original video.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of the transcoded video, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video ends at the nth second of the original video.</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video lasts until n seconds before the end of the original video.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Output path of the main file after transcoding, which can be a relative or absolute path.
To define the output path, the path must end with `.{format}`. For variable names, please refer to [Filename Variable Explanation](https://www.tencentcloud.com/document/product/862/37039?from_cn_redirect=1).
Relative path example:
<li>Filename_{Variable name}.{format}</li>
<li>Filename.{format}.</li>
Absolute path example:
<li>/Custom path/Filename_{Variable name}.{format}</li>
If left empty, the default relative path is `{inputName}_transcode_{definition}.{format}`.

                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * Output path for segment files after transcoding (the path of TS files when transcoding to HLS), which can only be a relative path. If left empty, it defaults to `{inputName}_transcode_{definition}_{number}.{format}`.
                     */
                    std::string m_segmentObjectName;
                    bool m_segmentObjectNameHasBeenSet;

                    /**
                     * 
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                    /**
                     * 
                     */
                    HeadTailParameter m_headTailParameter;
                    bool m_headTailParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETASKINPUT_H_
