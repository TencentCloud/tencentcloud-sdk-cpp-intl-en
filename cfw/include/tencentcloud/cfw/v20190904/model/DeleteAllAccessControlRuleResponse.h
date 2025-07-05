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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEALLACCESSCONTROLRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEALLACCESSCONTROLRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteAllAccessControlRule response structure.
                */
                class DeleteAllAccessControlRuleResponse : public AbstractModel
                {
                public:
                    DeleteAllAccessControlRuleResponse();
                    ~DeleteAllAccessControlRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Status of the task. `0`: Modified successfully; Others: Modification failed
                     * @return Status Status of the task. `0`: Modified successfully; Others: Modification failed
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of access control rules deleted.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Info Number of access control rules deleted.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * Status of the task. `0`: Modified successfully; Others: Modification failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of access control rules deleted.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEALLACCESSCONTROLRULERESPONSE_H_
