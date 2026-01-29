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
                     * 获取Asset name.
                     * @return AssetName Asset name.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name.
                     * @param _assetName Asset name.
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
                     * 获取Asset type.
                     * @return InstanceType Asset type.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Asset type.
                     * @param _instanceType Asset type.
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
                     * 获取Asset category.
                     * @return AssetType Asset category.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset category.
                     * @param _assetType Asset category.
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取Unique ID of Multi-Cloud Assets
                     * @return Arn Unique ID of Multi-Cloud Assets
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置Unique ID of Multi-Cloud Assets
                     * @param _arn Unique ID of Multi-Cloud Assets
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
                     * Asset name.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Asset category.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * IP, domain name, asset ID, database ID, and more
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Unique ID of Multi-Cloud Assets
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKASSETOBJECT_H_
