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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AddUsersForUserManager response structure.
                */
                class AddUsersForUserManagerResponse : public AbstractModel
                {
                public:
                    AddUsersForUserManagerResponse();
                    ~AddUsersForUserManagerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The user list that is successfully added
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SuccessUserList The user list that is successfully added
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSuccessUserList() const;

                    /**
                     * 判断参数 SuccessUserList 是否已赋值
                     * @return SuccessUserList 是否已赋值
                     * 
                     */
                    bool SuccessUserListHasBeenSet() const;

                    /**
                     * 获取The user list that is not successfully added
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FailedUserList The user list that is not successfully added
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFailedUserList() const;

                    /**
                     * 判断参数 FailedUserList 是否已赋值
                     * @return FailedUserList 是否已赋值
                     * 
                     */
                    bool FailedUserListHasBeenSet() const;

                private:

                    /**
                     * The user list that is successfully added
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_successUserList;
                    bool m_successUserListHasBeenSet;

                    /**
                     * The user list that is not successfully added
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_failedUserList;
                    bool m_failedUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERRESPONSE_H_
