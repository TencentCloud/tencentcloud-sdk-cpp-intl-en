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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_RESERVEDNETRESOURCE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_RESERVEDNETRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of the reserved network resource
                */
                class ReservedNetResource : public AbstractModel
                {
                public:
                    ReservedNetResource();
                    ~ReservedNetResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC
                     * @return VpcId VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC
                     * @param _vpcId VPC
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet
                     * @return SubnetId Subnet
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet
                     * @param _subnetId Subnet
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Reserved private network IP under `VpcId` and `SubnetId`
                     * @return Vip Reserved private network IP under `VpcId` and `SubnetId`
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Reserved private network IP under `VpcId` and `SubnetId`
                     * @param _vip Reserved private network IP under `VpcId` and `SubnetId`
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
                     * 获取Port under `Vip`
                     * @return Vports Port under `Vip`
                     * 
                     */
                    std::vector<int64_t> GetVports() const;

                    /**
                     * 设置Port under `Vip`
                     * @param _vports Port under `Vip`
                     * 
                     */
                    void SetVports(const std::vector<int64_t>& _vports);

                    /**
                     * 判断参数 Vports 是否已赋值
                     * @return Vports 是否已赋值
                     * 
                     */
                    bool VportsHasBeenSet() const;

                    /**
                     * 获取Valid hours of VIP
                     * @return RecycleTime Valid hours of VIP
                     * 
                     */
                    std::string GetRecycleTime() const;

                    /**
                     * 设置Valid hours of VIP
                     * @param _recycleTime Valid hours of VIP
                     * 
                     */
                    void SetRecycleTime(const std::string& _recycleTime);

                    /**
                     * 判断参数 RecycleTime 是否已赋值
                     * @return RecycleTime 是否已赋值
                     * 
                     */
                    bool RecycleTimeHasBeenSet() const;

                private:

                    /**
                     * VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Reserved private network IP under `VpcId` and `SubnetId`
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Port under `Vip`
                     */
                    std::vector<int64_t> m_vports;
                    bool m_vportsHasBeenSet;

                    /**
                     * Valid hours of VIP
                     */
                    std::string m_recycleTime;
                    bool m_recycleTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_RESERVEDNETRESOURCE_H_
