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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEPOOLINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Virtual node pool information.
                */
                class SuperNodePoolInfo : public AbstractModel
                {
                public:
                    SuperNodePoolInfo();
                    ~SuperNodePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subnet list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SubnetIds Subnet list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Subnet list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _subnetIds Subnet list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SecurityGroupIds Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _securityGroupIds Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Subnet list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEPOOLINFO_H_
