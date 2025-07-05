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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * AssociateDDoSEipAddress request structure.
                */
                class AssociateDDoSEipAddressRequest : public AbstractModel
                {
                public:
                    AssociateDDoSEipAddressRequest();
                    ~AssociateDDoSEipAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     * @return InstanceId Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     * @param _instanceId Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
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
                     * 获取EIP of the Anti-DDoS instance ID.
                     * @return Eip EIP of the Anti-DDoS instance ID.
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置EIP of the Anti-DDoS instance ID.
                     * @param _eip EIP of the Anti-DDoS instance ID.
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取Instance ID to bind. For example, `ins-11112222`. It can be queried in the console or obtained from `InstanceId` returned by `DescribeInstances`.
                     * @return CvmInstanceID Instance ID to bind. For example, `ins-11112222`. It can be queried in the console or obtained from `InstanceId` returned by `DescribeInstances`.
                     * 
                     */
                    std::string GetCvmInstanceID() const;

                    /**
                     * 设置Instance ID to bind. For example, `ins-11112222`. It can be queried in the console or obtained from `InstanceId` returned by `DescribeInstances`.
                     * @param _cvmInstanceID Instance ID to bind. For example, `ins-11112222`. It can be queried in the console or obtained from `InstanceId` returned by `DescribeInstances`.
                     * 
                     */
                    void SetCvmInstanceID(const std::string& _cvmInstanceID);

                    /**
                     * 判断参数 CvmInstanceID 是否已赋值
                     * @return CvmInstanceID 是否已赋值
                     * 
                     */
                    bool CvmInstanceIDHasBeenSet() const;

                    /**
                     * 获取Region of the CVM instance. For example, `ap-hongkong`.
                     * @return CvmRegion Region of the CVM instance. For example, `ap-hongkong`.
                     * 
                     */
                    std::string GetCvmRegion() const;

                    /**
                     * 设置Region of the CVM instance. For example, `ap-hongkong`.
                     * @param _cvmRegion Region of the CVM instance. For example, `ap-hongkong`.
                     * 
                     */
                    void SetCvmRegion(const std::string& _cvmRegion);

                    /**
                     * 判断参数 CvmRegion 是否已赋值
                     * @return CvmRegion 是否已赋值
                     * 
                     */
                    bool CvmRegionHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance ID (only Anti-DDoS Advanced). For example, `bgpip-0000011x`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * EIP of the Anti-DDoS instance ID.
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * Instance ID to bind. For example, `ins-11112222`. It can be queried in the console or obtained from `InstanceId` returned by `DescribeInstances`.
                     */
                    std::string m_cvmInstanceID;
                    bool m_cvmInstanceIDHasBeenSet;

                    /**
                     * Region of the CVM instance. For example, `ap-hongkong`.
                     */
                    std::string m_cvmRegion;
                    bool m_cvmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ASSOCIATEDDOSEIPADDRESSREQUEST_H_
