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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIG_H_

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
                * TESHD parameter configuration.
                */
                class TEHDConfig : public AbstractModel
                {
                public:
                    TEHDConfig();
                    ~TEHDConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TESHD type. Valid values:
<li>TEHD-100: TESHD-100.</li>
If this parameter is left empty, TESHD will not be enabled.
                     * @return Type TESHD type. Valid values:
<li>TEHD-100: TESHD-100.</li>
If this parameter is left empty, TESHD will not be enabled.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置TESHD type. Valid values:
<li>TEHD-100: TESHD-100.</li>
If this parameter is left empty, TESHD will not be enabled.
                     * @param _type TESHD type. Valid values:
<li>TEHD-100: TESHD-100.</li>
If this parameter is left empty, TESHD will not be enabled.
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
                     * 获取Maximum bitrate, which is valid when `Type` is `TESHD`.
If this parameter is left empty or 0 is entered, there will be no upper limit for bitrate.
                     * @return MaxVideoBitrate Maximum bitrate, which is valid when `Type` is `TESHD`.
If this parameter is left empty or 0 is entered, there will be no upper limit for bitrate.
                     * 
                     */
                    uint64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置Maximum bitrate, which is valid when `Type` is `TESHD`.
If this parameter is left empty or 0 is entered, there will be no upper limit for bitrate.
                     * @param _maxVideoBitrate Maximum bitrate, which is valid when `Type` is `TESHD`.
If this parameter is left empty or 0 is entered, there will be no upper limit for bitrate.
                     * 
                     */
                    void SetMaxVideoBitrate(const uint64_t& _maxVideoBitrate);

                    /**
                     * 判断参数 MaxVideoBitrate 是否已赋值
                     * @return MaxVideoBitrate 是否已赋值
                     * 
                     */
                    bool MaxVideoBitrateHasBeenSet() const;

                private:

                    /**
                     * TESHD type. Valid values:
<li>TEHD-100: TESHD-100.</li>
If this parameter is left empty, TESHD will not be enabled.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Maximum bitrate, which is valid when `Type` is `TESHD`.
If this parameter is left empty or 0 is entered, there will be no upper limit for bitrate.
                     */
                    uint64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIG_H_
