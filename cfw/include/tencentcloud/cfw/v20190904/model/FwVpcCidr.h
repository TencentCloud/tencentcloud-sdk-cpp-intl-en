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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWVPCCIDR_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWVPCCIDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Firewall IP range of the VPC
                */
                class FwVpcCidr : public AbstractModel
                {
                public:
                    FwVpcCidr();
                    ~FwVpcCidr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取IP range of the firewall. The mask must be at least /24.
                     * @return FwCidr IP range of the firewall. The mask must be at least /24.
                     * 
                     */
                    std::string GetFwCidr() const;

                    /**
                     * 设置IP range of the firewall. The mask must be at least /24.
                     * @param _fwCidr IP range of the firewall. The mask must be at least /24.
                     * 
                     */
                    void SetFwCidr(const std::string& _fwCidr);

                    /**
                     * 判断参数 FwCidr 是否已赋值
                     * @return FwCidr 是否已赋值
                     * 
                     */
                    bool FwCidrHasBeenSet() const;

                private:

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * IP range of the firewall. The mask must be at least /24.
                     */
                    std::string m_fwCidr;
                    bool m_fwCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWVPCCIDR_H_
