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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKINPUT_H_

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
                * Watermark parameter type in a video processing task.
                */
                class WatermarkInput : public AbstractModel
                {
                public:
                    WatermarkInput();
                    ~WatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark template ID.
                     * @return Definition Watermark template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Watermark template ID.
                     * @param _definition Watermark template ID.
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
                     * 获取Text content, up to 100 characters. Fill in only when the watermark type is text watermark.
Text watermarks do not support watermarking screenshots.
                     * @return TextContent Text content, up to 100 characters. Fill in only when the watermark type is text watermark.
Text watermarks do not support watermarking screenshots.
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置Text content, up to 100 characters. Fill in only when the watermark type is text watermark.
Text watermarks do not support watermarking screenshots.
                     * @param _textContent Text content, up to 100 characters. Fill in only when the watermark type is text watermark.
Text watermarks do not support watermarking screenshots.
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
                     * 获取SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.
SVG watermark does not support screenshot watermarking.
                     * @return SvgContent SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.
SVG watermark does not support screenshot watermarking.
                     * 
                     */
                    std::string GetSvgContent() const;

                    /**
                     * 设置SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.
SVG watermark does not support screenshot watermarking.
                     * @param _svgContent SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.
SVG watermark does not support screenshot watermarking.
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
<li>When the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>
                     * @return StartTimeOffset Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>When the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>When the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>
                     * @param _startTimeOffset Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>When the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>
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
<li>When the value is less than 0 (assuming -n), the watermark persists until n seconds before the end of the video.</li>
                     * @return EndTimeOffset End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the watermark persists until n seconds before the end of the video.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the watermark persists until n seconds before the end of the video.</li>
                     * @param _endTimeOffset End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the watermark persists until n seconds before the end of the video.</li>
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
                     * Watermark template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Text content, up to 100 characters. Fill in only when the watermark type is text watermark.
Text watermarks do not support watermarking screenshots.
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * SVG content. Length not exceeding 2000000 characters. Fill in only when the watermark type is SVG watermark.
SVG watermark does not support screenshot watermarking.
                     */
                    std::string m_svgContent;
                    bool m_svgContentHasBeenSet;

                    /**
                     * Start time offset of a watermark, in seconds. If not set or set to 0, a watermark starts appearing when a video starts.
<li>If not set or set to 0, a watermark starts appearing when a video starts.</li>
<li>If the value is greater than 0 (for example, n), a watermark will appear at second n of a video.</li>
<li>When the value is less than 0 (assuming -n), the watermark appears n seconds before the end of the video.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a watermark, in seconds.
<li>If not set or set to 0, a watermark will last until the end of a video.</li>
<li>If the value is greater than 0 (for example, n), a watermark will disappear at second n.</li>
<li>When the value is less than 0 (assuming -n), the watermark persists until n seconds before the end of the video.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKINPUT_H_
