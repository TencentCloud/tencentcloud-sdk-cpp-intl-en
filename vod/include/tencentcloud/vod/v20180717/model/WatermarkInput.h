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
                * Watermark parameter type of video processing task
                */
                class WatermarkInput : public AbstractModel
                {
                public:
                    WatermarkInput();
                    ~WatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermarking template ID.
                     * @return Definition Watermarking template ID.
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Watermarking template ID.
                     * @param Definition Watermarking template ID.
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Text content of up to 100 characters. This needs to be entered only when the watermark type is text.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TextContent Text content of up to 100 characters. This needs to be entered only when the watermark type is text.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置Text content of up to 100 characters. This needs to be entered only when the watermark type is text.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TextContent Text content of up to 100 characters. This needs to be entered only when the watermark type is text.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取SVG content of up to 2,000,000 characters. This needs to be entered only when the watermark type is `SVG`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SvgContent SVG content of up to 2,000,000 characters. This needs to be entered only when the watermark type is `SVG`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSvgContent() const;

                    /**
                     * 设置SVG content of up to 2,000,000 characters. This needs to be entered only when the watermark type is `SVG`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SvgContent SVG content of up to 2,000,000 characters. This needs to be entered only when the watermark type is `SVG`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSvgContent(const std::string& _svgContent);

                    /**
                     * 判断参数 SvgContent 是否已赋值
                     * @return SvgContent 是否已赋值
                     */
                    bool SvgContentHasBeenSet() const;

                    /**
                     * 获取Start time offset of a watermark in seconds. If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame.
<li>If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will appear at second n after the first video frame;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will appear at second n before the last video frame.</li>
                     * @return StartTimeOffset Start time offset of a watermark in seconds. If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame.
<li>If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will appear at second n after the first video frame;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will appear at second n before the last video frame.</li>
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a watermark in seconds. If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame.
<li>If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will appear at second n after the first video frame;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will appear at second n before the last video frame.</li>
                     * @param StartTimeOffset Start time offset of a watermark in seconds. If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame.
<li>If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will appear at second n after the first video frame;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will appear at second n before the last video frame.</li>
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of a watermark in seconds.
<li>If this parameter is left blank or 0 is entered, the watermark will exist till the last video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will exist till second n;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will exist till second n before the last video frame.</li>
                     * @return EndTimeOffset End time offset of a watermark in seconds.
<li>If this parameter is left blank or 0 is entered, the watermark will exist till the last video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will exist till second n;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will exist till second n before the last video frame.</li>
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a watermark in seconds.
<li>If this parameter is left blank or 0 is entered, the watermark will exist till the last video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will exist till second n;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will exist till second n before the last video frame.</li>
                     * @param EndTimeOffset End time offset of a watermark in seconds.
<li>If this parameter is left blank or 0 is entered, the watermark will exist till the last video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will exist till second n;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will exist till second n before the last video frame.</li>
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Watermarking template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Text content of up to 100 characters. This needs to be entered only when the watermark type is text.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * SVG content of up to 2,000,000 characters. This needs to be entered only when the watermark type is `SVG`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_svgContent;
                    bool m_svgContentHasBeenSet;

                    /**
                     * Start time offset of a watermark in seconds. If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame.
<li>If this parameter is left blank or 0 is entered, the watermark will appear upon the first video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will appear at second n after the first video frame;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will appear at second n before the last video frame.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a watermark in seconds.
<li>If this parameter is left blank or 0 is entered, the watermark will exist till the last video frame;</li>
<li>If this value is greater than 0 (e.g., n), the watermark will exist till second n;</li>
<li>If this value is smaller than 0 (e.g., -n), the watermark will exist till second n before the last video frame.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKINPUT_H_
