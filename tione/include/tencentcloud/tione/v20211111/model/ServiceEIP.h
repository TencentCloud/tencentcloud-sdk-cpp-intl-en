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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEEIP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEEIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Service shared Elastic Network Interface (ENI) settings.
                */
                class ServiceEIP : public AbstractModel
                {
                public:
                    ServiceEIP();
                    ~ServiceEIP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable access from the TI-ONE private network to external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableEIP Whether to enable access from the TI-ONE private network to external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableEIP() const;

                    /**
                     * 设置Whether to enable access from the TI-ONE private network to external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableEIP Whether to enable access from the TI-ONE private network to external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableEIP(const bool& _enableEIP);

                    /**
                     * 判断参数 EnableEIP 是否已赋值
                     * @return EnableEIP 是否已赋值
                     * 
                     */
                    bool EnableEIPHasBeenSet() const;

                    /**
                     * 获取User VPC ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId User VPC ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置User VPC ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId User VPC ID.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User subnet ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId User subnet ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置User subnet ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId User subnet ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Whether to enable access from the TI-ONE private network to external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableEIP;
                    bool m_enableEIPHasBeenSet;

                    /**
                     * User VPC ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * User subnet ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEEIP_H_
