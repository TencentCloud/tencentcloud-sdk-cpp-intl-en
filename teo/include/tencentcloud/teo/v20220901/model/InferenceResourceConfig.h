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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceAutoScalingConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceManualInstanceConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Resource configuration of the inference service.
                */
                class InferenceResourceConfig : public AbstractModel
                {
                public:
                    InferenceResourceConfig();
                    ~InferenceResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scaling way. Valid values: <li>Auto: Automatically adjust instance count according to request volume;</li><li>Manual: Manual setting of fixed number of resource instances.</li>
                     * @return ScalingMode Scaling way. Valid values: <li>Auto: Automatically adjust instance count according to request volume;</li><li>Manual: Manual setting of fixed number of resource instances.</li>
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置Scaling way. Valid values: <li>Auto: Automatically adjust instance count according to request volume;</li><li>Manual: Manual setting of fixed number of resource instances.</li>
                     * @param _scalingMode Scaling way. Valid values: <li>Auto: Automatically adjust instance count according to request volume;</li><li>Manual: Manual setting of fixed number of resource instances.</li>
                     * 
                     */
                    void SetScalingMode(const std::string& _scalingMode);

                    /**
                     * 判断参数 ScalingMode 是否已赋值
                     * @return ScalingMode 是否已赋值
                     * 
                     */
                    bool ScalingModeHasBeenSet() const;

                    /**
                     * 获取Hardware specifications.
                     * @return HardwareSpec Hardware specifications.
                     * 
                     */
                    std::string GetHardwareSpec() const;

                    /**
                     * 设置Hardware specifications.
                     * @param _hardwareSpec Hardware specifications.
                     * 
                     */
                    void SetHardwareSpec(const std::string& _hardwareSpec);

                    /**
                     * 判断参数 HardwareSpec 是否已赋值
                     * @return HardwareSpec 是否已赋值
                     * 
                     */
                    bool HardwareSpecHasBeenSet() const;

                    /**
                     * 获取Inference service automatic scaling configuration. Required when ScalingMode is Auto.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return AutoScalingConfig Inference service automatic scaling configuration. Required when ScalingMode is Auto.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    InferenceAutoScalingConfig GetAutoScalingConfig() const;

                    /**
                     * 设置Inference service automatic scaling configuration. Required when ScalingMode is Auto.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _autoScalingConfig Inference service automatic scaling configuration. Required when ScalingMode is Auto.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetAutoScalingConfig(const InferenceAutoScalingConfig& _autoScalingConfig);

                    /**
                     * 判断参数 AutoScalingConfig 是否已赋值
                     * @return AutoScalingConfig 是否已赋值
                     * 
                     */
                    bool AutoScalingConfigHasBeenSet() const;

                    /**
                     * 获取Manual setting of inference service instance configuration. Required when ScalingMode is Manual.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return ManualInstanceConfig Manual setting of inference service instance configuration. Required when ScalingMode is Manual.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    InferenceManualInstanceConfig GetManualInstanceConfig() const;

                    /**
                     * 设置Manual setting of inference service instance configuration. Required when ScalingMode is Manual.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _manualInstanceConfig Manual setting of inference service instance configuration. Required when ScalingMode is Manual.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetManualInstanceConfig(const InferenceManualInstanceConfig& _manualInstanceConfig);

                    /**
                     * 判断参数 ManualInstanceConfig 是否已赋值
                     * @return ManualInstanceConfig 是否已赋值
                     * 
                     */
                    bool ManualInstanceConfigHasBeenSet() const;

                    /**
                     * 获取Single-instance concurrency. Default value is 1.
                     * @return Concurrency Single-instance concurrency. Default value is 1.
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置Single-instance concurrency. Default value is 1.
                     * @param _concurrency Single-instance concurrency. Default value is 1.
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                private:

                    /**
                     * Scaling way. Valid values: <li>Auto: Automatically adjust instance count according to request volume;</li><li>Manual: Manual setting of fixed number of resource instances.</li>
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * Hardware specifications.
                     */
                    std::string m_hardwareSpec;
                    bool m_hardwareSpecHasBeenSet;

                    /**
                     * Inference service automatic scaling configuration. Required when ScalingMode is Auto.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    InferenceAutoScalingConfig m_autoScalingConfig;
                    bool m_autoScalingConfigHasBeenSet;

                    /**
                     * Manual setting of inference service instance configuration. Required when ScalingMode is Manual.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    InferenceManualInstanceConfig m_manualInstanceConfig;
                    bool m_manualInstanceConfigHasBeenSet;

                    /**
                     * Single-instance concurrency. Default value is 1.
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_
