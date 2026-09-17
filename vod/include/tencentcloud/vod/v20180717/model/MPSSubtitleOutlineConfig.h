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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEOUTLINECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEOUTLINECONFIG_H_

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
                class MPSSubtitleOutlineConfig : public AbstractModel
                {
                public:
                    MPSSubtitleOutlineConfig();
                    ~MPSSubtitleOutlineConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SubtitleOutlineConfigSwitch 
                     * 
                     */
                    int64_t GetSubtitleOutlineConfigSwitch() const;

                    /**
                     * 设置
                     * @param _subtitleOutlineConfigSwitch 
                     * 
                     */
                    void SetSubtitleOutlineConfigSwitch(const int64_t& _subtitleOutlineConfigSwitch);

                    /**
                     * 判断参数 SubtitleOutlineConfigSwitch 是否已赋值
                     * @return SubtitleOutlineConfigSwitch 是否已赋值
                     * 
                     */
                    bool SubtitleOutlineConfigSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineWidth 
                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置
                     * @param _outlineWidth 
                     * 
                     */
                    void SetOutlineWidth(const double& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineWidthUnit 
                     * 
                     */
                    int64_t GetOutlineWidthUnit() const;

                    /**
                     * 设置
                     * @param _outlineWidthUnit 
                     * 
                     */
                    void SetOutlineWidthUnit(const int64_t& _outlineWidthUnit);

                    /**
                     * 判断参数 OutlineWidthUnit 是否已赋值
                     * @return OutlineWidthUnit 是否已赋值
                     * 
                     */
                    bool OutlineWidthUnitHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineColor 
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置
                     * @param _outlineColor 
                     * 
                     */
                    void SetOutlineColor(const std::string& _outlineColor);

                    /**
                     * 判断参数 OutlineColor 是否已赋值
                     * @return OutlineColor 是否已赋值
                     * 
                     */
                    bool OutlineColorHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutlineAlpha 
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置
                     * @param _outlineAlpha 
                     * 
                     */
                    void SetOutlineAlpha(const double& _outlineAlpha);

                    /**
                     * 判断参数 OutlineAlpha 是否已赋值
                     * @return OutlineAlpha 是否已赋值
                     * 
                     */
                    bool OutlineAlphaHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_subtitleOutlineConfigSwitch;
                    bool m_subtitleOutlineConfigSwitchHasBeenSet;

                    /**
                     * 
                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_outlineWidthUnit;
                    bool m_outlineWidthUnitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTITLEOUTLINECONFIG_H_
