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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_ACCESSINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_ACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Access information.
                */
                class AccessInfo : public AbstractModel
                {
                public:
                    AccessInfo();
                    ~AccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Address.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_ACCESSINFO_H_
