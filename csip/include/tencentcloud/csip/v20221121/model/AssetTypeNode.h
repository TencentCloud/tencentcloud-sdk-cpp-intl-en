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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPENODE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPENODE_H_

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
                * Asset tree - Asset type node
                */
                class AssetTypeNode : public AbstractModel
                {
                public:
                    AssetTypeNode();
                    ~AssetTypeNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset type</p>
                     * @return AssetType <p>Asset type</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type</p>
                     * @param _assetType <p>Asset type</p>
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
                     * 获取<p>Asset type name</p>
                     * @return AssetTypeName <p>Asset type name</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>Asset type name</p>
                     * @param _assetTypeName <p>Asset type name</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Asset type count</p>
                     * @return AssetCount <p>Asset type count</p>
                     * 
                     */
                    uint64_t GetAssetCount() const;

                    /**
                     * 设置<p>Asset type count</p>
                     * @param _assetCount <p>Asset type count</p>
                     * 
                     */
                    void SetAssetCount(const uint64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Asset type ID</p>
                     * @return AssetTypeID <p>Asset type ID</p>
                     * 
                     */
                    uint64_t GetAssetTypeID() const;

                    /**
                     * 设置<p>Asset type ID</p>
                     * @param _assetTypeID <p>Asset type ID</p>
                     * 
                     */
                    void SetAssetTypeID(const uint64_t& _assetTypeID);

                    /**
                     * 判断参数 AssetTypeID 是否已赋值
                     * @return AssetTypeID 是否已赋值
                     * 
                     */
                    bool AssetTypeIDHasBeenSet() const;

                private:

                    /**
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Asset type name</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>Asset type count</p>
                     */
                    uint64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>Asset type ID</p>
                     */
                    uint64_t m_assetTypeID;
                    bool m_assetTypeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTYPENODE_H_
