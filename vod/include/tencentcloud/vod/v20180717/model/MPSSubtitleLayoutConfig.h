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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_

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
                * Subtitle arrangement configuration for the MPS subtitle suppression module
                */
                class MPSSubtitleLayoutConfig : public AbstractModel
                {
                public:
                    MPSSubtitleLayoutConfig();
                    ~MPSSubtitleLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0</p>
                     * @return SubtitleLayoutConfigSwitch <p>Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0</p>
                     * 
                     */
                    int64_t GetSubtitleLayoutConfigSwitch() const;

                    /**
                     * 设置<p>Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0</p>
                     * @param _subtitleLayoutConfigSwitch <p>Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0</p>
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
                     * 获取<p>Line spacing. The value should be a positive integer. - When it represents pixel values, the range is [0, 1000]. - When it represents a percentage, the range is [0, 100]. The default value is 0 if left blank.</p>
                     * @return LineSpacing <p>Line spacing. The value should be a positive integer. - When it represents pixel values, the range is [0, 1000]. - When it represents a percentage, the range is [0, 100]. The default value is 0 if left blank.</p>
                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置<p>Line spacing. The value should be a positive integer. - When it represents pixel values, the range is [0, 1000]. - When it represents a percentage, the range is [0, 100]. The default value is 0 if left blank.</p>
                     * @param _lineSpacing <p>Line spacing. The value should be a positive integer. - When it represents pixel values, the range is [0, 1000]. - When it represents a percentage, the range is [0, 100]. The default value is 0 if left blank.</p>
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
                     * 获取<p>LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return LineSpacingUnit <p>LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置<p>LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _lineSpacingUnit <p>LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
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
                     * 获取<p>Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.</p>
                     * @return Alignment <p>Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.</p>
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置<p>Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.</p>
                     * @param _alignment <p>Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.</p>
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
                     * <p>Subtitle arrangement configuration switch, 0 for off, 1 for on, default 0</p>
                     */
                    int64_t m_subtitleLayoutConfigSwitch;
                    bool m_subtitleLayoutConfigSwitchHasBeenSet;

                    /**
                     * <p>Line spacing. The value should be a positive integer. - When it represents pixel values, the range is [0, 1000]. - When it represents a percentage, the range is [0, 100]. The default value is 0 if left blank.</p>
                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * <p>LineSpacing unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                    /**
                     * <p>Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.</p>
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_
