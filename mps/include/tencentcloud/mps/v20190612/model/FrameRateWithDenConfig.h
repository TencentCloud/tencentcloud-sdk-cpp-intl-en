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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FRAMERATEWITHDENCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FRAMERATEWITHDENCONFIG_H_

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
                * New frame interpolation configuration, which supports fractional frame rates.
                */
                class FrameRateWithDenConfig : public AbstractModel
                {
                public:
                    FrameRateWithDenConfig();
                    ~FrameRateWithDenConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Capability configuration switch. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     * @return Switch Capability configuration switch. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Capability configuration switch. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     * @param _switch Capability configuration switch. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
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
                     * 获取Frame rate numerator. Value range: non-negative number, which should be less than 120 when divided by the denominator, and in the unit of Hz. The default value is 0. Note: For transcoding, this parameter will overwrite the Fps in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FpsNum Frame rate numerator. Value range: non-negative number, which should be less than 120 when divided by the denominator, and in the unit of Hz. The default value is 0. Note: For transcoding, this parameter will overwrite the Fps in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFpsNum() const;

                    /**
                     * 设置Frame rate numerator. Value range: non-negative number, which should be less than 120 when divided by the denominator, and in the unit of Hz. The default value is 0. Note: For transcoding, this parameter will overwrite the Fps in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fpsNum Frame rate numerator. Value range: non-negative number, which should be less than 120 when divided by the denominator, and in the unit of Hz. The default value is 0. Note: For transcoding, this parameter will overwrite the Fps in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFpsNum(const int64_t& _fpsNum);

                    /**
                     * 判断参数 FpsNum 是否已赋值
                     * @return FpsNum 是否已赋值
                     * 
                     */
                    bool FpsNumHasBeenSet() const;

                    /**
                     * 获取Frame rate denominator.Value range: numbers equal to or greater than 1. The default value is 1. Note: For transcoding, this parameter will overwrite the FpsDenominator in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FpsDen Frame rate denominator.Value range: numbers equal to or greater than 1. The default value is 1. Note: For transcoding, this parameter will overwrite the FpsDenominator in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFpsDen() const;

                    /**
                     * 设置Frame rate denominator.Value range: numbers equal to or greater than 1. The default value is 1. Note: For transcoding, this parameter will overwrite the FpsDenominator in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fpsDen Frame rate denominator.Value range: numbers equal to or greater than 1. The default value is 1. Note: For transcoding, this parameter will overwrite the FpsDenominator in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFpsDen(const int64_t& _fpsDen);

                    /**
                     * 判断参数 FpsDen 是否已赋值
                     * @return FpsDen 是否已赋值
                     * 
                     */
                    bool FpsDenHasBeenSet() const;

                private:

                    /**
                     * Capability configuration switch. Valid values:
<li>ON: enabled.</li>
<li>OFF: disabled.</li>
Default value: ON.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Frame rate numerator. Value range: non-negative number, which should be less than 120 when divided by the denominator, and in the unit of Hz. The default value is 0. Note: For transcoding, this parameter will overwrite the Fps in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fpsNum;
                    bool m_fpsNumHasBeenSet;

                    /**
                     * Frame rate denominator.Value range: numbers equal to or greater than 1. The default value is 1. Note: For transcoding, this parameter will overwrite the FpsDenominator in the VideoTemplate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fpsDen;
                    bool m_fpsDenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FRAMERATEWITHDENCONFIG_H_
