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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_FRAMECAPTURETEMPLATE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_FRAMECAPTURETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Frame capture template.
                */
                class FrameCaptureTemplate : public AbstractModel
                {
                public:
                    FrameCaptureTemplate();
                    ~FrameCaptureTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of frame capture template, limited to uppercase and lowercase letters and numbers, with a length between 1 and 20 characters.
                     * @return Name Name of frame capture template, limited to uppercase and lowercase letters and numbers, with a length between 1 and 20 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of frame capture template, limited to uppercase and lowercase letters and numbers, with a length between 1 and 20 characters.
                     * @param _name Name of frame capture template, limited to uppercase and lowercase letters and numbers, with a length between 1 and 20 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Width of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * @return Width Width of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Width of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * @param _width Width of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Height of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * @return Height Height of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Height of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * @param _height Height of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Interval of frame capture, an integer between 1 and 3600.
                     * @return CaptureInterval Interval of frame capture, an integer between 1 and 3600.
                     * 
                     */
                    uint64_t GetCaptureInterval() const;

                    /**
                     * 设置Interval of frame capture, an integer between 1 and 3600.
                     * @param _captureInterval Interval of frame capture, an integer between 1 and 3600.
                     * 
                     */
                    void SetCaptureInterval(const uint64_t& _captureInterval);

                    /**
                     * 判断参数 CaptureInterval 是否已赋值
                     * @return CaptureInterval 是否已赋值
                     * 
                     */
                    bool CaptureIntervalHasBeenSet() const;

                    /**
                     * 获取Interval units of frame capture, only supports SECONDS.
                     * @return CaptureIntervalUnits Interval units of frame capture, only supports SECONDS.
                     * 
                     */
                    std::string GetCaptureIntervalUnits() const;

                    /**
                     * 设置Interval units of frame capture, only supports SECONDS.
                     * @param _captureIntervalUnits Interval units of frame capture, only supports SECONDS.
                     * 
                     */
                    void SetCaptureIntervalUnits(const std::string& _captureIntervalUnits);

                    /**
                     * 判断参数 CaptureIntervalUnits 是否已赋值
                     * @return CaptureIntervalUnits 是否已赋值
                     * 
                     */
                    bool CaptureIntervalUnitsHasBeenSet() const;

                    /**
                     * 获取Scaling behavior of frame capture, supports DEFAULT or STRETCH_TO_OUTPUT, with DEFAULT being the default option.
                     * @return ScalingBehavior Scaling behavior of frame capture, supports DEFAULT or STRETCH_TO_OUTPUT, with DEFAULT being the default option.
                     * 
                     */
                    std::string GetScalingBehavior() const;

                    /**
                     * 设置Scaling behavior of frame capture, supports DEFAULT or STRETCH_TO_OUTPUT, with DEFAULT being the default option.
                     * @param _scalingBehavior Scaling behavior of frame capture, supports DEFAULT or STRETCH_TO_OUTPUT, with DEFAULT being the default option.
                     * 
                     */
                    void SetScalingBehavior(const std::string& _scalingBehavior);

                    /**
                     * 判断参数 ScalingBehavior 是否已赋值
                     * @return ScalingBehavior 是否已赋值
                     * 
                     */
                    bool ScalingBehaviorHasBeenSet() const;

                    /**
                     * 获取Sharpness, an integer between 0 and 100.
                     * @return Sharpness Sharpness, an integer between 0 and 100.
                     * 
                     */
                    uint64_t GetSharpness() const;

                    /**
                     * 设置Sharpness, an integer between 0 and 100.
                     * @param _sharpness Sharpness, an integer between 0 and 100.
                     * 
                     */
                    void SetSharpness(const uint64_t& _sharpness);

                    /**
                     * 判断参数 Sharpness 是否已赋值
                     * @return Sharpness 是否已赋值
                     * 
                     */
                    bool SharpnessHasBeenSet() const;

                private:

                    /**
                     * Name of frame capture template, limited to uppercase and lowercase letters and numbers, with a length between 1 and 20 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Width of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of frame capture, optional, input range is from 0 to 3000, must be a multiple of 2.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Interval of frame capture, an integer between 1 and 3600.
                     */
                    uint64_t m_captureInterval;
                    bool m_captureIntervalHasBeenSet;

                    /**
                     * Interval units of frame capture, only supports SECONDS.
                     */
                    std::string m_captureIntervalUnits;
                    bool m_captureIntervalUnitsHasBeenSet;

                    /**
                     * Scaling behavior of frame capture, supports DEFAULT or STRETCH_TO_OUTPUT, with DEFAULT being the default option.
                     */
                    std::string m_scalingBehavior;
                    bool m_scalingBehaviorHasBeenSet;

                    /**
                     * Sharpness, an integer between 0 and 100.
                     */
                    uint64_t m_sharpness;
                    bool m_sharpnessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_FRAMECAPTURETEMPLATE_H_
