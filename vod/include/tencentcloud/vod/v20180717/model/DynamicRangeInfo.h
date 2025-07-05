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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_

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
                * Dynamic range information.
                */
                class DynamicRangeInfo : public AbstractModel
                {
                public:
                    DynamicRangeInfo();
                    ~DynamicRangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The dynamic range information. Valid values:
<li>`SDR`: Standard Dynamic Range</li>
<li>`HDR`: High Dynamic Range</li>
                     * @return Type The dynamic range information. Valid values:
<li>`SDR`: Standard Dynamic Range</li>
<li>`HDR`: High Dynamic Range</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The dynamic range information. Valid values:
<li>`SDR`: Standard Dynamic Range</li>
<li>`HDR`: High Dynamic Range</li>
                     * @param _type The dynamic range information. Valid values:
<li>`SDR`: Standard Dynamic Range</li>
<li>`HDR`: High Dynamic Range</li>
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
                     * 获取The HDR type. This parameter is valid only if `Type` is `HDR`. Valid values:
<li>`hdr10`</li>
<li>`hlg`</li>
                     * @return HDRType The HDR type. This parameter is valid only if `Type` is `HDR`. Valid values:
<li>`hdr10`</li>
<li>`hlg`</li>
                     * 
                     */
                    std::string GetHDRType() const;

                    /**
                     * 设置The HDR type. This parameter is valid only if `Type` is `HDR`. Valid values:
<li>`hdr10`</li>
<li>`hlg`</li>
                     * @param _hDRType The HDR type. This parameter is valid only if `Type` is `HDR`. Valid values:
<li>`hdr10`</li>
<li>`hlg`</li>
                     * 
                     */
                    void SetHDRType(const std::string& _hDRType);

                    /**
                     * 判断参数 HDRType 是否已赋值
                     * @return HDRType 是否已赋值
                     * 
                     */
                    bool HDRTypeHasBeenSet() const;

                private:

                    /**
                     * The dynamic range information. Valid values:
<li>`SDR`: Standard Dynamic Range</li>
<li>`HDR`: High Dynamic Range</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The HDR type. This parameter is valid only if `Type` is `HDR`. Valid values:
<li>`hdr10`</li>
<li>`hlg`</li>
                     */
                    std::string m_hDRType;
                    bool m_hDRTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_
