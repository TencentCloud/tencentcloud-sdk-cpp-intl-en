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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ResponseCode.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddCustomRule response structure.
                */
                class AddCustomRuleResponse : public AbstractModel
                {
                public:
                    AddCustomRuleResponse();
                    ~AddCustomRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation status code: if all resource operations succeed, the success status code is returned; if any resource operation fails, the content of Message needs to be parsed to see which resource failed.
                     * @return Success Operation status code: if all resource operations succeed, the success status code is returned; if any resource operation fails, the content of Message needs to be parsed to see which resource failed.
                     * 
                     */
                    ResponseCode GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取Successfully added rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Successfully added rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Operation status code: if all resource operations succeed, the success status code is returned; if any resource operation fails, the content of Message needs to be parsed to see which resource failed.
                     */
                    ResponseCode m_success;
                    bool m_successHasBeenSet;

                    /**
                     * Successfully added rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMRULERESPONSE_H_
