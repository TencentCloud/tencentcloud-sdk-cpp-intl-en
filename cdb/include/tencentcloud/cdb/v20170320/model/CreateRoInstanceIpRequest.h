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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRoInstanceIp request structure.
                */
                class CreateRoInstanceIpRequest : public AbstractModel
                {
                public:
                    CreateRoInstanceIpRequest();
                    ~CreateRoInstanceIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Read-only instance ID in the format of "cdbro-3i70uj0k". Its value is the same as the read-only instance ID in the TencentDB Console.
                     * @return InstanceId Read-only instance ID in the format of "cdbro-3i70uj0k". Its value is the same as the read-only instance ID in the TencentDB Console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Read-only instance ID in the format of "cdbro-3i70uj0k". Its value is the same as the read-only instance ID in the TencentDB Console.
                     * @param _instanceId Read-only instance ID in the format of "cdbro-3i70uj0k". Its value is the same as the read-only instance ID in the TencentDB Console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Subnet descriptor, such as "subnet-1typ0s7d".
                     * @return UniqSubnetId Subnet descriptor, such as "subnet-1typ0s7d".
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet descriptor, such as "subnet-1typ0s7d".
                     * @param _uniqSubnetId Subnet descriptor, such as "subnet-1typ0s7d".
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC descriptor, such as "vpc-a23yt67j". If this field is passed in, `UniqSubnetId` will be required.
                     * @return UniqVpcId VPC descriptor, such as "vpc-a23yt67j". If this field is passed in, `UniqSubnetId` will be required.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC descriptor, such as "vpc-a23yt67j". If this field is passed in, `UniqSubnetId` will be required.
                     * @param _uniqVpcId VPC descriptor, such as "vpc-a23yt67j". If this field is passed in, `UniqSubnetId` will be required.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                private:

                    /**
                     * Read-only instance ID in the format of "cdbro-3i70uj0k". Its value is the same as the read-only instance ID in the TencentDB Console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Subnet descriptor, such as "subnet-1typ0s7d".
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * VPC descriptor, such as "vpc-a23yt67j". If this field is passed in, `UniqSubnetId` will be required.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPREQUEST_H_
