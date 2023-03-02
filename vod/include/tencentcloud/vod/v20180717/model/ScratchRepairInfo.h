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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCRATCHREPAIRINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCRATCHREPAIRINFO_H_

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
                * Banding removal configuration.
                */
                class ScratchRepairInfo : public AbstractModel
                {
                public:
                    ScratchRepairInfo();
                    ~ScratchRepairInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable banding removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * @return Switch Whether to enable banding removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable banding removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     * @param Switch Whether to enable banding removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The banding removal strength. Value range: 0.0 – 1.0. This parameter is valid only if `Switch` is `ON`.
Default value: `0.0`.
                     * @return Intensity The banding removal strength. Value range: 0.0 – 1.0. This parameter is valid only if `Switch` is `ON`.
Default value: `0.0`.
                     */
                    double GetIntensity() const;

                    /**
                     * 设置The banding removal strength. Value range: 0.0 – 1.0. This parameter is valid only if `Switch` is `ON`.
Default value: `0.0`.
                     * @param Intensity The banding removal strength. Value range: 0.0 – 1.0. This parameter is valid only if `Switch` is `ON`.
Default value: `0.0`.
                     */
                    void SetIntensity(const double& _intensity);

                    /**
                     * 判断参数 Intensity 是否已赋值
                     * @return Intensity 是否已赋值
                     */
                    bool IntensityHasBeenSet() const;

                    /**
                     * 获取The banding removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`normal`</li>
Default value: `normal`.
                     * @return Type The banding removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`normal`</li>
Default value: `normal`.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The banding removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`normal`</li>
Default value: `normal`.
                     * @param Type The banding removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`normal`</li>
Default value: `normal`.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable banding removal. Valid values:
<li>`ON`</li>
<li>`OFF`</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The banding removal strength. Value range: 0.0 – 1.0. This parameter is valid only if `Switch` is `ON`.
Default value: `0.0`.
                     */
                    double m_intensity;
                    bool m_intensityHasBeenSet;

                    /**
                     * The banding removal type. This parameter is valid only if `Switch` is `ON`. Valid values:
<li>`normal`</li>
Default value: `normal`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCRATCHREPAIRINFO_H_
