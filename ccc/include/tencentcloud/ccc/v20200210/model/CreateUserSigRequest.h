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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_

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
                * CreateUserSig request structure.
                */
                class CreateUserSigRequest : public AbstractModel
                {
                public:
                    CreateUserSigRequest();
                    ~CreateUserSigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
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
                     * 获取User ID, must be consistent with the Uid value in the ClientData field.
                     * @return Uid User ID, must be consistent with the Uid value in the ClientData field.
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置User ID, must be consistent with the Uid value in the ClientData field.
                     * @param _uid User ID, must be consistent with the Uid value in the ClientData field.
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Valid period, in seconds, no more than 1 hr.
                     * @return ExpiredTime Valid period, in seconds, no more than 1 hr.
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置Valid period, in seconds, no more than 1 hr.
                     * @param _expiredTime Valid period, in seconds, no more than 1 hr.
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Signature data of the user. required field. standard JSON format.
                     * @return ClientData Signature data of the user. required field. standard JSON format.
                     * 
                     */
                    std::string GetClientData() const;

                    /**
                     * 设置Signature data of the user. required field. standard JSON format.
                     * @param _clientData Signature data of the user. required field. standard JSON format.
                     * 
                     */
                    void SetClientData(const std::string& _clientData);

                    /**
                     * 判断参数 ClientData 是否已赋值
                     * @return ClientData 是否已赋值
                     * 
                     */
                    bool ClientDataHasBeenSet() const;

                private:

                    /**
                     * App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * User ID, must be consistent with the Uid value in the ClientData field.
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Valid period, in seconds, no more than 1 hr.
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Signature data of the user. required field. standard JSON format.
                     */
                    std::string m_clientData;
                    bool m_clientDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEUSERSIGREQUEST_H_
