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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETECHDFSBINDINGPRODUCTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETECHDFSBINDINGPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/VpcInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteCHDFSBindingProduct request structure.
                */
                class DeleteCHDFSBindingProductRequest : public AbstractModel
                {
                public:
                    DeleteCHDFSBindingProductRequest();
                    ~DeleteCHDFSBindingProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Names of metadata acceleration buckets to be unbound
                     * @return MountPoint Names of metadata acceleration buckets to be unbound
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置Names of metadata acceleration buckets to be unbound
                     * @param _mountPoint Names of metadata acceleration buckets to be unbound
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取Types of buckets which are divided into cos and lakefs
                     * @return BucketType Types of buckets which are divided into cos and lakefs
                     * 
                     */
                    std::string GetBucketType() const;

                    /**
                     * 设置Types of buckets which are divided into cos and lakefs
                     * @param _bucketType Types of buckets which are divided into cos and lakefs
                     * 
                     */
                    void SetBucketType(const std::string& _bucketType);

                    /**
                     * 判断参数 BucketType 是否已赋值
                     * @return BucketType 是否已赋值
                     * 
                     */
                    bool BucketTypeHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Engine name. When ProductName selects DLC products, this parameter must be specified. When ProductName selects other products, it can be unspecified.
                     * @return EngineName Engine name. When ProductName selects DLC products, this parameter must be specified. When ProductName selects other products, it can be unspecified.
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Engine name. When ProductName selects DLC products, this parameter must be specified. When ProductName selects other products, it can be unspecified.
                     * @param _engineName Engine name. When ProductName selects DLC products, this parameter must be specified. When ProductName selects other products, it can be unspecified.
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取VPC information. When ProductName is other, this parameter must be specified.
                     * @return VpcInfo VPC information. When ProductName is other, this parameter must be specified.
                     * 
                     */
                    std::vector<VpcInfo> GetVpcInfo() const;

                    /**
                     * 设置VPC information. When ProductName is other, this parameter must be specified.
                     * @param _vpcInfo VPC information. When ProductName is other, this parameter must be specified.
                     * 
                     */
                    void SetVpcInfo(const std::vector<VpcInfo>& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                private:

                    /**
                     * Names of metadata acceleration buckets to be unbound
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * Types of buckets which are divided into cos and lakefs
                     */
                    std::string m_bucketType;
                    bool m_bucketTypeHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Engine name. When ProductName selects DLC products, this parameter must be specified. When ProductName selects other products, it can be unspecified.
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * VPC information. When ProductName is other, this parameter must be specified.
                     */
                    std::vector<VpcInfo> m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETECHDFSBINDINGPRODUCTREQUEST_H_
