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
                * 
                */
                class MPSSubtitleLayoutConfig : public AbstractModel
                {
                public:
                    MPSSubtitleLayoutConfig();
                    ~MPSSubtitleLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SubtitleLayoutConfigSwitch 
                     * 
                     */
                    int64_t GetSubtitleLayoutConfigSwitch() const;

                    /**
                     * 设置
                     * @param _subtitleLayoutConfigSwitch 
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
                     * 获取
                     * @return LineSpacing 
                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置
                     * @param _lineSpacing 
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
                     * 获取
                     * @return LineSpacingUnit 
                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置
                     * @param _lineSpacingUnit 
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
                     * 获取
                     * @return Alignment 
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置
                     * @param _alignment 
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
                     * 
                     */
                    int64_t m_subtitleLayoutConfigSwitch;
                    bool m_subtitleLayoutConfigSwitchHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLELAYOUTCONFIG_H_
