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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SubnetInput.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSubnets request structure.
                */
                class CreateSubnetsRequest : public AbstractModel
                {
                public:
                    CreateSubnetsRequest();
                    ~CreateSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `ID` of the `VPC` instance, such as `vpc-6v2ht8q5`.
                     * @return VpcId The `ID` of the `VPC` instance, such as `vpc-6v2ht8q5`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the `VPC` instance, such as `vpc-6v2ht8q5`.
                     * @param _vpcId The `ID` of the `VPC` instance, such as `vpc-6v2ht8q5`.
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
                     * 获取The subnet object list.
                     * @return Subnets The subnet object list.
                     * 
                     */
                    std::vector<SubnetInput> GetSubnets() const;

                    /**
                     * 设置The subnet object list.
                     * @param _subnets The subnet object list.
                     * 
                     */
                    void SetSubnets(const std::vector<SubnetInput>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     * 
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取Bound tags. Note that the collection of tags here is shared by all subnet objects in the list. You cannot specify tags for each subnet. Example: [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags. Note that the collection of tags here is shared by all subnet objects in the list. You cannot specify tags for each subnet. Example: [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags. Note that the collection of tags here is shared by all subnet objects in the list. You cannot specify tags for each subnet. Example: [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Bound tags. Note that the collection of tags here is shared by all subnet objects in the list. You cannot specify tags for each subnet. Example: [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ID of the CDC instance to which the subnets will be created
                     * @return CdcId ID of the CDC instance to which the subnets will be created
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置ID of the CDC instance to which the subnets will be created
                     * @param _cdcId ID of the CDC instance to which the subnets will be created
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the `VPC` instance, such as `vpc-6v2ht8q5`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The subnet object list.
                     */
                    std::vector<SubnetInput> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * Bound tags. Note that the collection of tags here is shared by all subnet objects in the list. You cannot specify tags for each subnet. Example: [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ID of the CDC instance to which the subnets will be created
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETSREQUEST_H_
