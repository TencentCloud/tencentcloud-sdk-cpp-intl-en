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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEAUDITRULETEMPLATERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEAUDITRULETEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateAuditRuleTemplate response structure.
                */
                class CreateAuditRuleTemplateResponse : public AbstractModel
                {
                public:
                    CreateAuditRuleTemplateResponse();
                    ~CreateAuditRuleTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The generated rule template ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleTemplateId The generated rule template ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                private:

                    /**
                     * The generated rule template ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEAUDITRULETEMPLATERESPONSE_H_
