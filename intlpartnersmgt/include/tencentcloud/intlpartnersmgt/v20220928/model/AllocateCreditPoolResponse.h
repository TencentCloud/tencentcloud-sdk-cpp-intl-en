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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECREDITPOOLRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECREDITPOOLRESPONSE_H_

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
                * AllocateCreditPool response structure.
                */
                class AllocateCreditPoolResponse : public AbstractModel
                {
                public:
                    AllocateCreditPoolResponse();
                    ~AllocateCreditPoolResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current total remaining quota.
                     * @return RemainingCredit Current total remaining quota.
                     * 
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     * 
                     */
                    bool RemainingCreditHasBeenSet() const;

                    /**
                     * 获取Total allocated quota.
                     * @return TotalCredit Total allocated quota.
                     * 
                     */
                    double GetTotalCredit() const;

                    /**
                     * 判断参数 TotalCredit 是否已赋值
                     * @return TotalCredit 是否已赋值
                     * 
                     */
                    bool TotalCreditHasBeenSet() const;

                private:

                    /**
                     * Current total remaining quota.
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                    /**
                     * Total allocated quota.
                     */
                    double m_totalCredit;
                    bool m_totalCreditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECREDITPOOLRESPONSE_H_
