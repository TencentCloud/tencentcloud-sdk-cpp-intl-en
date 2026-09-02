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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_

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
                * Notification asset scope
                */
                class WebhookAssetScope : public AbstractModel
                {
                public:
                    WebhookAssetScope();
                    ~WebhookAssetScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset scope type (aligned with NotifyAssetRange)
Enumeration values:
1: All hosts (removable)
2: Specified hosts
3: Select by tag
                     * @return AssetRange Asset scope type (aligned with NotifyAssetRange)
Enumeration values:
1: All hosts (removable)
2: Specified hosts
3: Select by tag
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置Asset scope type (aligned with NotifyAssetRange)
Enumeration values:
1: All hosts (removable)
2: Specified hosts
3: Select by tag
                     * @param _assetRange Asset scope type (aligned with NotifyAssetRange)
Enumeration values:
1: All hosts (removable)
2: Specified hosts
3: Select by tag
                     * 
                     */
                    void SetAssetRange(const int64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取quuid list of selected hosts. It takes effect only when AssetRange=2.
                     * @return InstanceIds quuid list of selected hosts. It takes effect only when AssetRange=2.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置quuid list of selected hosts. It takes effect only when AssetRange=2.
                     * @param _instanceIds quuid list of selected hosts. It takes effect only when AssetRange=2.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Excluded host quuid list. This parameter takes effect only when AssetRange is 1.
                     * @return ExcludedInstanceIds Excluded host quuid list. This parameter takes effect only when AssetRange is 1.
                     * 
                     */
                    std::vector<std::string> GetExcludedInstanceIds() const;

                    /**
                     * 设置Excluded host quuid list. This parameter takes effect only when AssetRange is 1.
                     * @param _excludedInstanceIds Excluded host quuid list. This parameter takes effect only when AssetRange is 1.
                     * 
                     */
                    void SetExcludedInstanceIds(const std::vector<std::string>& _excludedInstanceIds);

                    /**
                     * 判断参数 ExcludedInstanceIds 是否已赋值
                     * @return ExcludedInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Security center tag ID list. It takes effect only when AssetRange is 3.
                     * @return TagIds Security center tag ID list. It takes effect only when AssetRange is 3.
                     * 
                     */
                    std::vector<int64_t> GetTagIds() const;

                    /**
                     * 设置Security center tag ID list. It takes effect only when AssetRange is 3.
                     * @param _tagIds Security center tag ID list. It takes effect only when AssetRange is 3.
                     * 
                     */
                    void SetTagIds(const std::vector<int64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取List of Tencent Cloud tags. It takes effect only when AssetRange is set to 3.
Input parameter limitation: when AssetRange=3, TagIds and CloudTags cannot be empty at the same time.
                     * @return CloudTags List of Tencent Cloud tags. It takes effect only when AssetRange is set to 3.
Input parameter limitation: when AssetRange=3, TagIds and CloudTags cannot be empty at the same time.
                     * 
                     */
                    std::vector<std::string> GetCloudTags() const;

                    /**
                     * 设置List of Tencent Cloud tags. It takes effect only when AssetRange is set to 3.
Input parameter limitation: when AssetRange=3, TagIds and CloudTags cannot be empty at the same time.
                     * @param _cloudTags List of Tencent Cloud tags. It takes effect only when AssetRange is set to 3.
Input parameter limitation: when AssetRange=3, TagIds and CloudTags cannot be empty at the same time.
                     * 
                     */
                    void SetCloudTags(const std::vector<std::string>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                private:

                    /**
                     * Asset scope type (aligned with NotifyAssetRange)
Enumeration values:
1: All hosts (removable)
2: Specified hosts
3: Select by tag
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * quuid list of selected hosts. It takes effect only when AssetRange=2.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Excluded host quuid list. This parameter takes effect only when AssetRange is 1.
                     */
                    std::vector<std::string> m_excludedInstanceIds;
                    bool m_excludedInstanceIdsHasBeenSet;

                    /**
                     * Security center tag ID list. It takes effect only when AssetRange is 3.
                     */
                    std::vector<int64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * List of Tencent Cloud tags. It takes effect only when AssetRange is set to 3.
Input parameter limitation: when AssetRange=3, TagIds and CloudTags cannot be empty at the same time.
                     */
                    std::vector<std::string> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKASSETSCOPE_H_
