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
#include <tencentcloud/teo/v20220901/model/InferenceHardwareConfig.h>
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
                     * 获取<p>Scaling method. Valid values: <li>Auto: automatically adjust instance count according to request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     * @return ScalingMode <p>Scaling method. Valid values: <li>Auto: automatically adjust instance count according to request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置<p>Scaling method. Valid values: <li>Auto: automatically adjust instance count according to request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     * @param _scalingMode <p>Scaling method. Valid values: <li>Auto: automatically adjust instance count according to request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
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
                     * 获取<p>Hardware specification flag. Abandoned. For reference, use <code>HardwareSpecId</code>.</p>
                     * @return HardwareSpec <p>Hardware specification flag. Abandoned. For reference, use <code>HardwareSpecId</code>.</p>
                     * @deprecated
                     */
                    std::string GetHardwareSpec() const;

                    /**
                     * 设置<p>Hardware specification flag. Abandoned. For reference, use <code>HardwareSpecId</code>.</p>
                     * @param _hardwareSpec <p>Hardware specification flag. Abandoned. For reference, use <code>HardwareSpecId</code>.</p>
                     * @deprecated
                     */
                    void SetHardwareSpec(const std::string& _hardwareSpec);

                    /**
                     * 判断参数 HardwareSpec 是否已赋值
                     * @return HardwareSpec 是否已赋值
                     * @deprecated
                     */
                    bool HardwareSpecHasBeenSet() const;

                    /**
                     * 获取<p>Unique identification ID of the hardware specification. You can obtain the supported hardware specifications of the current site through the <code>DescribeInferenceHardwareSpecifications</code> API.</p><p>By default, the system configures the required resources for the inference service according to the hardware specification corresponding to the selected <code>HardwareSpecId</code>. If adjustments are needed, you can customize the hardware resource configuration through <code>HardwareConfig</code>.</p>
                     * @return HardwareSpecId <p>Unique identification ID of the hardware specification. You can obtain the supported hardware specifications of the current site through the <code>DescribeInferenceHardwareSpecifications</code> API.</p><p>By default, the system configures the required resources for the inference service according to the hardware specification corresponding to the selected <code>HardwareSpecId</code>. If adjustments are needed, you can customize the hardware resource configuration through <code>HardwareConfig</code>.</p>
                     * 
                     */
                    std::string GetHardwareSpecId() const;

                    /**
                     * 设置<p>Unique identification ID of the hardware specification. You can obtain the supported hardware specifications of the current site through the <code>DescribeInferenceHardwareSpecifications</code> API.</p><p>By default, the system configures the required resources for the inference service according to the hardware specification corresponding to the selected <code>HardwareSpecId</code>. If adjustments are needed, you can customize the hardware resource configuration through <code>HardwareConfig</code>.</p>
                     * @param _hardwareSpecId <p>Unique identification ID of the hardware specification. You can obtain the supported hardware specifications of the current site through the <code>DescribeInferenceHardwareSpecifications</code> API.</p><p>By default, the system configures the required resources for the inference service according to the hardware specification corresponding to the selected <code>HardwareSpecId</code>. If adjustments are needed, you can customize the hardware resource configuration through <code>HardwareConfig</code>.</p>
                     * 
                     */
                    void SetHardwareSpecId(const std::string& _hardwareSpecId);

                    /**
                     * 判断参数 HardwareSpecId 是否已赋值
                     * @return HardwareSpecId 是否已赋值
                     * 
                     */
                    bool HardwareSpecIdHasBeenSet() const;

                    /**
                     * 获取<p>Hardware configuration for the inference service.</p><p>As an input parameter, if unpadded, hardware resources are configured according to the default value of the selected <code>HardwareSpecId</code> specification; if padded, priority is given to the fill value for configuration.</p>
                     * @return HardwareConfig <p>Hardware configuration for the inference service.</p><p>As an input parameter, if unpadded, hardware resources are configured according to the default value of the selected <code>HardwareSpecId</code> specification; if padded, priority is given to the fill value for configuration.</p>
                     * 
                     */
                    InferenceHardwareConfig GetHardwareConfig() const;

                    /**
                     * 设置<p>Hardware configuration for the inference service.</p><p>As an input parameter, if unpadded, hardware resources are configured according to the default value of the selected <code>HardwareSpecId</code> specification; if padded, priority is given to the fill value for configuration.</p>
                     * @param _hardwareConfig <p>Hardware configuration for the inference service.</p><p>As an input parameter, if unpadded, hardware resources are configured according to the default value of the selected <code>HardwareSpecId</code> specification; if padded, priority is given to the fill value for configuration.</p>
                     * 
                     */
                    void SetHardwareConfig(const InferenceHardwareConfig& _hardwareConfig);

                    /**
                     * 判断参数 HardwareConfig 是否已赋值
                     * @return HardwareConfig 是否已赋值
                     * 
                     */
                    bool HardwareConfigHasBeenSet() const;

                    /**
                     * 获取<p>Automatic scaling configuration of the inference service. Required when ScalingMode is Auto.</p>
                     * @return AutoScalingConfig <p>Automatic scaling configuration of the inference service. Required when ScalingMode is Auto.</p>
                     * 
                     */
                    InferenceAutoScalingConfig GetAutoScalingConfig() const;

                    /**
                     * 设置<p>Automatic scaling configuration of the inference service. Required when ScalingMode is Auto.</p>
                     * @param _autoScalingConfig <p>Automatic scaling configuration of the inference service. Required when ScalingMode is Auto.</p>
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

                private:

                    /**
                     * <p>Scaling method. Valid values: <li>Auto: automatically adjust instance count according to request volume;</li><li>Manual: manually set a fixed number of instances.</li></p>
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * <p>Hardware specification flag. Abandoned. For reference, use <code>HardwareSpecId</code>.</p>
                     */
                    std::string m_hardwareSpec;
                    bool m_hardwareSpecHasBeenSet;

                    /**
                     * <p>Unique identification ID of the hardware specification. You can obtain the supported hardware specifications of the current site through the <code>DescribeInferenceHardwareSpecifications</code> API.</p><p>By default, the system configures the required resources for the inference service according to the hardware specification corresponding to the selected <code>HardwareSpecId</code>. If adjustments are needed, you can customize the hardware resource configuration through <code>HardwareConfig</code>.</p>
                     */
                    std::string m_hardwareSpecId;
                    bool m_hardwareSpecIdHasBeenSet;

                    /**
                     * <p>Hardware configuration for the inference service.</p><p>As an input parameter, if unpadded, hardware resources are configured according to the default value of the selected <code>HardwareSpecId</code> specification; if padded, priority is given to the fill value for configuration.</p>
                     */
                    InferenceHardwareConfig m_hardwareConfig;
                    bool m_hardwareConfigHasBeenSet;

                    /**
                     * <p>Automatic scaling configuration of the inference service. Required when ScalingMode is Auto.</p>
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCERESOURCECONFIG_H_
