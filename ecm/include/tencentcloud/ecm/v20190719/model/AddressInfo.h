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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESSINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * IP address information structure.
                */
                class AddressInfo : public AbstractModel
                {
                public:
                    AddressInfo();
                    ~AddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicIPAddressInfo Public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PublicIPAddressInfo GetPublicIPAddressInfo() const;

                    /**
                     * 设置Public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _publicIPAddressInfo Public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIPAddressInfo(const PublicIPAddressInfo& _publicIPAddressInfo);

                    /**
                     * 判断参数 PublicIPAddressInfo 是否已赋值
                     * @return PublicIPAddressInfo 是否已赋值
                     * 
                     */
                    bool PublicIPAddressInfoHasBeenSet() const;

                    /**
                     * 获取Private IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIPAddressInfo Private IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PrivateIPAddressInfo GetPrivateIPAddressInfo() const;

                    /**
                     * 设置Private IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _privateIPAddressInfo Private IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateIPAddressInfo(const PrivateIPAddressInfo& _privateIPAddressInfo);

                    /**
                     * 判断参数 PrivateIPAddressInfo 是否已赋值
                     * @return PrivateIPAddressInfo 是否已赋值
                     * 
                     */
                    bool PrivateIPAddressInfoHasBeenSet() const;

                    /**
                     * 获取Public IPv6 information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicIPv6AddressInfo Public IPv6 information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PublicIPAddressInfo GetPublicIPv6AddressInfo() const;

                    /**
                     * 设置Public IPv6 information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _publicIPv6AddressInfo Public IPv6 information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIPv6AddressInfo(const PublicIPAddressInfo& _publicIPv6AddressInfo);

                    /**
                     * 判断参数 PublicIPv6AddressInfo 是否已赋值
                     * @return PublicIPv6AddressInfo 是否已赋值
                     * 
                     */
                    bool PublicIPv6AddressInfoHasBeenSet() const;

                private:

                    /**
                     * Public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PublicIPAddressInfo m_publicIPAddressInfo;
                    bool m_publicIPAddressInfoHasBeenSet;

                    /**
                     * Private IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PrivateIPAddressInfo m_privateIPAddressInfo;
                    bool m_privateIPAddressInfoHasBeenSet;

                    /**
                     * Public IPv6 information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    PublicIPAddressInfo m_publicIPv6AddressInfo;
                    bool m_publicIPv6AddressInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESSINFO_H_
