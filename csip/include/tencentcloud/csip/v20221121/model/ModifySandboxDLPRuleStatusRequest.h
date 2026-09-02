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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySandboxDLPRuleStatus request structure.
                */
                class ModifySandboxDLPRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifySandboxDLPRuleStatusRequest();
                    ~ModifySandboxDLPRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of rule IDs.
Input parameter limits: non-empty, 1-100 in length
                     * @return IDList List of rule IDs.
Input parameter limits: non-empty, 1-100 in length
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置List of rule IDs.
Input parameter limits: non-empty, 1-100 in length
                     * @param _iDList List of rule IDs.
Input parameter limits: non-empty, 1-100 in length
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                    /**
                     * 获取Target Status
Enumeration values:
ON: enable
OFF: disabled.
                     * @return Status Target Status
Enumeration values:
ON: enable
OFF: disabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Target Status
Enumeration values:
ON: enable
OFF: disabled.
                     * @param _status Target Status
Enumeration values:
ON: enable
OFF: disabled.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * List of rule IDs.
Input parameter limits: non-empty, 1-100 in length
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                    /**
                     * Target Status
Enumeration values:
ON: enable
OFF: disabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXDLPRULESTATUSREQUEST_H_
