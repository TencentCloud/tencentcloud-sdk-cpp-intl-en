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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETESANDBOXACLRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETESANDBOXACLRULEREQUEST_H_

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
                * DeleteSandboxACLRule request structure.
                */
                class DeleteSandboxACLRuleRequest : public AbstractModel
                {
                public:
                    DeleteSandboxACLRuleRequest();
                    ~DeleteSandboxACLRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of rule IDs.
Input parameter limit: non-empty, length 1-100, takes effect after deduplication.
                     * @return IDList List of rule IDs.
Input parameter limit: non-empty, length 1-100, takes effect after deduplication.
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置List of rule IDs.
Input parameter limit: non-empty, length 1-100, takes effect after deduplication.
                     * @param _iDList List of rule IDs.
Input parameter limit: non-empty, length 1-100, takes effect after deduplication.
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                private:

                    /**
                     * List of rule IDs.
Input parameter limit: non-empty, length 1-100, takes effect after deduplication.
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETESANDBOXACLRULEREQUEST_H_
