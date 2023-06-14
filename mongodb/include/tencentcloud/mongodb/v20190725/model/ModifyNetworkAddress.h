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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYNETWORKADDRESS_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYNETWORKADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Database IP to be modified
                */
                class ModifyNetworkAddress : public AbstractModel
                {
                public:
                    ModifyNetworkAddress();
                    ~ModifyNetworkAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取New IP
                     * @return NewIPAddress New IP
                     * 
                     */
                    std::string GetNewIPAddress() const;

                    /**
                     * 设置New IP
                     * @param _newIPAddress New IP
                     * 
                     */
                    void SetNewIPAddress(const std::string& _newIPAddress);

                    /**
                     * 判断参数 NewIPAddress 是否已赋值
                     * @return NewIPAddress 是否已赋值
                     * 
                     */
                    bool NewIPAddressHasBeenSet() const;

                    /**
                     * 获取Old IP
                     * @return OldIpAddress Old IP
                     * 
                     */
                    std::string GetOldIpAddress() const;

                    /**
                     * 设置Old IP
                     * @param _oldIpAddress Old IP
                     * 
                     */
                    void SetOldIpAddress(const std::string& _oldIpAddress);

                    /**
                     * 判断参数 OldIpAddress 是否已赋值
                     * @return OldIpAddress 是否已赋值
                     * 
                     */
                    bool OldIpAddressHasBeenSet() const;

                private:

                    /**
                     * New IP
                     */
                    std::string m_newIPAddress;
                    bool m_newIPAddressHasBeenSet;

                    /**
                     * Old IP
                     */
                    std::string m_oldIpAddress;
                    bool m_oldIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYNETWORKADDRESS_H_
