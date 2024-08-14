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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECREDITPOOLREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECREDITPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * AllocateCreditPool request structure.
                */
                class AllocateCreditPoolRequest : public AbstractModel
                {
                public:
                    AllocateCreditPoolRequest();
                    ~AllocateCreditPoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Second-level reseller UIN.
                     * @return SubAgentUin Second-level reseller UIN.
                     * 
                     */
                    int64_t GetSubAgentUin() const;

                    /**
                     * 设置Second-level reseller UIN.
                     * @param _subAgentUin Second-level reseller UIN.
                     * 
                     */
                    void SetSubAgentUin(const int64_t& _subAgentUin);

                    /**
                     * 判断参数 SubAgentUin 是否已赋值
                     * @return SubAgentUin 是否已赋值
                     * 
                     */
                    bool SubAgentUinHasBeenSet() const;

                    /**
                     * 获取Allocated amount.
                     * @return Credit Allocated amount.
                     * 
                     */
                    double GetCredit() const;

                    /**
                     * 设置Allocated amount.
                     * @param _credit Allocated amount.
                     * 
                     */
                    void SetCredit(const double& _credit);

                    /**
                     * 判断参数 Credit 是否已赋值
                     * @return Credit 是否已赋值
                     * 
                     */
                    bool CreditHasBeenSet() const;

                private:

                    /**
                     * Second-level reseller UIN.
                     */
                    int64_t m_subAgentUin;
                    bool m_subAgentUinHasBeenSet;

                    /**
                     * Allocated amount.
                     */
                    double m_credit;
                    bool m_creditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECREDITPOOLREQUEST_H_
