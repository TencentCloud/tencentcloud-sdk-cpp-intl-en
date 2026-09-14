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
                * Watermark parameter type in the media processing task.
                */
                class WatermarkInput : public AbstractModel
                {
                public:
                    WatermarkInput();
                    ~WatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Watermark template ID.</p>
                     * @return Definition <p>Watermark template ID.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Watermark template ID.</p>
                     * @param _definition <p>Watermark template ID.</p>
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
                     * 获取<p>Watermark custom parameter, valid when Definition is set to 0.<br>This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify watermark parameters.<br>Watermark custom parameters are not supported for screenshot watermarking.</p>
                     * @return RawParameter <p>Watermark custom parameter, valid when Definition is set to 0.<br>This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify watermark parameters.<br>Watermark custom parameters are not supported for screenshot watermarking.</p>
                     * 
                     */
                    RawWatermarkParameter GetRawParameter() const;

                    /**
                     * 设置<p>Watermark custom parameter, valid when Definition is set to 0.<br>This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify watermark parameters.<br>Watermark custom parameters are not supported for screenshot watermarking.</p>
                     * @param _rawParameter <p>Watermark custom parameter, valid when Definition is set to 0.<br>This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify watermark parameters.<br>Watermark custom parameters are not supported for screenshot watermarking.</p>
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
                     * 获取<p>Text content, length not exceeding 100 characters. Fill in only when the watermark type is text watermark.<br>Text watermark does not support screenshot watermarking.</p>
                     * @return TextContent <p>Text content, length not exceeding 100 characters. Fill in only when the watermark type is text watermark.<br>Text watermark does not support screenshot watermarking.</p>
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置<p>Text content, length not exceeding 100 characters. Fill in only when the watermark type is text watermark.<br>Text watermark does not support screenshot watermarking.</p>
                     * @param _textContent <p>Text content, length not exceeding 100 characters. Fill in only when the watermark type is text watermark.<br>Text watermark does not support screenshot watermarking.</p>
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
                     * 获取<p>SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.<br>SVG watermark does not support screenshot watermarking.</p>
                     * @return SvgContent <p>SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.<br>SVG watermark does not support screenshot watermarking.</p>
                     * 
                     */
                    std::string GetSvgContent() const;

                    /**
                     * 设置<p>SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.<br>SVG watermark does not support screenshot watermarking.</p>
                     * @param _svgContent <p>SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.<br>SVG watermark does not support screenshot watermarking.</p>
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
                     * 获取<p>Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.</p><li>If not set or set to 0, a watermark starts appearing when a video starts;</li><li>If the value is greater than 0 (assuming n), the watermark appears at second n after the video starts;</li><li>If the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshots do not support it.
                     * @return StartTimeOffset <p>Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.</p><li>If not set or set to 0, a watermark starts appearing when a video starts;</li><li>If the value is greater than 0 (assuming n), the watermark appears at second n after the video starts;</li><li>If the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshots do not support it.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.</p><li>If not set or set to 0, a watermark starts appearing when a video starts;</li><li>If the value is greater than 0 (assuming n), the watermark appears at second n after the video starts;</li><li>If the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshots do not support it.
                     * @param _startTimeOffset <p>Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.</p><li>If not set or set to 0, a watermark starts appearing when a video starts;</li><li>If the value is greater than 0 (assuming n), the watermark appears at second n after the video starts;</li><li>If the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshots do not support it.
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
                     * 获取<p>End time offset of a watermark, in seconds.</p><li>Leave empty or set to 0: the watermark lasts until the end of the video.</li><li>Value greater than 0 (assuming n): the watermark disappears at second n.</li><li>Value smaller than 0 (assuming -n): the watermark disappears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshot is not supported.
                     * @return EndTimeOffset <p>End time offset of a watermark, in seconds.</p><li>Leave empty or set to 0: the watermark lasts until the end of the video.</li><li>Value greater than 0 (assuming n): the watermark disappears at second n.</li><li>Value smaller than 0 (assuming -n): the watermark disappears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshot is not supported.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>End time offset of a watermark, in seconds.</p><li>Leave empty or set to 0: the watermark lasts until the end of the video.</li><li>Value greater than 0 (assuming n): the watermark disappears at second n.</li><li>Value smaller than 0 (assuming -n): the watermark disappears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshot is not supported.
                     * @param _endTimeOffset <p>End time offset of a watermark, in seconds.</p><li>Leave empty or set to 0: the watermark lasts until the end of the video.</li><li>Value greater than 0 (assuming n): the watermark disappears at second n.</li><li>Value smaller than 0 (assuming -n): the watermark disappears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshot is not supported.
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
                     * <p>Watermark template ID.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Watermark custom parameter, valid when Definition is set to 0.<br>This parameter is used for highly customized scenarios. We recommend you prioritize using Definition to specify watermark parameters.<br>Watermark custom parameters are not supported for screenshot watermarking.</p>
                     */
                    RawWatermarkParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>Text content, length not exceeding 100 characters. Fill in only when the watermark type is text watermark.<br>Text watermark does not support screenshot watermarking.</p>
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * <p>SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.<br>SVG watermark does not support screenshot watermarking.</p>
                     */
                    std::string m_svgContent;
                    bool m_svgContentHasBeenSet;

                    /**
                     * <p>Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.</p><li>If not set or set to 0, a watermark starts appearing when a video starts;</li><li>If the value is greater than 0 (assuming n), the watermark appears at second n after the video starts;</li><li>If the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshots do not support it.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>End time offset of a watermark, in seconds.</p><li>Leave empty or set to 0: the watermark lasts until the end of the video.</li><li>Value greater than 0 (assuming n): the watermark disappears at second n.</li><li>Value smaller than 0 (assuming -n): the watermark disappears n seconds before the end of the video.</li>Note: Only used for video scenes. Screenshot is not supported.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
