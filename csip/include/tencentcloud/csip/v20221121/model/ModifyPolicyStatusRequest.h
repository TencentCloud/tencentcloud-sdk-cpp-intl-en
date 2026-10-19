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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPOLICYSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPOLICYSTATUSREQUEST_H_

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
                * ModifyPolicyStatus request structure.
                */
                class ModifyPolicyStatusRequest : public AbstractModel
                {
                public:
                    ModifyPolicyStatusRequest();
                    ~ModifyPolicyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy id set
                     * @return PolicyIdSet Policy id set
                     * 
                     */
                    std::vector<int64_t> GetPolicyIdSet() const;

                    /**
                     * 设置Policy id set
                     * @param _policyIdSet Policy id set
                     * 
                     */
                    void SetPolicyIdSet(const std::vector<int64_t>& _policyIdSet);

                    /**
                     * 判断参数 PolicyIdSet 是否已赋值
                     * @return PolicyIdSet 是否已赋值
                     * 
                     */
                    bool PolicyIdSetHasBeenSet() const;

                    /**
                     * 获取Status value
                     * @return Status Status value
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status value
                     * @param _status Status value
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Policy id set
                     */
                    std::vector<int64_t> m_policyIdSet;
                    bool m_policyIdSetHasBeenSet;

                    /**
                     * Status value
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPOLICYSTATUSREQUEST_H_
