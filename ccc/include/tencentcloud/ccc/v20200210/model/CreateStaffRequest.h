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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATESTAFFREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATESTAFFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateStaff request structure.
                */
                class CreateStaffRequest : public AbstractModel
                {
                public:
                    CreateStaffRequest();
                    ~CreateStaffRequest() = default;
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
                     * 获取Customer information, no more than 10.
                     * @return Staffs Customer information, no more than 10.
                     * 
                     */
                    std::vector<SeatUserInfo> GetStaffs() const;

                    /**
                     * 设置Customer information, no more than 10.
                     * @param _staffs Customer information, no more than 10.
                     * 
                     */
                    void SetStaffs(const std::vector<SeatUserInfo>& _staffs);

                    /**
                     * 判断参数 Staffs 是否已赋值
                     * @return Staffs 是否已赋值
                     * 
                     */
                    bool StaffsHasBeenSet() const;

                    /**
                     * 获取Whether to send a password mail or not (the default is true).
                     * @return SendPassword Whether to send a password mail or not (the default is true).
                     * 
                     */
                    bool GetSendPassword() const;

                    /**
                     * 设置Whether to send a password mail or not (the default is true).
                     * @param _sendPassword Whether to send a password mail or not (the default is true).
                     * 
                     */
                    void SetSendPassword(const bool& _sendPassword);

                    /**
                     * 判断参数 SendPassword 是否已赋值
                     * @return SendPassword 是否已赋值
                     * 
                     */
                    bool SendPasswordHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Customer information, no more than 10.
                     */
                    std::vector<SeatUserInfo> m_staffs;
                    bool m_staffsHasBeenSet;

                    /**
                     * Whether to send a password mail or not (the default is true).
                     */
                    bool m_sendPassword;
                    bool m_sendPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATESTAFFREQUEST_H_
