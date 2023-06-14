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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DeleteProduct request structure.
                */
                class DeleteProductRequest : public AbstractModel
                {
                public:
                    DeleteProductRequest();
                    ~DeleteProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the product to delete
                     * @return ProductId ID of the product to delete
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置ID of the product to delete
                     * @param _productId ID of the product to delete
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Skey, which is required to delete a LoRa product
                     * @return Skey Skey, which is required to delete a LoRa product
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置Skey, which is required to delete a LoRa product
                     * @param _skey Skey, which is required to delete a LoRa product
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                private:

                    /**
                     * ID of the product to delete
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Skey, which is required to delete a LoRa product
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DELETEPRODUCTREQUEST_H_
