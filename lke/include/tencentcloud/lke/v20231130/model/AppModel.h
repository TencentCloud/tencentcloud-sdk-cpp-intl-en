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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Application model configuration.
                */
                class AppModel : public AbstractModel
                {
                public:
                    AppModel();
                    ~AppModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model name.
                     * @return Name Model name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Model name.
                     * @param _name Model name.
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
                     * 获取Model description.
                     * @return Desc Model description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Model description.
                     * @param _desc Model description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取The round referenced by the context.
                     * @return ContextLimit The round referenced by the context.
                     * 
                     */
                    uint64_t GetContextLimit() const;

                    /**
                     * 设置The round referenced by the context.
                     * @param _contextLimit The round referenced by the context.
                     * 
                     */
                    void SetContextLimit(const uint64_t& _contextLimit);

                    /**
                     * 判断参数 ContextLimit 是否已赋值
                     * @return ContextLimit 是否已赋值
                     * 
                     */
                    bool ContextLimitHasBeenSet() const;

                    /**
                     * 获取Model alias.
                     * @return AliasName Model alias.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Model alias.
                     * @param _aliasName Model alias.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Remaining token quota.
                     * @return TokenBalance Remaining token quota.
                     * 
                     */
                    double GetTokenBalance() const;

                    /**
                     * 设置Remaining token quota.
                     * @param _tokenBalance Remaining token quota.
                     * 
                     */
                    void SetTokenBalance(const double& _tokenBalance);

                    /**
                     * 判断参数 TokenBalance 是否已赋值
                     * @return TokenBalance 是否已赋值
                     * 
                     */
                    bool TokenBalanceHasBeenSet() const;

                    /**
                     * 获取Whether to use the round referenced by the context.
                     * @return IsUseContext Whether to use the round referenced by the context.
                     * 
                     */
                    bool GetIsUseContext() const;

                    /**
                     * 设置Whether to use the round referenced by the context.
                     * @param _isUseContext Whether to use the round referenced by the context.
                     * 
                     */
                    void SetIsUseContext(const bool& _isUseContext);

                    /**
                     * 判断参数 IsUseContext 是否已赋值
                     * @return IsUseContext 是否已赋值
                     * 
                     */
                    bool IsUseContextHasBeenSet() const;

                    /**
                     * 获取The number of context memory rounds.
                     * @return HistoryLimit The number of context memory rounds.
                     * 
                     */
                    uint64_t GetHistoryLimit() const;

                    /**
                     * 设置The number of context memory rounds.
                     * @param _historyLimit The number of context memory rounds.
                     * 
                     */
                    void SetHistoryLimit(const uint64_t& _historyLimit);

                    /**
                     * 判断参数 HistoryLimit 是否已赋值
                     * @return HistoryLimit 是否已赋值
                     * 
                     */
                    bool HistoryLimitHasBeenSet() const;

                    /**
                     * 获取Usage type.
                     * @return UsageType Usage type.
                     * 
                     */
                    std::string GetUsageType() const;

                    /**
                     * 设置Usage type.
                     * @param _usageType Usage type.
                     * 
                     */
                    void SetUsageType(const std::string& _usageType);

                    /**
                     * 判断参数 UsageType 是否已赋值
                     * @return UsageType 是否已赋值
                     * 
                     */
                    bool UsageTypeHasBeenSet() const;

                    /**
                     * 获取Model temperature.
                     * @return Temperature Model temperature.
                     * 
                     */
                    std::string GetTemperature() const;

                    /**
                     * 设置Model temperature.
                     * @param _temperature Model temperature.
                     * 
                     */
                    void SetTemperature(const std::string& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取Model TopP.
                     * @return TopP Model TopP.
                     * 
                     */
                    std::string GetTopP() const;

                    /**
                     * 设置Model TopP.
                     * @param _topP Model TopP.
                     * 
                     */
                    void SetTopP(const std::string& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取Model resource status: 1: available; 2: exhausted.
                     * @return ResourceStatus Model resource status: 1: available; 2: exhausted.
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置Model resource status: 1: available; 2: exhausted.
                     * @param _resourceStatus Model resource status: 1: available; 2: exhausted.
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * Model name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Model description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * The round referenced by the context.
                     */
                    uint64_t m_contextLimit;
                    bool m_contextLimitHasBeenSet;

                    /**
                     * Model alias.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Remaining token quota.
                     */
                    double m_tokenBalance;
                    bool m_tokenBalanceHasBeenSet;

                    /**
                     * Whether to use the round referenced by the context.
                     */
                    bool m_isUseContext;
                    bool m_isUseContextHasBeenSet;

                    /**
                     * The number of context memory rounds.
                     */
                    uint64_t m_historyLimit;
                    bool m_historyLimitHasBeenSet;

                    /**
                     * Usage type.
                     */
                    std::string m_usageType;
                    bool m_usageTypeHasBeenSet;

                    /**
                     * Model temperature.
                     */
                    std::string m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * Model TopP.
                     */
                    std::string m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * Model resource status: 1: available; 2: exhausted.
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_
