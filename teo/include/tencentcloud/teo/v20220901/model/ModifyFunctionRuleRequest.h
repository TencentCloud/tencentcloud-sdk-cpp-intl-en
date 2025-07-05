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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunctionRule request structure.
                */
                class ModifyFunctionRuleRequest : public AbstractModel
                {
                public:
                    ModifyFunctionRuleRequest();
                    ~ModifyFunctionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Rule ID.
                     * @return RuleId Rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleId Rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * @return FunctionRuleConditions Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * @param _functionRuleConditions Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    void SetFunctionRuleConditions(const std::vector<FunctionRuleCondition>& _functionRuleConditions);

                    /**
                     * 判断参数 FunctionRuleConditions 是否已赋值
                     * @return FunctionRuleConditions 是否已赋值
                     * 
                     */
                    bool FunctionRuleConditionsHasBeenSet() const;

                    /**
                     * 获取Function ID, specifying a function executed when a trigger rule condition is met. If this parameter is not input, the original configuration is maintained.
                     * @return FunctionId Function ID, specifying a function executed when a trigger rule condition is met. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID, specifying a function executed when a trigger rule condition is met. If this parameter is not input, the original configuration is maintained.
                     * @param _functionId Function ID, specifying a function executed when a trigger rule condition is met. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * @return Remark Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * @param _remark Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule condition list. There is an OR relationship between different conditions of the same trigger rule. If this parameter is not input, the original configuration is maintained.
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * Function ID, specifying a function executed when a trigger rule condition is met. If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Rule description, which can contain up to 60 characters. If this parameter is not input, the original configuration is maintained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEREQUEST_H_
