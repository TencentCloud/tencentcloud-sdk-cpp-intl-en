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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSERSTATUSRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeUserStatus response structure.
                */
                class DescribeUserStatusResponse : public AbstractModel
                {
                public:
                    DescribeUserStatusResponse();
                    ~DescribeUserStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取AppId of the customer.
                     * @return AppId AppId of the customer.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether the whiteboard service of the trial or official edition is activated before.

0: The whiteboard service is not activated.
1: The whiteboard service is activated.
                     * @return IsTiwUser Specifies whether the whiteboard service of the trial or official edition is activated before.

0: The whiteboard service is not activated.
1: The whiteboard service is activated.
                     * 
                     */
                    int64_t GetIsTiwUser() const;

                    /**
                     * 判断参数 IsTiwUser 是否已赋值
                     * @return IsTiwUser 是否已赋值
                     * 
                     */
                    bool IsTiwUserHasBeenSet() const;

                    /**
                     * 获取Specifies whether the interactive class feature of the trial or official edition is activated before.
                     * @return IsSaaSUser Specifies whether the interactive class feature of the trial or official edition is activated before.
                     * 
                     */
                    int64_t GetIsSaaSUser() const;

                    /**
                     * 判断参数 IsSaaSUser 是否已赋值
                     * @return IsSaaSUser 是否已赋值
                     * 
                     */
                    bool IsSaaSUserHasBeenSet() const;

                    /**
                     * 获取Specifies whether the user uses the offline recording feature of the whiteboard service.
                     * @return IsTiwOfflineRecordUser Specifies whether the user uses the offline recording feature of the whiteboard service.
                     * 
                     */
                    int64_t GetIsTiwOfflineRecordUser() const;

                    /**
                     * 判断参数 IsTiwOfflineRecordUser 是否已赋值
                     * @return IsTiwOfflineRecordUser 是否已赋值
                     * 
                     */
                    bool IsTiwOfflineRecordUserHasBeenSet() const;

                    /**
                     * 获取Specifies whether the user is authenticated.
                     * @return IsAuthenticated Specifies whether the user is authenticated.
                     * 
                     */
                    int64_t GetIsAuthenticated() const;

                    /**
                     * 判断参数 IsAuthenticated 是否已赋值
                     * @return IsAuthenticated 是否已赋值
                     * 
                     */
                    bool IsAuthenticatedHasBeenSet() const;

                private:

                    /**
                     * AppId of the customer.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Specifies whether the whiteboard service of the trial or official edition is activated before.

0: The whiteboard service is not activated.
1: The whiteboard service is activated.
                     */
                    int64_t m_isTiwUser;
                    bool m_isTiwUserHasBeenSet;

                    /**
                     * Specifies whether the interactive class feature of the trial or official edition is activated before.
                     */
                    int64_t m_isSaaSUser;
                    bool m_isSaaSUserHasBeenSet;

                    /**
                     * Specifies whether the user uses the offline recording feature of the whiteboard service.
                     */
                    int64_t m_isTiwOfflineRecordUser;
                    bool m_isTiwOfflineRecordUserHasBeenSet;

                    /**
                     * Specifies whether the user is authenticated.
                     */
                    int64_t m_isAuthenticated;
                    bool m_isAuthenticatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSERSTATUSRESPONSE_H_
