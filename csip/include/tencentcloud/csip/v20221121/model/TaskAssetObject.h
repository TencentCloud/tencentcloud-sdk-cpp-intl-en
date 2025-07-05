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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_

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
                * Task asset information
                */
                class TaskAssetObject : public AbstractModel
                {
                public:
                    TaskAssetObject();
                    ~TaskAssetObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取	Asset category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InstanceType 	Asset category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置	Asset category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _instanceType 	Asset category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Asset sub-category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetType Asset sub-category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset sub-category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetType Asset sub-category
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取IP, domain name, asset ID, database ID, and more
                     * @return Asset IP, domain name, asset ID, database ID, and more
                     * 
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置IP, domain name, asset ID, database ID, and more
                     * @param _asset IP, domain name, asset ID, database ID, and more
                     * 
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The ID specific for an asset synched from another cloud platform
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Arn The ID specific for an asset synched from another cloud platform
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置The ID specific for an asset synched from another cloud platform
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _arn The ID specific for an asset synched from another cloud platform
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArn(const std::string& _arn);

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                private:

                    /**
                     * Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 	Asset category
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Asset sub-category
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * IP, domain name, asset ID, database ID, and more
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The ID specific for an asset synched from another cloud platform
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_
