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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNAMESPACELISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNAMESPACELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cluster Namespace item
                */
                class ClusterNamespaceListItem : public AbstractModel
                {
                public:
                    ClusterNamespaceListItem();
                    ~ClusterNamespaceListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
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
                     * 获取<p>Name.</p>
                     * @return Name <p>Name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name.</p>
                     * @param _name <p>Name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Label <p>Tag.</p>
                     * 
                     */
                    std::vector<AssetTag> GetLabel() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _label <p>Tag.</p>
                     * 
                     */
                    void SetLabel(const std::vector<AssetTag>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

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
                     * 获取<p>Asset ID.</p>
                     * @return AssetId <p>Asset ID.</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset ID.</p>
                     * @param _assetId <p>Asset ID.</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Namespace unique ID</p>
                     * @return UniqueID <p>Namespace unique ID</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置<p>Namespace unique ID</p>
                     * @param _uniqueID <p>Namespace unique ID</p>
                     * 
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<AssetTag> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Asset ID.</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Namespace unique ID</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNAMESPACELISTITEM_H_
