/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_

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
                * Super resolution configuration.
                */
                class SuperResolutionInfo : public AbstractModel
                {
                public:
                    SuperResolutionInfo();
                    ~SuperResolutionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable super resolution. Valid values:
<li>ON</li>
<li>`OFF`</li>
If super resolution is enabled, the output resolution will double.
                     * @return Switch Whether to enable super resolution. Valid values:
<li>ON</li>
<li>`OFF`</li>
If super resolution is enabled, the output resolution will double.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable super resolution. Valid values:
<li>ON</li>
<li>`OFF`</li>
If super resolution is enabled, the output resolution will double.
                     * @param Switch Whether to enable super resolution. Valid values:
<li>ON</li>
<li>`OFF`</li>
If super resolution is enabled, the output resolution will double.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The super resolution type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`lq`: For low-resolution videos with obvious noise</li>
<li>`hq`: For high-resolution videos</li>
Default value: `lq`.
                     * @return Type The super resolution type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`lq`: For low-resolution videos with obvious noise</li>
<li>`hq`: For high-resolution videos</li>
Default value: `lq`.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The super resolution type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`lq`: For low-resolution videos with obvious noise</li>
<li>`hq`: For high-resolution videos</li>
Default value: `lq`.
                     * @param Type The super resolution type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`lq`: For low-resolution videos with obvious noise</li>
<li>`hq`: For high-resolution videos</li>
Default value: `lq`.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The ratio of the target resolution to the original resolution. Valid values: `2`.
Default value: `2`.
                     * @return Size The ratio of the target resolution to the original resolution. Valid values: `2`.
Default value: `2`.
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The ratio of the target resolution to the original resolution. Valid values: `2`.
Default value: `2`.
                     * @param Size The ratio of the target resolution to the original resolution. Valid values: `2`.
Default value: `2`.
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable super resolution. Valid values:
<li>ON</li>
<li>`OFF`</li>
If super resolution is enabled, the output resolution will double.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The super resolution type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`lq`: For low-resolution videos with obvious noise</li>
<li>`hq`: For high-resolution videos</li>
Default value: `lq`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The ratio of the target resolution to the original resolution. Valid values: `2`.
Default value: `2`.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_
