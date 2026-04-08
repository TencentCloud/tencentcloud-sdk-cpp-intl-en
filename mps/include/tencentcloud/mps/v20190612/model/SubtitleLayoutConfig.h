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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLELAYOUTCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLELAYOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Subtitle suppression module column configuration
                */
                class SubtitleLayoutConfig : public AbstractModel
                {
                public:
                    SubtitleLayoutConfig();
                    ~SubtitleLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0
                     * @return SubtitleLayoutConfigSwitch Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0
                     * 
                     */
                    int64_t GetSubtitleLayoutConfigSwitch() const;

                    /**
                     * 设置Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0
                     * @param _subtitleLayoutConfigSwitch Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0
                     * 
                     */
                    void SetSubtitleLayoutConfigSwitch(const int64_t& _subtitleLayoutConfigSwitch);

                    /**
                     * 判断参数 SubtitleLayoutConfigSwitch 是否已赋值
                     * @return SubtitleLayoutConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleLayoutConfigSwitchHasBeenSet() const;

                    /**
                     * 获取Line spacing. The value should be a positive integer.
-Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * @return LineSpacing Line spacing. The value should be a positive integer.
-Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置Line spacing. The value should be a positive integer.
-Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * @param _lineSpacing Line spacing. The value should be a positive integer.
-Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * 
                     */
                    void SetLineSpacing(const int64_t& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                    /**
                     * 获取LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * @return LineSpacingUnit LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * @param _lineSpacingUnit LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     * 
                     */
                    void SetLineSpacingUnit(const int64_t& _lineSpacingUnit);

                    /**
                     * 判断参数 LineSpacingUnit 是否已赋值
                     * @return LineSpacingUnit 是否已赋值
                     * 
                     */
                    bool LineSpacingUnitHasBeenSet() const;

                    /**
                     * 获取Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the line count. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the line count. If this is not specified, bottom alignment is used by default.

                     * @return Alignment Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the line count. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the line count. If this is not specified, bottom alignment is used by default.

                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the line count. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the line count. If this is not specified, bottom alignment is used by default.

                     * @param _alignment Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the line count. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the line count. If this is not specified, bottom alignment is used by default.

                     * 
                     */
                    void SetAlignment(const std::string& _alignment);

                    /**
                     * 判断参数 Alignment 是否已赋值
                     * @return Alignment 是否已赋值
                     * 
                     */
                    bool AlignmentHasBeenSet() const;

                private:

                    /**
                     * Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0
                     */
                    int64_t m_subtitleLayoutConfigSwitch;
                    bool m_subtitleLayoutConfigSwitchHasBeenSet;

                    /**
                     * Line spacing. The value should be a positive integer.
-Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel

                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                    /**
                     * Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the line count. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the line count. If this is not specified, bottom alignment is used by default.

                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLELAYOUTCONFIG_H_
