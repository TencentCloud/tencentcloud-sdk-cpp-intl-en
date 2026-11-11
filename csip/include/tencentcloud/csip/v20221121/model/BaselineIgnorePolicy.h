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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEIGNOREPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEIGNOREPOLICY_H_

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
                * Baseline ignore policy
                */
                class BaselineIgnorePolicy : public AbstractModel
                {
                public:
                    BaselineIgnorePolicy();
                    ~BaselineIgnorePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Ignore policy record ID.</p>
                     * @return ID <p>Ignore policy record ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Ignore policy record ID.</p>
                     * @param _iD <p>Ignore policy record ID.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Detection item name.</p>
                     * @return ItemName <p>Detection item name.</p>
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置<p>Detection item name.</p>
                     * @param _itemName <p>Detection item name.</p>
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取<p>Category name of the detection item.</p>
                     * @return CategoryName <p>Category name of the detection item.</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>Category name of the detection item.</p>
                     * @param _categoryName <p>Category name of the detection item.</p>
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取<p>User AppID.</p>
                     * @return AppID <p>User AppID.</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>User AppID.</p>
                     * @param _appID <p>User AppID.</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Ignorable range type</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * @return ScopeType <p>Ignorable range type</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置<p>Ignorable range type</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * @param _scopeType <p>Ignorable range type</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * 
                     */
                    void SetScopeType(const std::string& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Custom asset ID list. This parameter is valid only when PICK is selected. Store instance-id or cluster ID.</p>
                     * @return ScopeIncludeList <p>Custom asset ID list. This parameter is valid only when PICK is selected. Store instance-id or cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetScopeIncludeList() const;

                    /**
                     * 设置<p>Custom asset ID list. This parameter is valid only when PICK is selected. Store instance-id or cluster ID.</p>
                     * @param _scopeIncludeList <p>Custom asset ID list. This parameter is valid only when PICK is selected. Store instance-id or cluster ID.</p>
                     * 
                     */
                    void SetScopeIncludeList(const std::vector<std::string>& _scopeIncludeList);

                    /**
                     * 判断参数 ScopeIncludeList 是否已赋值
                     * @return ScopeIncludeList 是否已赋值
                     * 
                     */
                    bool ScopeIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>Remove asset ID list. This parameter is valid only when set to ALL. Store instance-id or cluster ID.</p>
                     * @return ScopeExcludeList <p>Remove asset ID list. This parameter is valid only when set to ALL. Store instance-id or cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetScopeExcludeList() const;

                    /**
                     * 设置<p>Remove asset ID list. This parameter is valid only when set to ALL. Store instance-id or cluster ID.</p>
                     * @param _scopeExcludeList <p>Remove asset ID list. This parameter is valid only when set to ALL. Store instance-id or cluster ID.</p>
                     * 
                     */
                    void SetScopeExcludeList(const std::vector<std::string>& _scopeExcludeList);

                    /**
                     * 判断参数 ScopeExcludeList 是否已赋值
                     * @return ScopeExcludeList 是否已赋值
                     * 
                     */
                    bool ScopeExcludeListHasBeenSet() const;

                    /**
                     * 获取<p>Remark information.</p>
                     * @return Remark <p>Remark information.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remark information.</p>
                     * @param _remark <p>Remark information.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last modification time.</p>
                     * @return ModifyTime <p>Last modification time.</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Last modification time.</p>
                     * @param _modifyTime <p>Last modification time.</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Corresponding asset type</p><p>Enumeration values:</p><ul><li>HOST: host</li><li>CLUSTER: cluster-related assets</li></ul>
                     * @return AssetType <p>Corresponding asset type</p><p>Enumeration values:</p><ul><li>HOST: host</li><li>CLUSTER: cluster-related assets</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Corresponding asset type</p><p>Enumeration values:</p><ul><li>HOST: host</li><li>CLUSTER: cluster-related assets</li></ul>
                     * @param _assetType <p>Corresponding asset type</p><p>Enumeration values:</p><ul><li>HOST: host</li><li>CLUSTER: cluster-related assets</li></ul>
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
                     * 获取<p>Check item ID</p>
                     * @return ItemID <p>Check item ID</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>Check item ID</p>
                     * @param _itemID <p>Check item ID</p>
                     * 
                     */
                    void SetItemID(const uint64_t& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                private:

                    /**
                     * <p>Ignore policy record ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Detection item name.</p>
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * <p>Category name of the detection item.</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>User AppID.</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Ignorable range type</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * <p>Custom asset ID list. This parameter is valid only when PICK is selected. Store instance-id or cluster ID.</p>
                     */
                    std::vector<std::string> m_scopeIncludeList;
                    bool m_scopeIncludeListHasBeenSet;

                    /**
                     * <p>Remove asset ID list. This parameter is valid only when set to ALL. Store instance-id or cluster ID.</p>
                     */
                    std::vector<std::string> m_scopeExcludeList;
                    bool m_scopeExcludeListHasBeenSet;

                    /**
                     * <p>Remark information.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modification time.</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Corresponding asset type</p><p>Enumeration values:</p><ul><li>HOST: host</li><li>CLUSTER: cluster-related assets</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Check item ID</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEIGNOREPOLICY_H_
