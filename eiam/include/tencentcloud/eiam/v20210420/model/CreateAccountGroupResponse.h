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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEACCOUNTGROUPRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEACCOUNTGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * CreateAccountGroup response structure.
                */
                class CreateAccountGroupResponse : public AbstractModel
                {
                public:
                    CreateAccountGroupResponse();
                    ~CreateAccountGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Account group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccountGroupId Account group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                private:

                    /**
                     * Account group ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEACCOUNTGROUPRESPONSE_H_
