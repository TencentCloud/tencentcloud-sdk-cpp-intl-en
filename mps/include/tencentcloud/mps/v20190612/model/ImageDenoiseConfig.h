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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEDENOISECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEDENOISECONFIG_H_

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
                * Image denoising configuration.
                */
                class ImageDenoiseConfig : public AbstractModel
                {
                public:
                    ImageDenoiseConfig();
                    ~ImageDenoiseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Capability configuration enabling status. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     * @return Switch Capability configuration enabling status. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Capability configuration enabling status. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     * @param _switch Capability configuration enabling status. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
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
                     * 获取Type, with valid values including:
<li>weak</li>
<li>strong</li>
Default value: weak.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Type, with valid values including:
<li>weak</li>
<li>strong</li>
Default value: weak.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type, with valid values including:
<li>weak</li>
<li>strong</li>
Default value: weak.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Type, with valid values including:
<li>weak</li>
<li>strong</li>
Default value: weak.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Capability configuration enabling status. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Type, with valid values including:
<li>weak</li>
<li>strong</li>
Default value: weak.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEDENOISECONFIG_H_
