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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_UNBINDCLOUDRESOURCEREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_UNBINDCLOUDRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * UnbindCloudResource request structure.
                */
                class UnbindCloudResourceRequest : public AbstractModel
                {
                public:
                    UnbindCloudResourceRequest();
                    ~UnbindCloudResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK ID
                     * @return KeyId CMK ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK ID
                     * @param _keyId CMK ID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of a Tencent Cloud service
                     * @return ProductId Unique ID of a Tencent Cloud service
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置Unique ID of a Tencent Cloud service
                     * @param _productId Unique ID of a Tencent Cloud service
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
                     * 获取Resource/instance ID, which is stored as a string and defined by the caller based on the Tencent Cloud service's features.
                     * @return ResourceId Resource/instance ID, which is stored as a string and defined by the caller based on the Tencent Cloud service's features.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource/instance ID, which is stored as a string and defined by the caller based on the Tencent Cloud service's features.
                     * @param _resourceId Resource/instance ID, which is stored as a string and defined by the caller based on the Tencent Cloud service's features.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Unique ID of a Tencent Cloud service
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Resource/instance ID, which is stored as a string and defined by the caller based on the Tencent Cloud service's features.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_UNBINDCLOUDRESOURCEREQUEST_H_
