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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GRANTDLCCATALOGACCESSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GRANTDLCCATALOGACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GrantDLCCatalogAccess request structure.
                */
                class GrantDLCCatalogAccessRequest : public AbstractModel
                {
                public:
                    GrantDLCCatalogAccessRequest();
                    ~GrantDLCCatalogAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Authorized VpcId
                     * @return VpcId Authorized VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Authorized VpcId
                     * @param _vpcId Authorized VpcId
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
                     * 获取Product (EMR|DLC|Doris|Inlong|Wedata)
                     * @return Product Product (EMR|DLC|Doris|Inlong|Wedata)
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Product (EMR|DLC|Doris|Inlong|Wedata)
                     * @param _product Product (EMR|DLC|Doris|Inlong|Wedata)
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取UIN of the account to which VPC belongs
                     * @return VpcUin UIN of the account to which VPC belongs
                     * 
                     */
                    std::string GetVpcUin() const;

                    /**
                     * 设置UIN of the account to which VPC belongs
                     * @param _vpcUin UIN of the account to which VPC belongs
                     * 
                     */
                    void SetVpcUin(const std::string& _vpcUin);

                    /**
                     * 判断参数 VpcUin 是否已赋值
                     * @return VpcUin 是否已赋值
                     * 
                     */
                    bool VpcUinHasBeenSet() const;

                    /**
                     * 获取AppId of the account to which VPC belongs
                     * @return VpcAppId AppId of the account to which VPC belongs
                     * 
                     */
                    uint64_t GetVpcAppId() const;

                    /**
                     * 设置AppId of the account to which VPC belongs
                     * @param _vpcAppId AppId of the account to which VPC belongs
                     * 
                     */
                    void SetVpcAppId(const uint64_t& _vpcAppId);

                    /**
                     * 判断参数 VpcAppId 是否已赋值
                     * @return VpcAppId 是否已赋值
                     * 
                     */
                    bool VpcAppIdHasBeenSet() const;

                private:

                    /**
                     * Authorized VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Product (EMR|DLC|Doris|Inlong|Wedata)
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * UIN of the account to which VPC belongs
                     */
                    std::string m_vpcUin;
                    bool m_vpcUinHasBeenSet;

                    /**
                     * AppId of the account to which VPC belongs
                     */
                    uint64_t m_vpcAppId;
                    bool m_vpcAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GRANTDLCCATALOGACCESSREQUEST_H_
