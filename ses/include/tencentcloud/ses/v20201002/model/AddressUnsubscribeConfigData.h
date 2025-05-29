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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_ADDRESSUNSUBSCRIBECONFIGDATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_ADDRESSUNSUBSCRIBECONFIGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Address-Level unsubscribe configuration.
                */
                class AddressUnsubscribeConfigData : public AbstractModel
                {
                public:
                    AddressUnsubscribeConfigData();
                    ~AddressUnsubscribeConfigData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Unsubscription link option 0: do not include unsubscription link 1: simplified chinese 2: english 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * @return UnsubscribeConfig Unsubscription link option 0: do not include unsubscription link 1: simplified chinese 2: english 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * 
                     */
                    std::string GetUnsubscribeConfig() const;

                    /**
                     * 设置Unsubscription link option 0: do not include unsubscription link 1: simplified chinese 2: english 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * @param _unsubscribeConfig Unsubscription link option 0: do not include unsubscription link 1: simplified chinese 2: english 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
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
                     * 获取0: disabled; 1: enabled.
                     * @return Status 0: disabled; 1: enabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: disabled; 1: enabled.
                     * @param _status 0: disabled; 1: enabled.
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
                     * Unsubscription link option 0: do not include unsubscription link 1: simplified chinese 2: english 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     */
                    std::string m_unsubscribeConfig;
                    bool m_unsubscribeConfigHasBeenSet;

                    /**
                     * 0: disabled; 1: enabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ADDRESSUNSUBSCRIBECONFIGDATA_H_
