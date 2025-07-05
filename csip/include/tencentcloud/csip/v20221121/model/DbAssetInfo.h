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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Details of a database asset. 
                */
                class DbAssetInfo : public AbstractModel
                {
                public:
                    DbAssetInfo();
                    ~DbAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CFWStatus CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCFWStatus() const;

                    /**
                     * 设置CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cFWStatus CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFWStatus(const uint64_t& _cFWStatus);

                    /**
                     * 判断参数 CFWStatus 是否已赋值
                     * @return CFWStatus 是否已赋值
                     * 
                     */
                    bool CFWStatusHasBeenSet() const;

                    /**
                     * 获取Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取VPC information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VpcName VPC information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vpcName VPC information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetType Asset type
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
                     * 获取Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

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
                     * 获取
                     * @return VpcId 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param _vpcId 
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

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
                     * 获取CFW edition
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CFWProtectLevel CFW edition
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCFWProtectLevel() const;

                    /**
                     * 设置CFW edition
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cFWProtectLevel CFW edition
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFWProtectLevel(const uint64_t& _cFWProtectLevel);

                    /**
                     * 判断参数 CFWProtectLevel 是否已赋值
                     * @return CFWProtectLevel 是否已赋值
                     * 
                     */
                    bool CFWProtectLevelHasBeenSet() const;

                    /**
                     * 获取Tag information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Tag Tag information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _tag Tag information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cFWStatus;
                    bool m_cFWStatusHasBeenSet;

                    /**
                     * Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * VPC information
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * CFW edition
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cFWProtectLevel;
                    bool m_cFWProtectLevelHasBeenSet;

                    /**
                     * Tag information
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETINFO_H_
