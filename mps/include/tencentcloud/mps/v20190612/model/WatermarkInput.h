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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawWatermarkParameter.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The watermark parameters to use in a media processing task.
                */
                class WatermarkInput : public AbstractModel
                {
                public:
                    WatermarkInput();
                    ~WatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of a watermarking template.
                     * @return Definition ID of a watermarking template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置ID of a watermarking template.
                     * @param _definition ID of a watermarking template.
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
                     * 获取Custom watermark parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the watermark parameter preferably.
Custom watermark parameter is not available for screenshot.
                     * @return RawParameter Custom watermark parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the watermark parameter preferably.
Custom watermark parameter is not available for screenshot.
                     * 
                     */
                    RawWatermarkParameter GetRawParameter() const;

                    /**
                     * 设置Custom watermark parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the watermark parameter preferably.
Custom watermark parameter is not available for screenshot.
                     * @param _rawParameter Custom watermark parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the watermark parameter preferably.
Custom watermark parameter is not available for screenshot.
                     * 
                     */
                    void SetRawParameter(const RawWatermarkParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取Text content of up to 100 characters. This field is required only when the watermark type is text.
Text watermark is not available for screenshot.
                     * @return TextContent Text content of up to 100 characters. This field is required only when the watermark type is text.
Text watermark is not available for screenshot.
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置Text content of up to 100 characters. This field is required only when the watermark type is text.
Text watermark is not available for screenshot.
                     * @param _textContent Text content of up to 100 characters. This field is required only when the watermark type is text.
Text watermark is not available for screenshot.
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取SVG content of up to 2,000,000 characters. This field is required only when the watermark type is `SVG`.
SVG watermark is not available for screenshot.
                     * @return SvgContent SVG content of up to 2,000,000 characters. This field is required only when the watermark type is `SVG`.
SVG watermark is not available for screenshot.
                     * 
                     */
                    std::string GetSvgContent() const;

                    /**
                     * 设置SVG content of up to 2,000,000 characters. This field is required only when the watermark type is `SVG`.
SVG watermark is not available for screenshot.
                     * @param _svgContent SVG content of up to 2,000,000 characters. This field is required only when the watermark type is `SVG`.
SVG watermark is not available for screenshot.
                     * 
                     */
                    void SetSvgContent(const std::string& _svgContent);

                    /**
                     * 判断参数 SvgContent 是否已赋值
                     * @return SvgContent 是否已赋值
                     * 
                     */
                    bool SvgContentHasBeenSet() const;

                    /**
                     * 获取Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>If the value is less than 0 (for example, -n), a watermark will appear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * @return StartTimeOffset Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>If the value is less than 0 (for example, -n), a watermark will appear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>If the value is less than 0 (for example, -n), a watermark will appear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * @param _startTimeOffset Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>If the value is less than 0 (for example, -n), a watermark will appear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
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
                     * 获取End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>If the value is less than 0 (for example, -n), a watermark will disappear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * @return EndTimeOffset End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>If the value is less than 0 (for example, -n), a watermark will disappear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>If the value is less than 0 (for example, -n), a watermark will disappear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * @param _endTimeOffset End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>If the value is less than 0 (for example, -n), a watermark will disappear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * ID of a watermarking template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Custom watermark parameter, which is valid if `Definition` is 0.
This parameter is used in highly customized scenarios. We recommend you use `Definition` to specify the watermark parameter preferably.
Custom watermark parameter is not available for screenshot.
                     */
                    RawWatermarkParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * Text content of up to 100 characters. This field is required only when the watermark type is text.
Text watermark is not available for screenshot.
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * SVG content of up to 2,000,000 characters. This field is required only when the watermark type is `SVG`.
SVG watermark is not available for screenshot.
                     */
                    std::string m_svgContent;
                    bool m_svgContentHasBeenSet;

                    /**
                     * Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>If the value is less than 0 (for example, -n), a watermark will appear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>If the value is less than 0 (for example, -n), a watermark will disappear n seconds before the end of a video.</li>

Note: It is only used for video scenarios. Screenshots are not supported.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
