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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXFILERULESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXFILERULESTATUSREQUEST_H_

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
                * ModifySandboxFileRuleStatus request structure.
                */
                class ModifySandboxFileRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifySandboxFileRuleStatusRequest();
                    ~ModifySandboxFileRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule ID list<br>Input parameter limits: non-empty, 1-100 in length</p>
                     * @return IDList <p>Rule ID list<br>Input parameter limits: non-empty, 1-100 in length</p>
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置<p>Rule ID list<br>Input parameter limits: non-empty, 1-100 in length</p>
                     * @param _iDList <p>Rule ID list<br>Input parameter limits: non-empty, 1-100 in length</p>
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
                     * 获取<p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement</p>
                     * @return Status <p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement</p>
                     * @param _status <p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement</p>
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
                     * <p>Rule ID list<br>Input parameter limits: non-empty, 1-100 in length</p>
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                    /**
                     * <p>Target status<br>Enumeration values: <br>ON: Enablement<br>OFF: Disablement</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXFILERULESTATUSREQUEST_H_
