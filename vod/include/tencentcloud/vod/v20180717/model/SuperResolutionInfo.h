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
                * Image super-resolution control parameters
                */
                class SuperResolutionInfo : public AbstractModel
                {
                public:
                    SuperResolutionInfo();
                    ~SuperResolutionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Super resolution control switch. Optional values:
<li>ON: Turn on super resolution;</li>
<li>OFF: Disable super resolution.</li>
                     * @return Switch Super resolution control switch. Optional values:
<li>ON: Turn on super resolution;</li>
<li>OFF: Disable super resolution.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Super resolution control switch. Optional values:
<li>ON: Turn on super resolution;</li>
<li>OFF: Disable super resolution.</li>
                     * @param _switch Super resolution control switch. Optional values:
<li>ON: Turn on super resolution;</li>
<li>OFF: Disable super resolution.</li>
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
                     * 获取Super resolution type. Valid only when the super resolution control switch is ON. Available values:
<li>lq: super resolution for low-resolution videos with considerable noise;</li>
<li>hq: For high resolution video super-resolution.</li>
Default value: lq.
                     * @return Type Super resolution type. Valid only when the super resolution control switch is ON. Available values:
<li>lq: super resolution for low-resolution videos with considerable noise;</li>
<li>hq: For high resolution video super-resolution.</li>
Default value: lq.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Super resolution type. Valid only when the super resolution control switch is ON. Available values:
<li>lq: super resolution for low-resolution videos with considerable noise;</li>
<li>hq: For high resolution video super-resolution.</li>
Default value: lq.
                     * @param _type Super resolution type. Valid only when the super resolution control switch is ON. Available values:
<li>lq: super resolution for low-resolution videos with considerable noise;</li>
<li>hq: For high resolution video super-resolution.</li>
Default value: lq.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Super resolution multiple. Available value: 2.
Default value: 2.
                     * @return Size Super resolution multiple. Available value: 2.
Default value: 2.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Super resolution multiple. Available value: 2.
Default value: 2.
                     * @param _size Super resolution multiple. Available value: 2.
Default value: 2.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * Super resolution control switch. Optional values:
<li>ON: Turn on super resolution;</li>
<li>OFF: Disable super resolution.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Super resolution type. Valid only when the super resolution control switch is ON. Available values:
<li>lq: super resolution for low-resolution videos with considerable noise;</li>
<li>hq: For high resolution video super-resolution.</li>
Default value: lq.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Super resolution multiple. Available value: 2.
Default value: 2.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_
