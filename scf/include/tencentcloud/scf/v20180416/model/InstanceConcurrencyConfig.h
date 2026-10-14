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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INSTANCECONCURRENCYCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INSTANCECONCURRENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/MixNodeConfig.h>
#include <tencentcloud/scf/v20180416/model/SessionConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Configuration description for multiple concurrent executions
                */
                class InstanceConcurrencyConfig : public AbstractModel
                {
                public:
                    InstanceConcurrencyConfig();
                    ~InstanceConcurrencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether intelligent dynamic concurrency is enabled. If set to `FALSE`, static concurrency is used. If set to `''`, the multi-concurrency configuration is canceled.
                     * @return DynamicEnabled Whether intelligent dynamic concurrency is enabled. If set to `FALSE`, static concurrency is used. If set to `''`, the multi-concurrency configuration is canceled.
                     * 
                     */
                    std::string GetDynamicEnabled() const;

                    /**
                     * 设置Whether intelligent dynamic concurrency is enabled. If set to `FALSE`, static concurrency is used. If set to `''`, the multi-concurrency configuration is canceled.
                     * @param _dynamicEnabled Whether intelligent dynamic concurrency is enabled. If set to `FALSE`, static concurrency is used. If set to `''`, the multi-concurrency configuration is canceled.
                     * 
                     */
                    void SetDynamicEnabled(const std::string& _dynamicEnabled);

                    /**
                     * 判断参数 DynamicEnabled 是否已赋值
                     * @return DynamicEnabled 是否已赋值
                     * 
                     */
                    bool DynamicEnabledHasBeenSet() const;

                    /**
                     * 获取Maximum number of concurrent requests per instance. Value range: [1,100]
                     * @return MaxConcurrency Maximum number of concurrent requests per instance. Value range: [1,100]
                     * 
                     */
                    uint64_t GetMaxConcurrency() const;

                    /**
                     * 设置Maximum number of concurrent requests per instance. Value range: [1,100]
                     * @param _maxConcurrency Maximum number of concurrent requests per instance. Value range: [1,100]
                     * 
                     */
                    void SetMaxConcurrency(const uint64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取Safety isolation switch
                     * @return InstanceIsolationEnabled Safety isolation switch
                     * 
                     */
                    std::string GetInstanceIsolationEnabled() const;

                    /**
                     * 设置Safety isolation switch
                     * @param _instanceIsolationEnabled Safety isolation switch
                     * 
                     */
                    void SetInstanceIsolationEnabled(const std::string& _instanceIsolationEnabled);

                    /**
                     * 判断参数 InstanceIsolationEnabled 是否已赋值
                     * @return InstanceIsolationEnabled 是否已赋值
                     * 
                     */
                    bool InstanceIsolationEnabledHasBeenSet() const;

                    /**
                     * 获取Session-Based or Request-Based. Choose one.
                     * @return Type Session-Based or Request-Based. Choose one.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Session-Based or Request-Based. Choose one.
                     * @param _type Session-Based or Request-Based. Choose one.
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
                     * 获取Dynamic concurrency parameter
                     * @return MixNodeConfig Dynamic concurrency parameter
                     * 
                     */
                    std::vector<MixNodeConfig> GetMixNodeConfig() const;

                    /**
                     * 设置Dynamic concurrency parameter
                     * @param _mixNodeConfig Dynamic concurrency parameter
                     * 
                     */
                    void SetMixNodeConfig(const std::vector<MixNodeConfig>& _mixNodeConfig);

                    /**
                     * 判断参数 MixNodeConfig 是否已赋值
                     * @return MixNodeConfig 是否已赋值
                     * 
                     */
                    bool MixNodeConfigHasBeenSet() const;

                    /**
                     * 获取Session configuration parameters
                     * @return SessionConfig Session configuration parameters
                     * 
                     */
                    SessionConfig GetSessionConfig() const;

                    /**
                     * 设置Session configuration parameters
                     * @param _sessionConfig Session configuration parameters
                     * 
                     */
                    void SetSessionConfig(const SessionConfig& _sessionConfig);

                    /**
                     * 判断参数 SessionConfig 是否已赋值
                     * @return SessionConfig 是否已赋值
                     * 
                     */
                    bool SessionConfigHasBeenSet() const;

                private:

                    /**
                     * Whether intelligent dynamic concurrency is enabled. If set to `FALSE`, static concurrency is used. If set to `''`, the multi-concurrency configuration is canceled.
                     */
                    std::string m_dynamicEnabled;
                    bool m_dynamicEnabledHasBeenSet;

                    /**
                     * Maximum number of concurrent requests per instance. Value range: [1,100]
                     */
                    uint64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * Safety isolation switch
                     */
                    std::string m_instanceIsolationEnabled;
                    bool m_instanceIsolationEnabledHasBeenSet;

                    /**
                     * Session-Based or Request-Based. Choose one.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Dynamic concurrency parameter
                     */
                    std::vector<MixNodeConfig> m_mixNodeConfig;
                    bool m_mixNodeConfigHasBeenSet;

                    /**
                     * Session configuration parameters
                     */
                    SessionConfig m_sessionConfig;
                    bool m_sessionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INSTANCECONCURRENCYCONFIG_H_
