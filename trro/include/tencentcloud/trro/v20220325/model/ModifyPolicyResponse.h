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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyPolicy response structure.
                */
                class ModifyPolicyResponse : public AbstractModel
                {
                public:
                    ModifyPolicyResponse();
                    ~ModifyPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of on-site device ids with association failed.
                     * @return FailedInsertIds List of on-site device ids with association failed.
                     * 
                     */
                    std::vector<std::string> GetFailedInsertIds() const;

                    /**
                     * 判断参数 FailedInsertIds 是否已赋值
                     * @return FailedInsertIds 是否已赋值
                     * 
                     */
                    bool FailedInsertIdsHasBeenSet() const;

                    /**
                     * 获取List of on-site device ids with disassociation failed.
                     * @return FailedDeleteIds List of on-site device ids with disassociation failed.
                     * 
                     */
                    std::vector<std::string> GetFailedDeleteIds() const;

                    /**
                     * 判断参数 FailedDeleteIds 是否已赋值
                     * @return FailedDeleteIds 是否已赋值
                     * 
                     */
                    bool FailedDeleteIdsHasBeenSet() const;

                private:

                    /**
                     * List of on-site device ids with association failed.
                     */
                    std::vector<std::string> m_failedInsertIds;
                    bool m_failedInsertIdsHasBeenSet;

                    /**
                     * List of on-site device ids with disassociation failed.
                     */
                    std::vector<std::string> m_failedDeleteIds;
                    bool m_failedDeleteIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_MODIFYPOLICYRESPONSE_H_
