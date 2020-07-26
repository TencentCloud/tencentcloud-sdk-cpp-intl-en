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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_EXTERNALS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_EXTERNALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/StorageBlock.h>


namespace TencentCloud
{
    namespace Batch
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
                     * 获取Release address
Note: This field may return null, indicating that no valid value is found.
                     * @return ReleaseAddress Release address
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool GetReleaseAddress() const;

                    /**
                     * 设置Release address
Note: This field may return null, indicating that no valid value is found.
                     * @param ReleaseAddress Release address
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetReleaseAddress(const bool& _releaseAddress);

                    /**
                     * 判断参数 ReleaseAddress 是否已赋值
                     * @return ReleaseAddress 是否已赋值
                     */
                    bool ReleaseAddressHasBeenSet() const;

                    /**
                     * 获取Not supported network. Value: <br><li>BASIC: classic network<br><li>VPC1.0: VPC1.0
Note: This field may return null, indicating that no valid value was found.
                     * @return UnsupportNetworks Not supported network. Value: <br><li>BASIC: classic network<br><li>VPC1.0: VPC1.0
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetUnsupportNetworks() const;

                    /**
                     * 设置Not supported network. Value: <br><li>BASIC: classic network<br><li>VPC1.0: VPC1.0
Note: This field may return null, indicating that no valid value was found.
                     * @param UnsupportNetworks Not supported network. Value: <br><li>BASIC: classic network<br><li>VPC1.0: VPC1.0
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetUnsupportNetworks(const std::vector<std::string>& _unsupportNetworks);

                    /**
                     * 判断参数 UnsupportNetworks 是否已赋值
                     * @return UnsupportNetworks 是否已赋值
                     */
                    bool UnsupportNetworksHasBeenSet() const;

                    /**
                     * 获取Attributes of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * @return StorageBlockAttr Attributes of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     */
                    StorageBlock GetStorageBlockAttr() const;

                    /**
                     * 设置Attributes of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * @param StorageBlockAttr Attributes of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetStorageBlockAttr(const StorageBlock& _storageBlockAttr);

                    /**
                     * 判断参数 StorageBlockAttr 是否已赋值
                     * @return StorageBlockAttr 是否已赋值
                     */
                    bool StorageBlockAttrHasBeenSet() const;

                private:

                    /**
                     * Release address
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_releaseAddress;
                    bool m_releaseAddressHasBeenSet;

                    /**
                     * Not supported network. Value: <br><li>BASIC: classic network<br><li>VPC1.0: VPC1.0
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_unsupportNetworks;
                    bool m_unsupportNetworksHasBeenSet;

                    /**
                     * Attributes of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     */
                    StorageBlock m_storageBlockAttr;
                    bool m_storageBlockAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_EXTERNALS_H_
