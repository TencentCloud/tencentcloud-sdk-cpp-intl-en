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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCustomGroup request structure.
                */
                class CreateCustomGroupRequest : public AbstractModel
                {
                public:
                    CreateCustomGroupRequest();
                    ~CreateCustomGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

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
                     * 获取<p>Custom group type. It cannot be modified after creation. Different types of custom groups support different entry types.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group, supporting JA3 and JA4 entries</li><li>UA: UA group, supporting UA entries</li><li>Referer: Referer group, supporting Referer entries</li></ul>
                     * @return GroupType <p>Custom group type. It cannot be modified after creation. Different types of custom groups support different entry types.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group, supporting JA3 and JA4 entries</li><li>UA: UA group, supporting UA entries</li><li>Referer: Referer group, supporting Referer entries</li></ul>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>Custom group type. It cannot be modified after creation. Different types of custom groups support different entry types.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group, supporting JA3 and JA4 entries</li><li>UA: UA group, supporting UA entries</li><li>Referer: Referer group, supporting Referer entries</li></ul>
                     * @param _groupType <p>Custom group type. It cannot be modified after creation. Different types of custom groups support different entry types.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group, supporting JA3 and JA4 entries</li><li>UA: UA group, supporting UA entries</li><li>Referer: Referer group, supporting Referer entries</li></ul>
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

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Custom group name.</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Custom group type. It cannot be modified after creation. Different types of custom groups support different entry types.</p><p>Valid values:</p><ul><li>TLSFingerprint: TLS fingerprint group, supporting JA3 and JA4 entries</li><li>UA: UA group, supporting UA entries</li><li>Referer: Referer group, supporting Referer entries</li></ul>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>List of custom group entries.</p>
                     */
                    std::vector<CustomGroupItem> m_groupItems;
                    bool m_groupItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECUSTOMGROUPREQUEST_H_
