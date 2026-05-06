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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyCronScalerConfigParam.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Scheduled scaling policy configuration
                */
                class CloudNativeAPIGatewayStrategyCronScalerConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyCronScalerConfig();
                    ~CloudNativeAPIGatewayStrategyCronScalerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable scheduled scaling
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled Enable scheduled scaling
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Enable scheduled scaling
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled Enable scheduled scaling
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * @deprecated
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling configuration parameter list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Params Scheduled scaling configuration parameter list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam> GetParams() const;

                    /**
                     * 设置Scheduled scaling configuration parameter list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _params Scheduled scaling configuration parameter list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParams(const std::vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * @deprecated
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * @deprecated
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Auto scaling policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Auto scaling policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Auto scaling policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Auto scaling policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * @deprecated
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * Enable scheduled scaling
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Scheduled scaling configuration parameter list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Auto scaling policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIG_H_
