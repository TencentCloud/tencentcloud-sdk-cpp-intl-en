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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWDNATRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWDNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CfwNatDnatRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * SetNatFwDnatRule request structure.
                */
                class SetNatFwDnatRuleRequest : public AbstractModel
                {
                public:
                    SetNatFwDnatRuleRequest();
                    ~SetNatFwDnatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: Create new; 1: Use existing
                     * @return Mode 0: Create new; 1: Use existing
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置0: Create new; 1: Use existing
                     * @param _mode 0: Create new; 1: Use existing
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Operation type. Valid values: add, del, and modify.
                     * @return OperationType Operation type. Valid values: add, del, and modify.
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type. Valid values: add, del, and modify.
                     * @param _operationType Operation type. Valid values: add, del, and modify.
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Firewall instance ID. This field is required.
                     * @return CfwInstance Firewall instance ID. This field is required.
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置Firewall instance ID. This field is required.
                     * @param _cfwInstance Firewall instance ID. This field is required.
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取List of added/deleted DNAT rules
                     * @return AddOrDelDnatRules List of added/deleted DNAT rules
                     * 
                     */
                    std::vector<CfwNatDnatRule> GetAddOrDelDnatRules() const;

                    /**
                     * 设置List of added/deleted DNAT rules
                     * @param _addOrDelDnatRules List of added/deleted DNAT rules
                     * 
                     */
                    void SetAddOrDelDnatRules(const std::vector<CfwNatDnatRule>& _addOrDelDnatRules);

                    /**
                     * 判断参数 AddOrDelDnatRules 是否已赋值
                     * @return AddOrDelDnatRules 是否已赋值
                     * 
                     */
                    bool AddOrDelDnatRulesHasBeenSet() const;

                    /**
                     * 获取Original DNAT rule before change
                     * @return OriginDnat Original DNAT rule before change
                     * 
                     */
                    CfwNatDnatRule GetOriginDnat() const;

                    /**
                     * 设置Original DNAT rule before change
                     * @param _originDnat Original DNAT rule before change
                     * 
                     */
                    void SetOriginDnat(const CfwNatDnatRule& _originDnat);

                    /**
                     * 判断参数 OriginDnat 是否已赋值
                     * @return OriginDnat 是否已赋值
                     * 
                     */
                    bool OriginDnatHasBeenSet() const;

                    /**
                     * 获取New DNAT rule after change
                     * @return NewDnat New DNAT rule after change
                     * 
                     */
                    CfwNatDnatRule GetNewDnat() const;

                    /**
                     * 设置New DNAT rule after change
                     * @param _newDnat New DNAT rule after change
                     * 
                     */
                    void SetNewDnat(const CfwNatDnatRule& _newDnat);

                    /**
                     * 判断参数 NewDnat 是否已赋值
                     * @return NewDnat 是否已赋值
                     * 
                     */
                    bool NewDnatHasBeenSet() const;

                private:

                    /**
                     * 0: Create new; 1: Use existing
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Operation type. Valid values: add, del, and modify.
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Firewall instance ID. This field is required.
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * List of added/deleted DNAT rules
                     */
                    std::vector<CfwNatDnatRule> m_addOrDelDnatRules;
                    bool m_addOrDelDnatRulesHasBeenSet;

                    /**
                     * Original DNAT rule before change
                     */
                    CfwNatDnatRule m_originDnat;
                    bool m_originDnatHasBeenSet;

                    /**
                     * New DNAT rule after change
                     */
                    CfwNatDnatRule m_newDnat;
                    bool m_newDnatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWDNATRULEREQUEST_H_
