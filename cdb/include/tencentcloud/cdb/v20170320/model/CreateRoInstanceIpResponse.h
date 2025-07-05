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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPRESPONSE_H_

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
                * CreateRoInstanceIp response structure.
                */
                class CreateRoInstanceIpResponse : public AbstractModel
                {
                public:
                    CreateRoInstanceIpResponse();
                    ~CreateRoInstanceIpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC ID of the read-only instance.
                     * @return RoVpcId VPC ID of the read-only instance.
                     * 
                     */
                    int64_t GetRoVpcId() const;

                    /**
                     * 判断参数 RoVpcId 是否已赋值
                     * @return RoVpcId 是否已赋值
                     * 
                     */
                    bool RoVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID of the read-only instance.
                     * @return RoSubnetId Subnet ID of the read-only instance.
                     * 
                     */
                    int64_t GetRoSubnetId() const;

                    /**
                     * 判断参数 RoSubnetId 是否已赋值
                     * @return RoSubnetId 是否已赋值
                     * 
                     */
                    bool RoSubnetIdHasBeenSet() const;

                    /**
                     * 获取Private IP address of the read-only instance.
                     * @return RoVip Private IP address of the read-only instance.
                     * 
                     */
                    std::string GetRoVip() const;

                    /**
                     * 判断参数 RoVip 是否已赋值
                     * @return RoVip 是否已赋值
                     * 
                     */
                    bool RoVipHasBeenSet() const;

                    /**
                     * 获取Private port number of the read-only instance.
                     * @return RoVport Private port number of the read-only instance.
                     * 
                     */
                    int64_t GetRoVport() const;

                    /**
                     * 判断参数 RoVport 是否已赋值
                     * @return RoVport 是否已赋值
                     * 
                     */
                    bool RoVportHasBeenSet() const;

                private:

                    /**
                     * VPC ID of the read-only instance.
                     */
                    int64_t m_roVpcId;
                    bool m_roVpcIdHasBeenSet;

                    /**
                     * Subnet ID of the read-only instance.
                     */
                    int64_t m_roSubnetId;
                    bool m_roSubnetIdHasBeenSet;

                    /**
                     * Private IP address of the read-only instance.
                     */
                    std::string m_roVip;
                    bool m_roVipHasBeenSet;

                    /**
                     * Private port number of the read-only instance.
                     */
                    int64_t m_roVport;
                    bool m_roVportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPRESPONSE_H_
