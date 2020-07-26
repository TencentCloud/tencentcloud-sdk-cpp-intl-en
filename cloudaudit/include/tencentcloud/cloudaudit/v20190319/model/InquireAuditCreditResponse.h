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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_INQUIREAUDITCREDITRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_INQUIREAUDITCREDITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * Return parameter structure of InquireAuditCredit
                */
                class InquireAuditCreditResponse : public AbstractModel
                {
                public:
                    InquireAuditCreditResponse();
                    ~InquireAuditCreditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Number of tracking sets that can be created
                     * @return AuditAmount Number of tracking sets that can be created
                     */
                    int64_t GetAuditAmount() const;

                    /**
                     * 判断参数 AuditAmount 是否已赋值
                     * @return AuditAmount 是否已赋值
                     */
                    bool AuditAmountHasBeenSet() const;

                private:

                    /**
                     * Number of tracking sets that can be created
                     */
                    int64_t m_auditAmount;
                    bool m_auditAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_INQUIREAUDITCREDITRESPONSE_H_
