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
                * Visual dynamic range information.
                */
                class DynamicRangeInfo : public AbstractModel
                {
                public:
                    DynamicRangeInfo();
                    ~DynamicRangeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dynamic range info of the frame. Valid values:
<li>SDR: Standard Dynamic Range</li>
<li>HDR: High Dynamic Range.</li>
                     * @return Type Dynamic range info of the frame. Valid values:
<li>SDR: Standard Dynamic Range</li>
<li>HDR: High Dynamic Range.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Dynamic range info of the frame. Valid values:
<li>SDR: Standard Dynamic Range</li>
<li>HDR: High Dynamic Range.</li>
                     * @param _type Dynamic range info of the frame. Valid values:
<li>SDR: Standard Dynamic Range</li>
<li>HDR: High Dynamic Range.</li>
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
                     * 获取High dynamic range type. Valid when Type is HDR. Currently supported valid values:
<li>hdr10: refers to the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>
                     * @return HDRType High dynamic range type. Valid when Type is HDR. Currently supported valid values:
<li>hdr10: refers to the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>
                     * 
                     */
                    std::string GetHDRType() const;

                    /**
                     * 设置High dynamic range type. Valid when Type is HDR. Currently supported valid values:
<li>hdr10: refers to the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>
                     * @param _hDRType High dynamic range type. Valid when Type is HDR. Currently supported valid values:
<li>hdr10: refers to the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>
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
                     * Dynamic range info of the frame. Valid values:
<li>SDR: Standard Dynamic Range</li>
<li>HDR: High Dynamic Range.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * High dynamic range type. Valid when Type is HDR. Currently supported valid values:
<li>hdr10: refers to the hdr10 standard;</li>
<li>hlg: refers to the hlg standard.</li>
                     */
                    std::string m_hDRType;
                    bool m_hDRTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DYNAMICRANGEINFO_H_
