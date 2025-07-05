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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATEADDRESSUNSUBSCRIBECONFIGREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATEADDRESSUNSUBSCRIBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * UpdateAddressUnsubscribeConfig request structure.
                */
                class UpdateAddressUnsubscribeConfigRequest : public AbstractModel
                {
                public:
                    UpdateAddressUnsubscribeConfigRequest();
                    ~UpdateAddressUnsubscribeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sender address.
                     * @return Address Sender address.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Sender address.
                     * @param _address Sender address.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Unsubscribe link option. 0: Do not add unsubscribe link; 1: English 2: Simplified Chinese; 3: Traditional Chinese; 4: Spanish; 5: French; 6: German; 7: Japanese; 8: Korean; 9: Arabic; 10: Thai
                     * @return UnsubscribeConfig Unsubscribe link option. 0: Do not add unsubscribe link; 1: English 2: Simplified Chinese; 3: Traditional Chinese; 4: Spanish; 5: French; 6: German; 7: Japanese; 8: Korean; 9: Arabic; 10: Thai
                     * 
                     */
                    std::string GetUnsubscribeConfig() const;

                    /**
                     * 设置Unsubscribe link option. 0: Do not add unsubscribe link; 1: English 2: Simplified Chinese; 3: Traditional Chinese; 4: Spanish; 5: French; 6: German; 7: Japanese; 8: Korean; 9: Arabic; 10: Thai
                     * @param _unsubscribeConfig Unsubscribe link option. 0: Do not add unsubscribe link; 1: English 2: Simplified Chinese; 3: Traditional Chinese; 4: Spanish; 5: French; 6: German; 7: Japanese; 8: Korean; 9: Arabic; 10: Thai
                     * 
                     */
                    void SetUnsubscribeConfig(const std::string& _unsubscribeConfig);

                    /**
                     * 判断参数 UnsubscribeConfig 是否已赋值
                     * @return UnsubscribeConfig 是否已赋值
                     * 
                     */
                    bool UnsubscribeConfigHasBeenSet() const;

                    /**
                     * 获取0: disable; 1: enable.
                     * @return Status 0: disable; 1: enable.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: disable; 1: enable.
                     * @param _status 0: disable; 1: enable.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Sender address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Unsubscribe link option. 0: Do not add unsubscribe link; 1: English 2: Simplified Chinese; 3: Traditional Chinese; 4: Spanish; 5: French; 6: German; 7: Japanese; 8: Korean; 9: Arabic; 10: Thai
                     */
                    std::string m_unsubscribeConfig;
                    bool m_unsubscribeConfigHasBeenSet;

                    /**
                     * 0: disable; 1: enable.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATEADDRESSUNSUBSCRIBECONFIGREQUEST_H_
