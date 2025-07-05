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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTADDRESSUNSUBSCRIBECONFIGRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTADDRESSUNSUBSCRIBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/AddressUnsubscribeConfigData.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListAddressUnsubscribeConfig response structure.
                */
                class ListAddressUnsubscribeConfigResponse : public AbstractModel
                {
                public:
                    ListAddressUnsubscribeConfigResponse();
                    ~ListAddressUnsubscribeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Address-Level unsubscribe configuration.
                     * @return AddressUnsubscribeConfigList Address-Level unsubscribe configuration.
                     * 
                     */
                    std::vector<AddressUnsubscribeConfigData> GetAddressUnsubscribeConfigList() const;

                    /**
                     * 判断参数 AddressUnsubscribeConfigList 是否已赋值
                     * @return AddressUnsubscribeConfigList 是否已赋值
                     * 
                     */
                    bool AddressUnsubscribeConfigListHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return Total Total number.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Address-Level unsubscribe configuration.
                     */
                    std::vector<AddressUnsubscribeConfigData> m_addressUnsubscribeConfigList;
                    bool m_addressUnsubscribeConfigListHasBeenSet;

                    /**
                     * Total number.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTADDRESSUNSUBSCRIBECONFIGRESPONSE_H_
