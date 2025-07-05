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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/AddressInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Instance ENI IP information array
                */
                class InstanceNetworkInfo : public AbstractModel
                {
                public:
                    InstanceNetworkInfo();
                    ~InstanceNetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private and public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AddressInfoSet Private and public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AddressInfo> GetAddressInfoSet() const;

                    /**
                     * 设置Private and public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _addressInfoSet Private and public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressInfoSet(const std::vector<AddressInfo>& _addressInfoSet);

                    /**
                     * 判断参数 AddressInfoSet 是否已赋值
                     * @return AddressInfoSet 是否已赋值
                     * 
                     */
                    bool AddressInfoSetHasBeenSet() const;

                    /**
                     * 获取ENI ID.
                     * @return NetworkInterfaceId ENI ID.
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置ENI ID.
                     * @param _networkInterfaceId ENI ID.
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取ENI name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NetworkInterfaceName ENI name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置ENI name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _networkInterfaceName ENI name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取Primary ENI attribute. Valid values: true: primary ENI; false: secondary ENI.
                     * @return Primary Primary ENI attribute. Valid values: true: primary ENI; false: secondary ENI.
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Primary ENI attribute. Valid values: true: primary ENI; false: secondary ENI.
                     * @param _primary Primary ENI attribute. Valid values: true: primary ENI; false: secondary ENI.
                     * 
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     * 
                     */
                    bool PrimaryHasBeenSet() const;

                private:

                    /**
                     * Private and public IP information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AddressInfo> m_addressInfoSet;
                    bool m_addressInfoSetHasBeenSet;

                    /**
                     * ENI ID.
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * ENI name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * Primary ENI attribute. Valid values: true: primary ENI; false: secondary ENI.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKINFO_H_
