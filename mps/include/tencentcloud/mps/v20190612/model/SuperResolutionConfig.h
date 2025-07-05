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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUPERRESOLUTIONCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUPERRESOLUTIONCONFIG_H_

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
                * Super resolution configuration.
                */
                class SuperResolutionConfig : public AbstractModel
                {
                public:
                    SuperResolutionConfig();
                    ~SuperResolutionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * @return Switch Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     * @param _switch Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
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
                     * 获取The strength. Valid values:
<li>lq: For low-resolution videos with obvious noise</li>
<li>hq: For high-resolution videos</li>
Default value: lq.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type The strength. Valid values:
<li>lq: For low-resolution videos with obvious noise</li>
<li>hq: For high-resolution videos</li>
Default value: lq.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The strength. Valid values:
<li>lq: For low-resolution videos with obvious noise</li>
<li>hq: For high-resolution videos</li>
Default value: lq.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type The strength. Valid values:
<li>lq: For low-resolution videos with obvious noise</li>
<li>hq: For high-resolution videos</li>
Default value: lq.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The ratio of the target resolution to the original resolution. Valid values:
<li>2</li>
Default value: 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size The ratio of the target resolution to the original resolution. Valid values:
<li>2</li>
Default value: 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The ratio of the target resolution to the original resolution. Valid values:
<li>2</li>
Default value: 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _size The ratio of the target resolution to the original resolution. Valid values:
<li>2</li>
Default value: 2.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Whether to enable the feature. Valid values:
<li>ON</li>
<li>OFF</li>
Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The strength. Valid values:
<li>lq: For low-resolution videos with obvious noise</li>
<li>hq: For high-resolution videos</li>
Default value: lq.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The ratio of the target resolution to the original resolution. Valid values:
<li>2</li>
Default value: 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUPERRESOLUTIONCONFIG_H_
