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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomGroupItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * A security custom group is used to centrally manage a set of reusable security matching entries. For example, you can save multiple JA3/JA4 TLS fingerprints as a TLS fingerprint group and directly reference the group in security rules, avoiding the need to maintain the same fingerprint list in multiple rules.
                */
                class CustomGroup : public AbstractModel
                {
                public:
                    CustomGroup();
                    ~CustomGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The unique ID of the custom group.</p>
                     * @return GroupId <p>The unique ID of the custom group.</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>The unique ID of the custom group.</p>
                     * @param _groupId <p>The unique ID of the custom group.</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom group name.</p>
                     * @return GroupName <p>Custom group name.</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>Custom group name.</p>
                     * @param _groupName <p>Custom group name.</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Custom group type.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group</li><li>UA: UA group</li><li>Referer: Referer group</li></ul>
                     * @return GroupType <p>Custom group type.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group</li><li>UA: UA group</li><li>Referer: Referer group</li></ul>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>Custom group type.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group</li><li>UA: UA group</li><li>Referer: Referer group</li></ul>
                     * @param _groupType <p>Custom group type.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group</li><li>UA: UA group</li><li>Referer: Referer group</li></ul>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of custom group entries.</p>
                     * @return GroupItems <p>List of custom group entries.</p>
                     * 
                     */
                    std::vector<CustomGroupItem> GetGroupItems() const;

                    /**
                     * 设置<p>List of custom group entries.</p>
                     * @param _groupItems <p>List of custom group entries.</p>
                     * 
                     */
                    void SetGroupItems(const std::vector<CustomGroupItem>& _groupItems);

                    /**
                     * 判断参数 GroupItems 是否已赋值
                     * @return GroupItems 是否已赋值
                     * 
                     */
                    bool GroupItemsHasBeenSet() const;

                    /**
                     * 获取<p>Total number of custom group entries.</p>
                     * @return GroupItemTotalCount <p>Total number of custom group entries.</p>
                     * 
                     */
                    int64_t GetGroupItemTotalCount() const;

                    /**
                     * 设置<p>Total number of custom group entries.</p>
                     * @param _groupItemTotalCount <p>Total number of custom group entries.</p>
                     * 
                     */
                    void SetGroupItemTotalCount(const int64_t& _groupItemTotalCount);

                    /**
                     * 判断参数 GroupItemTotalCount 是否已赋值
                     * @return GroupItemTotalCount 是否已赋值
                     * 
                     */
                    bool GroupItemTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of times the custom group is referenced.</p>
                     * @return RefCount <p>Number of times the custom group is referenced.</p>
                     * 
                     */
                    int64_t GetRefCount() const;

                    /**
                     * 设置<p>Number of times the custom group is referenced.</p>
                     * @param _refCount <p>Number of times the custom group is referenced.</p>
                     * 
                     */
                    void SetRefCount(const int64_t& _refCount);

                    /**
                     * 判断参数 RefCount 是否已赋值
                     * @return RefCount 是否已赋值
                     * 
                     */
                    bool RefCountHasBeenSet() const;

                private:

                    /**
                     * <p>The unique ID of the custom group.</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Custom group name.</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Custom group type.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group</li><li>UA: UA group</li><li>Referer: Referer group</li></ul>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>List of custom group entries.</p>
                     */
                    std::vector<CustomGroupItem> m_groupItems;
                    bool m_groupItemsHasBeenSet;

                    /**
                     * <p>Total number of custom group entries.</p>
                     */
                    int64_t m_groupItemTotalCount;
                    bool m_groupItemTotalCountHasBeenSet;

                    /**
                     * <p>Number of times the custom group is referenced.</p>
                     */
                    int64_t m_refCount;
                    bool m_refCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUP_H_
