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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HDRINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HDRINFO_H_

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
                * High dynamic range (HDR) configuration.
                */
                class HDRInfo : public AbstractModel
                {
                public:
                    HDRInfo();
                    ~HDRInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable HDR. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
Default value: `OFF`.
                     * @return Switch Whether to enable HDR. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
Default value: `OFF`.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable HDR. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
Default value: `OFF`.
                     * @param _switch Whether to enable HDR. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
Default value: `OFF`.
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
                     * 获取High dynamic range type. Valid values:
<li>hdr10: means the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>

Note:
<li>Valid only when the high dynamic range type control switch is ON.</li>
<li>Valid when the video stream encoding format Codec of the video output parameter specified in the target parameter is libx264 or libx265.</li>
                     * @return Type High dynamic range type. Valid values:
<li>hdr10: means the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>

Note:
<li>Valid only when the high dynamic range type control switch is ON.</li>
<li>Valid when the video stream encoding format Codec of the video output parameter specified in the target parameter is libx264 or libx265.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置High dynamic range type. Valid values:
<li>hdr10: means the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>

Note:
<li>Valid only when the high dynamic range type control switch is ON.</li>
<li>Valid when the video stream encoding format Codec of the video output parameter specified in the target parameter is libx264 or libx265.</li>
                     * @param _type High dynamic range type. Valid values:
<li>hdr10: means the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>

Note:
<li>Valid only when the high dynamic range type control switch is ON.</li>
<li>Valid when the video stream encoding format Codec of the video output parameter specified in the target parameter is libx264 or libx265.</li>
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
                     * Whether to enable HDR. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
Default value: `OFF`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * High dynamic range type. Valid values:
<li>hdr10: means the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>

Note:
<li>Valid only when the high dynamic range type control switch is ON.</li>
<li>Valid when the video stream encoding format Codec of the video output parameter specified in the target parameter is libx264 or libx265.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HDRINFO_H_
