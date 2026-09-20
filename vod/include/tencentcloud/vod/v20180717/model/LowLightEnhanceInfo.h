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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LOWLIGHTENHANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LOWLIGHTENHANCEINFO_H_

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
                * Low-light enhancement control
                */
                class LowLightEnhanceInfo : public AbstractModel
                {
                public:
                    LowLightEnhanceInfo();
                    ~LowLightEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Low-light enhancement control switch. Available values:
<li>ON: enable low-light enhancement;</li>
<li>OFF: low-light enhancement disabled.</li>
                     * @return Switch Low-light enhancement control switch. Available values:
<li>ON: enable low-light enhancement;</li>
<li>OFF: low-light enhancement disabled.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Low-light enhancement control switch. Available values:
<li>ON: enable low-light enhancement;</li>
<li>OFF: low-light enhancement disabled.</li>
                     * @param _switch Low-light enhancement control switch. Available values:
<li>ON: enable low-light enhancement;</li>
<li>OFF: low-light enhancement disabled.</li>
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
                     * 获取Low-light enhancement type. Valid only when the low-light enhancement control switch is ON. Available values:
<li>normal: Normal low-light enhancement;</li>
Default value: normal.
                     * @return Type Low-light enhancement type. Valid only when the low-light enhancement control switch is ON. Available values:
<li>normal: Normal low-light enhancement;</li>
Default value: normal.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Low-light enhancement type. Valid only when the low-light enhancement control switch is ON. Available values:
<li>normal: Normal low-light enhancement;</li>
Default value: normal.
                     * @param _type Low-light enhancement type. Valid only when the low-light enhancement control switch is ON. Available values:
<li>normal: Normal low-light enhancement;</li>
Default value: normal.
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
                     * Low-light enhancement control switch. Available values:
<li>ON: enable low-light enhancement;</li>
<li>OFF: low-light enhancement disabled.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Low-light enhancement type. Valid only when the low-light enhancement control switch is ON. Available values:
<li>normal: Normal low-light enhancement;</li>
Default value: normal.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LOWLIGHTENHANCEINFO_H_
