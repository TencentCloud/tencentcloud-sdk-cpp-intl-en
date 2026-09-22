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
                * Video noise reduction control parameters
                */
                class VideoDenoiseInfo : public AbstractModel
                {
                public:
                    VideoDenoiseInfo();
                    ~VideoDenoiseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video noise reduction control switch. Available values:
<li>ON: enable video noise reduction;</li>
<li>OFF: disable video noise reduction.</li>
                     * @return Switch Video noise reduction control switch. Available values:
<li>ON: enable video noise reduction;</li>
<li>OFF: disable video noise reduction.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Video noise reduction control switch. Available values:
<li>ON: enable video noise reduction;</li>
<li>OFF: disable video noise reduction.</li>
                     * @param _switch Video noise reduction control switch. Available values:
<li>ON: enable video noise reduction;</li>
<li>OFF: disable video noise reduction.</li>
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
                     * 获取Video noise reduction type. Valid only when the video noise reduction control switch is ON. Available values:
<li>weak: light video noise reduction;</li>
<li>strong: strong video noise reduction.</li>
Default value: weak.
                     * @return Type Video noise reduction type. Valid only when the video noise reduction control switch is ON. Available values:
<li>weak: light video noise reduction;</li>
<li>strong: strong video noise reduction.</li>
Default value: weak.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Video noise reduction type. Valid only when the video noise reduction control switch is ON. Available values:
<li>weak: light video noise reduction;</li>
<li>strong: strong video noise reduction.</li>
Default value: weak.
                     * @param _type Video noise reduction type. Valid only when the video noise reduction control switch is ON. Available values:
<li>weak: light video noise reduction;</li>
<li>strong: strong video noise reduction.</li>
Default value: weak.
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
                     * Video noise reduction control switch. Available values:
<li>ON: enable video noise reduction;</li>
<li>OFF: disable video noise reduction.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Video noise reduction type. Valid only when the video noise reduction control switch is ON. Available values:
<li>weak: light video noise reduction;</li>
<li>strong: strong video noise reduction.</li>
Default value: weak.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_
