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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Address
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Vip Address
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Address
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _vip Address
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Port
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return VPort Port
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置Port
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _vPort Port
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return UniqVpcId VPC ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _uniqVpcId VPC ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return UniqSubnet VPC subnet ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetUniqSubnet() const;

                    /**
                     * 设置VPC subnet ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _uniqSubnet VPC subnet ID
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetUniqSubnet(const std::string& _uniqSubnet);

                    /**
                     * 判断参数 UniqSubnet 是否已赋值
                     * @return UniqSubnet 是否已赋值
                     * 
                     */
                    bool UniqSubnetHasBeenSet() const;

                    /**
                     * 获取Description
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Desc Description
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _desc Description
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Address
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * VPC ID
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_uniqSubnet;
                    bool m_uniqSubnetHasBeenSet;

                    /**
                     * Description
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADDRESS_H_
