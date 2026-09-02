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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGPREVIEWASSETITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGPREVIEWASSETITEM_H_

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
                * Asset tag preview asset
                */
                class AssetTagPreviewAssetItem : public AbstractModel
                {
                public:
                    AssetTagPreviewAssetItem();
                    ~AssetTagPreviewAssetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset ID.</p>
                     * @return AssetID <p>Asset ID.</p>
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置<p>Asset ID.</p>
                     * @param _assetID <p>Asset ID.</p>
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取<p>Asset name</p>
                     * @return AssetName <p>Asset name</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>Asset name</p>
                     * @param _assetName <p>Asset name</p>
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
                     * 获取<p>Public IP address</p>
                     * @return PublicIP <p>Public IP address</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public IP address</p>
                     * @param _publicIP <p>Public IP address</p>
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取<p>Private IP address.</p>
                     * @return PrivateIP <p>Private IP address.</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private IP address.</p>
                     * @param _privateIP <p>Private IP address.</p>
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取<p>Public network domain</p>
                     * @return PublicDomain <p>Public network domain</p>
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置<p>Public network domain</p>
                     * @param _publicDomain <p>Public network domain</p>
                     * 
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取<p>Private domain</p>
                     * @return PrivateDomain <p>Private domain</p>
                     * 
                     */
                    std::string GetPrivateDomain() const;

                    /**
                     * 设置<p>Private domain</p>
                     * @param _privateDomain <p>Private domain</p>
                     * 
                     */
                    void SetPrivateDomain(const std::string& _privateDomain);

                    /**
                     * 判断参数 PrivateDomain 是否已赋值
                     * @return PrivateDomain 是否已赋值
                     * 
                     */
                    bool PrivateDomainHasBeenSet() const;

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
                     * 获取<p>Asset type icon</p>
                     * @return AssetTypeIconURL <p>Asset type icon</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>Asset type icon</p>
                     * @param _assetTypeIconURL <p>Asset type icon</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                private:

                    /**
                     * <p>Asset ID.</p>
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * <p>Asset name</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>Public IP address</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private IP address.</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>Public network domain</p>
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * <p>Private domain</p>
                     */
                    std::string m_privateDomain;
                    bool m_privateDomainHasBeenSet;

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
                     * <p>Asset type icon</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGPREVIEWASSETITEM_H_
