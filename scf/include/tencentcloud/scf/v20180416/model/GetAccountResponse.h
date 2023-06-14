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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETACCOUNTRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/UsageInfo.h>
#include <tencentcloud/scf/v20180416/model/LimitsInfo.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetAccount response structure.
                */
                class GetAccountResponse : public AbstractModel
                {
                public:
                    GetAccountResponse();
                    ~GetAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Namespace usage information
                     * @return AccountUsage Namespace usage information
                     * 
                     */
                    UsageInfo GetAccountUsage() const;

                    /**
                     * 判断参数 AccountUsage 是否已赋值
                     * @return AccountUsage 是否已赋值
                     * 
                     */
                    bool AccountUsageHasBeenSet() const;

                    /**
                     * 获取Namespace limit information
                     * @return AccountLimit Namespace limit information
                     * 
                     */
                    LimitsInfo GetAccountLimit() const;

                    /**
                     * 判断参数 AccountLimit 是否已赋值
                     * @return AccountLimit 是否已赋值
                     * 
                     */
                    bool AccountLimitHasBeenSet() const;

                private:

                    /**
                     * Namespace usage information
                     */
                    UsageInfo m_accountUsage;
                    bool m_accountUsageHasBeenSet;

                    /**
                     * Namespace limit information
                     */
                    LimitsInfo m_accountLimit;
                    bool m_accountLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETACCOUNTRESPONSE_H_
