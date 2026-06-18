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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * risk rule
                */
                class RiskRuleItem : public AbstractModel
                {
                public:
                    RiskRuleItem();
                    ~RiskRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk Check Item ID
                     * @return ItemId Risk Check Item ID
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Risk Check Item ID
                     * @param _itemId Risk Check Item ID
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Cloud vendor name
                     * @return Provider Cloud vendor name
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置Cloud vendor name
                     * @param _provider Cloud vendor name
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance Type Name
                     * @return InstanceName Instance Type Name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance Type Name
                     * @param _instanceName Instance Type Name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取risk name
                     * @return RiskTitle risk name
                     * 
                     */
                    std::string GetRiskTitle() const;

                    /**
                     * 设置risk name
                     * @param _riskTitle risk name
                     * 
                     */
                    void SetRiskTitle(const std::string& _riskTitle);

                    /**
                     * 判断参数 RiskTitle 是否已赋值
                     * @return RiskTitle 是否已赋值
                     * 
                     */
                    bool RiskTitleHasBeenSet() const;

                    /**
                     * 获取Check type
                     * @return CheckType Check type
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置Check type
                     * @param _checkType Check type
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Severity Risk level
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置Risk level
                     * @param _severity Risk level
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取Risk damage
                     * @return RiskInfluence Risk damage
                     * 
                     */
                    std::string GetRiskInfluence() const;

                    /**
                     * 设置Risk damage
                     * @param _riskInfluence Risk damage
                     * 
                     */
                    void SetRiskInfluence(const std::string& _riskInfluence);

                    /**
                     * 判断参数 RiskInfluence 是否已赋值
                     * @return RiskInfluence 是否已赋值
                     * 
                     */
                    bool RiskInfluenceHasBeenSet() const;

                private:

                    /**
                     * Risk Check Item ID
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Cloud vendor name
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance Type Name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * risk name
                     */
                    std::string m_riskTitle;
                    bool m_riskTitleHasBeenSet;

                    /**
                     * Check type
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Risk damage
                     */
                    std::string m_riskInfluence;
                    bool m_riskInfluenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKRULEITEM_H_
