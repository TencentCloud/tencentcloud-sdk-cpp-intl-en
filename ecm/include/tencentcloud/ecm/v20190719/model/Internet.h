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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INTERNET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INTERNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h>
#include <tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h>
#include <tencentcloud/ecm/v20190719/model/InstanceNetworkInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Network information of the instance.
                */
                class Internet : public AbstractModel
                {
                public:
                    Internet();
                    ~Internet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIPAddressSet Private network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrivateIPAddressInfo> GetPrivateIPAddressSet() const;

                    /**
                     * 设置Private network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _privateIPAddressSet Private network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateIPAddressSet(const std::vector<PrivateIPAddressInfo>& _privateIPAddressSet);

                    /**
                     * 判断参数 PrivateIPAddressSet 是否已赋值
                     * @return PrivateIPAddressSet 是否已赋值
                     * 
                     */
                    bool PrivateIPAddressSetHasBeenSet() const;

                    /**
                     * 获取Public network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicIPAddressSet Public network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PublicIPAddressInfo> GetPublicIPAddressSet() const;

                    /**
                     * 设置Public network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _publicIPAddressSet Public network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIPAddressSet(const std::vector<PublicIPAddressInfo>& _publicIPAddressSet);

                    /**
                     * 判断参数 PublicIPAddressSet 是否已赋值
                     * @return PublicIPAddressSet 是否已赋值
                     * 
                     */
                    bool PublicIPAddressSetHasBeenSet() const;

                    /**
                     * 获取Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceNetworkInfoSet Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceNetworkInfo> GetInstanceNetworkInfoSet() const;

                    /**
                     * 设置Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _instanceNetworkInfoSet Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceNetworkInfoSet(const std::vector<InstanceNetworkInfo>& _instanceNetworkInfoSet);

                    /**
                     * 判断参数 InstanceNetworkInfoSet 是否已赋值
                     * @return InstanceNetworkInfoSet 是否已赋值
                     * 
                     */
                    bool InstanceNetworkInfoSetHasBeenSet() const;

                private:

                    /**
                     * Private network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrivateIPAddressInfo> m_privateIPAddressSet;
                    bool m_privateIPAddressSetHasBeenSet;

                    /**
                     * Public network information list of the instance, with the primary ENI followed by secondary ENIs in the order of binding.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PublicIPAddressInfo> m_publicIPAddressSet;
                    bool m_publicIPAddressSetHasBeenSet;

                    /**
                     * Network information of the instance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceNetworkInfo> m_instanceNetworkInfoSet;
                    bool m_instanceNetworkInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INTERNET_H_
