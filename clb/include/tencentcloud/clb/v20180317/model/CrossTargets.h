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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CROSSTARGETS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CROSSTARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Information of CVMs and ENIs that use cross-region binding 2.0
                */
                class CrossTargets : public AbstractModel
                {
                public:
                    CrossTargets();
                    ~CrossTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID of the CLB instance
                     * @return LocalVpcId VPC ID of the CLB instance
                     */
                    std::string GetLocalVpcId() const;

                    /**
                     * 设置VPC ID of the CLB instance
                     * @param LocalVpcId VPC ID of the CLB instance
                     */
                    void SetLocalVpcId(const std::string& _localVpcId);

                    /**
                     * 判断参数 LocalVpcId 是否已赋值
                     * @return LocalVpcId 是否已赋值
                     */
                    bool LocalVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC ID of the CVM or ENI instance
                     * @return VpcId VPC ID of the CVM or ENI instance
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID of the CVM or ENI instance
                     * @param VpcId VPC ID of the CVM or ENI instance
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取IP address of the CVM or ENI instance
                     * @return IP IP address of the CVM or ENI instance
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP address of the CVM or ENI instance
                     * @param IP IP address of the CVM or ENI instance
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取VPC name of the CVM or ENI instance
                     * @return VpcName VPC name of the CVM or ENI instance
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name of the CVM or ENI instance
                     * @param VpcName VPC name of the CVM or ENI instance
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取ENI ID of the CVM instance
                     * @return EniId ENI ID of the CVM instance
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置ENI ID of the CVM instance
                     * @param EniId ENI ID of the CVM instance
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     */
                    bool EniIdHasBeenSet() const;

                    /**
                     * 获取ID of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceId ID of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     * @param InstanceId ID of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Name of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceName Name of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     * @param InstanceName Name of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Region of the CVM or ENI instance
                     * @return Region Region of the CVM or ENI instance
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the CVM or ENI instance
                     * @param Region Region of the CVM or ENI instance
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * VPC ID of the CLB instance
                     */
                    std::string m_localVpcId;
                    bool m_localVpcIdHasBeenSet;

                    /**
                     * VPC ID of the CVM or ENI instance
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * IP address of the CVM or ENI instance
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * VPC name of the CVM or ENI instance
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * ENI ID of the CVM instance
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                    /**
                     * ID of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the CVM instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Region of the CVM or ENI instance
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CROSSTARGETS_H_
