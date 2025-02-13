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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateSDKLoginToken request structure.
                */
                class CreateSDKLoginTokenRequest : public AbstractModel
                {
                public:
                    CreateSDKLoginTokenRequest();
                    ~CreateSDKLoginTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Agent account.
                     * @return SeatUserId Agent account.
                     * 
                     */
                    std::string GetSeatUserId() const;

                    /**
                     * 设置Agent account.
                     * @param _seatUserId Agent account.
                     * 
                     */
                    void SetSeatUserId(const std::string& _seatUserId);

                    /**
                     * 判断参数 SeatUserId 是否已赋值
                     * @return SeatUserId 是否已赋值
                     * 
                     */
                    bool SeatUserIdHasBeenSet() const;

                    /**
                     * 获取Whether the generated token is for one-time verification?.
                     * @return OnlyOnce Whether the generated token is for one-time verification?.
                     * 
                     */
                    bool GetOnlyOnce() const;

                    /**
                     * 设置Whether the generated token is for one-time verification?.
                     * @param _onlyOnce Whether the generated token is for one-time verification?.
                     * 
                     */
                    void SetOnlyOnce(const bool& _onlyOnce);

                    /**
                     * 判断参数 OnlyOnce 是否已赋值
                     * @return OnlyOnce 是否已赋值
                     * 
                     */
                    bool OnlyOnceHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Agent account.
                     */
                    std::string m_seatUserId;
                    bool m_seatUserIdHasBeenSet;

                    /**
                     * Whether the generated token is for one-time verification?.
                     */
                    bool m_onlyOnce;
                    bool m_onlyOnceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENREQUEST_H_
