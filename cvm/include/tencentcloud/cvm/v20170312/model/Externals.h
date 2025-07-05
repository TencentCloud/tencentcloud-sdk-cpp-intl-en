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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_EXTERNALS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_EXTERNALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/StorageBlock.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Additional data
                */
                class Externals : public AbstractModel
                {
                public:
                    Externals();
                    ~Externals() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Release Address
                     * @return ReleaseAddress Release Address
                     * 
                     */
                    bool GetReleaseAddress() const;

                    /**
                     * 设置Release Address
                     * @param _releaseAddress Release Address
                     * 
                     */
                    void SetReleaseAddress(const bool& _releaseAddress);

                    /**
                     * 判断参数 ReleaseAddress 是否已赋值
                     * @return ReleaseAddress 是否已赋值
                     * 
                     */
                    bool ReleaseAddressHasBeenSet() const;

                    /**
                     * 获取Unsupported network type. valid values: <br><li>BASIC: BASIC network</li><li>VPC1.0: private network VPC1.0</li>.
                     * @return UnsupportNetworks Unsupported network type. valid values: <br><li>BASIC: BASIC network</li><li>VPC1.0: private network VPC1.0</li>.
                     * 
                     */
                    std::vector<std::string> GetUnsupportNetworks() const;

                    /**
                     * 设置Unsupported network type. valid values: <br><li>BASIC: BASIC network</li><li>VPC1.0: private network VPC1.0</li>.
                     * @param _unsupportNetworks Unsupported network type. valid values: <br><li>BASIC: BASIC network</li><li>VPC1.0: private network VPC1.0</li>.
                     * 
                     */
                    void SetUnsupportNetworks(const std::vector<std::string>& _unsupportNetworks);

                    /**
                     * 判断参数 UnsupportNetworks 是否已赋值
                     * @return UnsupportNetworks 是否已赋值
                     * 
                     */
                    bool UnsupportNetworksHasBeenSet() const;

                    /**
                     * 获取Specifies the HDD local storage attributes.
                     * @return StorageBlockAttr Specifies the HDD local storage attributes.
                     * 
                     */
                    StorageBlock GetStorageBlockAttr() const;

                    /**
                     * 设置Specifies the HDD local storage attributes.
                     * @param _storageBlockAttr Specifies the HDD local storage attributes.
                     * 
                     */
                    void SetStorageBlockAttr(const StorageBlock& _storageBlockAttr);

                    /**
                     * 判断参数 StorageBlockAttr 是否已赋值
                     * @return StorageBlockAttr 是否已赋值
                     * 
                     */
                    bool StorageBlockAttrHasBeenSet() const;

                private:

                    /**
                     * Release Address
                     */
                    bool m_releaseAddress;
                    bool m_releaseAddressHasBeenSet;

                    /**
                     * Unsupported network type. valid values: <br><li>BASIC: BASIC network</li><li>VPC1.0: private network VPC1.0</li>.
                     */
                    std::vector<std::string> m_unsupportNetworks;
                    bool m_unsupportNetworksHasBeenSet;

                    /**
                     * Specifies the HDD local storage attributes.
                     */
                    StorageBlock m_storageBlockAttr;
                    bool m_storageBlockAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_EXTERNALS_H_
