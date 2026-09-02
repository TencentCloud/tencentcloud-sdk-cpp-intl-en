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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGITEM_H_

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
                * Asset tag element
                */
                class AssetTagItem : public AbstractModel
                {
                public:
                    AssetTagItem();
                    ~AssetTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag ID</p>
                     * @return ID <p>Tag ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _iD <p>Tag ID</p>
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
                     * 获取<p>Tag key</p>
                     * @return TagKey <p>Tag key</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>Tag key</p>
                     * @param _tagKey <p>Tag key</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>Tag value</p>
                     * @return TagValue <p>Tag value</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>Tag value</p>
                     * @param _tagValue <p>Tag value</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Automatic tagging policy</p>
                     * @return TaggingRule <p>Automatic tagging policy</p>
                     * 
                     */
                    std::string GetTaggingRule() const;

                    /**
                     * 设置<p>Automatic tagging policy</p>
                     * @param _taggingRule <p>Automatic tagging policy</p>
                     * 
                     */
                    void SetTaggingRule(const std::string& _taggingRule);

                    /**
                     * 判断参数 TaggingRule 是否已赋值
                     * @return TaggingRule 是否已赋值
                     * 
                     */
                    bool TaggingRuleHasBeenSet() const;

                    /**
                     * 获取<p>Tag color</p>
                     * @return Color <p>Tag color</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>Tag color</p>
                     * @param _color <p>Tag color</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets bound to a tag</p>
                     * @return AssetCount <p>Number of assets bound to a tag</p>
                     * 
                     */
                    uint64_t GetAssetCount() const;

                    /**
                     * 设置<p>Number of assets bound to a tag</p>
                     * @param _assetCount <p>Number of assets bound to a tag</p>
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
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Tag ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Tag key</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>Tag value</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Automatic tagging policy</p>
                     */
                    std::string m_taggingRule;
                    bool m_taggingRuleHasBeenSet;

                    /**
                     * <p>Tag color</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>Number of assets bound to a tag</p>
                     */
                    uint64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGITEM_H_
