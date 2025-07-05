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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_

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
                * Image noise removal configuration.
                */
                class VideoDenoiseInfo : public AbstractModel
                {
                public:
                    VideoDenoiseInfo();
                    ~VideoDenoiseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable image noise removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * @return Switch Whether to enable image noise removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable image noise removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * @param _switch Whether to enable image noise removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
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
                     * 获取The image noise removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`weak`</li>
<li>`strong`</li>
Default value: `weak`.
                     * @return Type The image noise removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`weak`</li>
<li>`strong`</li>
Default value: `weak`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The image noise removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`weak`</li>
<li>`strong`</li>
Default value: `weak`.
                     * @param _type The image noise removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`weak`</li>
<li>`strong`</li>
Default value: `weak`.
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
                     * Whether to enable image noise removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The image noise removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`weak`</li>
<li>`strong`</li>
Default value: `weak`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_
