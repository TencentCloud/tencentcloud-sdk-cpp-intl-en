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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIEXPANSIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIEXPANSIONCONFIG_H_

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
                * Intelligent image expansion configuration.
                */
                class AiExpansionConfig : public AbstractModel
                {
                public:
                    AiExpansionConfig();
                    ~AiExpansionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @return Switch <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * @param _switch <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>Target ratio, for example "16:9"</p>
                     * @return AspectRatio <p>Target ratio, for example "16:9"</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>Target ratio, for example "16:9"</p>
                     * @param _aspectRatio <p>Target ratio, for example "16:9"</p>
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取<p>Target width (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * @return Width <p>Target width (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>Target width (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * @param _width <p>Target width (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取<p>Target height (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * @return Height <p>Target height (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>Target height (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * @param _height <p>Target height (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * <p>Capability configuration switch, available values: ON: Enable; OFF: Disable. Default value: ON.</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Target ratio, for example "16:9"</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>Target width (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Target height (pixel)</p><p>Value ranges from 0 to 2048.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIEXPANSIONCONFIG_H_
