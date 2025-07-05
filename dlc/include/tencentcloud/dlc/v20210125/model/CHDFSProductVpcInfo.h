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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHDFSPRODUCTVPCINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHDFSPRODUCTVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/VpcCidrBlock.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * VPC information of CHDFS products
                */
                class CHDFSProductVpcInfo : public AbstractModel
                {
                public:
                    CHDFSProductVpcInfo();
                    ~CHDFSProductVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId vpc id

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId vpc id

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcName VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcName VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC subnet information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcCidrBlock VPC subnet information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VpcCidrBlock> GetVpcCidrBlock() const;

                    /**
                     * 设置VPC subnet information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcCidrBlock VPC subnet information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcCidrBlock(const std::vector<VpcCidrBlock>& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessGroupId Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessGroupId Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                private:

                    /**
                     * vpc id

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC subnet information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VpcCidrBlock> m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Permission group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHDFSPRODUCTVPCINFO_H_
