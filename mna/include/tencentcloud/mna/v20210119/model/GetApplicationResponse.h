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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetApplication response structure.
                */
                class GetApplicationResponse : public AbstractModel
                {
                public:
                    GetApplicationResponse();
                    ~GetApplicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return MpApplicationId Application ID
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 判断参数 MpApplicationId 是否已赋值
                     * @return MpApplicationId 是否已赋值
                     * 
                     */
                    bool MpApplicationIdHasBeenSet() const;

                    /**
                     * 获取base64-format key encrypted with the encryption algorithm
                     * @return MpApplicationKey base64-format key encrypted with the encryption algorithm
                     * 
                     */
                    std::string GetMpApplicationKey() const;

                    /**
                     * 判断参数 MpApplicationKey 是否已赋值
                     * @return MpApplicationKey 是否已赋值
                     * 
                     */
                    bool MpApplicationKeyHasBeenSet() const;

                    /**
                     * 获取Application name
                     * @return MpApplicationName Application name
                     * 
                     */
                    std::string GetMpApplicationName() const;

                    /**
                     * 判断参数 MpApplicationName 是否已赋值
                     * @return MpApplicationName 是否已赋值
                     * 
                     */
                    bool MpApplicationNameHasBeenSet() const;

                    /**
                     * 获取Device remark
                     * @return Remark Device remark
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: The device can only connect to public cloud gateway (Proximity access). Private gateway: The device can only connect to already launched private gateway (Proximity access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both public cloud gateway and already launched private gateway (Proximity access or fixed ip access).
                     * @return AccessScope Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: The device can only connect to public cloud gateway (Proximity access). Private gateway: The device can only connect to already launched private gateway (Proximity access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both public cloud gateway and already launched private gateway (Proximity access or fixed ip access).
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                    /**
                     * base64-format key encrypted with the encryption algorithm
                     */
                    std::string m_mpApplicationKey;
                    bool m_mpApplicationKeyHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_mpApplicationName;
                    bool m_mpApplicationNameHasBeenSet;

                    /**
                     * Device remark
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Access environment. 0: public cloud gateway; 1: private gateway; 2: public cloud gateway and private gateway. By default if left blank, public cloud gateway is selected. Specific meaning: Public cloud gateway: The device can only connect to public cloud gateway (Proximity access). Private gateway: The device can only connect to already launched private gateway (Proximity access or fixed ip access). Public cloud gateway and private gateway: The device can also connect to both public cloud gateway and already launched private gateway (Proximity access or fixed ip access).
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONRESPONSE_H_
