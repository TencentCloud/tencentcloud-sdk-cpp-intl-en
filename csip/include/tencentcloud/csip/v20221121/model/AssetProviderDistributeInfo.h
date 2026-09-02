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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETPROVIDERDISTRIBUTEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETPROVIDERDISTRIBUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Number of assets of the cloud service provider
                */
                class AssetProviderDistributeInfo : public AbstractModel
                {
                public:
                    AssetProviderDistributeInfo();
                    ~AssetProviderDistributeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total number of Tencent Cloud assets</p>
                     * @return TencentAssetCount <p>Total number of Tencent Cloud assets</p>
                     * 
                     */
                    uint64_t GetTencentAssetCount() const;

                    /**
                     * 设置<p>Total number of Tencent Cloud assets</p>
                     * @param _tencentAssetCount <p>Total number of Tencent Cloud assets</p>
                     * 
                     */
                    void SetTencentAssetCount(const uint64_t& _tencentAssetCount);

                    /**
                     * 判断参数 TencentAssetCount 是否已赋值
                     * @return TencentAssetCount 是否已赋值
                     * 
                     */
                    bool TencentAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of Alibaba Cloud assets</p>
                     * @return AliAssetCount <p>Total number of Alibaba Cloud assets</p>
                     * 
                     */
                    uint64_t GetAliAssetCount() const;

                    /**
                     * 设置<p>Total number of Alibaba Cloud assets</p>
                     * @param _aliAssetCount <p>Total number of Alibaba Cloud assets</p>
                     * 
                     */
                    void SetAliAssetCount(const uint64_t& _aliAssetCount);

                    /**
                     * 判断参数 AliAssetCount 是否已赋值
                     * @return AliAssetCount 是否已赋值
                     * 
                     */
                    bool AliAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of Amazon Web Services assets</p>
                     * @return AwsAssetCount <p>Total number of Amazon Web Services assets</p>
                     * 
                     */
                    uint64_t GetAwsAssetCount() const;

                    /**
                     * 设置<p>Total number of Amazon Web Services assets</p>
                     * @param _awsAssetCount <p>Total number of Amazon Web Services assets</p>
                     * 
                     */
                    void SetAwsAssetCount(const uint64_t& _awsAssetCount);

                    /**
                     * 判断参数 AwsAssetCount 是否已赋值
                     * @return AwsAssetCount 是否已赋值
                     * 
                     */
                    bool AwsAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of assets in other cloud environments</p>
                     * @return OtherAssetCount <p>Total number of assets in other cloud environments</p>
                     * 
                     */
                    uint64_t GetOtherAssetCount() const;

                    /**
                     * 设置<p>Total number of assets in other cloud environments</p>
                     * @param _otherAssetCount <p>Total number of assets in other cloud environments</p>
                     * 
                     */
                    void SetOtherAssetCount(const uint64_t& _otherAssetCount);

                    /**
                     * 判断参数 OtherAssetCount 是否已赋值
                     * @return OtherAssetCount 是否已赋值
                     * 
                     */
                    bool OtherAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of Microsoft cloud assets</p>
                     * @return AzureAssetCount <p>Number of Microsoft cloud assets</p>
                     * 
                     */
                    uint64_t GetAzureAssetCount() const;

                    /**
                     * 设置<p>Number of Microsoft cloud assets</p>
                     * @param _azureAssetCount <p>Number of Microsoft cloud assets</p>
                     * 
                     */
                    void SetAzureAssetCount(const uint64_t& _azureAssetCount);

                    /**
                     * 判断参数 AzureAssetCount 是否已赋值
                     * @return AzureAssetCount 是否已赋值
                     * 
                     */
                    bool AzureAssetCountHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of Tencent Cloud assets</p>
                     */
                    uint64_t m_tencentAssetCount;
                    bool m_tencentAssetCountHasBeenSet;

                    /**
                     * <p>Total number of Alibaba Cloud assets</p>
                     */
                    uint64_t m_aliAssetCount;
                    bool m_aliAssetCountHasBeenSet;

                    /**
                     * <p>Total number of Amazon Web Services assets</p>
                     */
                    uint64_t m_awsAssetCount;
                    bool m_awsAssetCountHasBeenSet;

                    /**
                     * <p>Total number of assets in other cloud environments</p>
                     */
                    uint64_t m_otherAssetCount;
                    bool m_otherAssetCountHasBeenSet;

                    /**
                     * <p>Number of Microsoft cloud assets</p>
                     */
                    uint64_t m_azureAssetCount;
                    bool m_azureAssetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETPROVIDERDISTRIBUTEINFO_H_
