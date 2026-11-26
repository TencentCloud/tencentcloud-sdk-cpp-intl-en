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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIGFORMODIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIGFORMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceAutoScalingConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceManualInstanceConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceHardwareConfigForModify.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Parameter modification for inference service resource configuration.
                */
                class InferenceResourceConfigForModify : public AbstractModel
                {
                public:
                    InferenceResourceConfigForModify();
                    ~InferenceResourceConfigForModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Scaling method. Valid values: <li>Auto: automatically adjust the number of instances based on request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     * @return ScalingMode <p>Scaling method. Valid values: <li>Auto: automatically adjust the number of instances based on request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置<p>Scaling method. Valid values: <li>Auto: automatically adjust the number of instances based on request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     * @param _scalingMode <p>Scaling method. Valid values: <li>Auto: automatically adjust the number of instances based on request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
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
                     * 获取<p>Automatic scaling configuration for the inference service. Required when ScalingMode is Auto.</p>
                     * @return AutoScalingConfig <p>Automatic scaling configuration for the inference service. Required when ScalingMode is Auto.</p>
                     * 
                     */
                    InferenceAutoScalingConfig GetAutoScalingConfig() const;

                    /**
                     * 设置<p>Automatic scaling configuration for the inference service. Required when ScalingMode is Auto.</p>
                     * @param _autoScalingConfig <p>Automatic scaling configuration for the inference service. Required when ScalingMode is Auto.</p>
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
                     * 获取<p>Inference service manual setting instance configuration. Required when ScalingMode is Manual.</p>
                     * @return ManualInstanceConfig <p>Inference service manual setting instance configuration. Required when ScalingMode is Manual.</p>
                     * 
                     */
                    InferenceManualInstanceConfig GetManualInstanceConfig() const;

                    /**
                     * 设置<p>Inference service manual setting instance configuration. Required when ScalingMode is Manual.</p>
                     * @param _manualInstanceConfig <p>Inference service manual setting instance configuration. Required when ScalingMode is Manual.</p>
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
                     * 获取<p>Concurrency of a single instance. Default value: 1.</p>
                     * @return Concurrency <p>Concurrency of a single instance. Default value: 1.</p>
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置<p>Concurrency of a single instance. Default value: 1.</p>
                     * @param _concurrency <p>Concurrency of a single instance. Default value: 1.</p>
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>Hardware resource configuration of the inference service.</p>
                     * @return HardwareConfig <p>Hardware resource configuration of the inference service.</p>
                     * 
                     */
                    InferenceHardwareConfigForModify GetHardwareConfig() const;

                    /**
                     * 设置<p>Hardware resource configuration of the inference service.</p>
                     * @param _hardwareConfig <p>Hardware resource configuration of the inference service.</p>
                     * 
                     */
                    void SetHardwareConfig(const InferenceHardwareConfigForModify& _hardwareConfig);

                    /**
                     * 判断参数 HardwareConfig 是否已赋值
                     * @return HardwareConfig 是否已赋值
                     * 
                     */
                    bool HardwareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Scaling method. Valid values: <li>Auto: automatically adjust the number of instances based on request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * <p>Automatic scaling configuration for the inference service. Required when ScalingMode is Auto.</p>
                     */
                    InferenceAutoScalingConfig m_autoScalingConfig;
                    bool m_autoScalingConfigHasBeenSet;

                    /**
                     * <p>Inference service manual setting instance configuration. Required when ScalingMode is Manual.</p>
                     */
                    InferenceManualInstanceConfig m_manualInstanceConfig;
                    bool m_manualInstanceConfigHasBeenSet;

                    /**
                     * <p>Concurrency of a single instance. Default value: 1.</p>
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * <p>Hardware resource configuration of the inference service.</p>
                     */
                    InferenceHardwareConfigForModify m_hardwareConfig;
                    bool m_hardwareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIGFORMODIFY_H_
