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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMGROUPREQUEST_H_

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
                * ModifyCustomGroup request structure.
                */
                class ModifyCustomGroupRequest : public AbstractModel
                {
                public:
                    ModifyCustomGroupRequest();
                    ~ModifyCustomGroupRequest() = default;
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
                     * 获取<p>Unique ID of the custom group.</p>
                     * @return GroupId <p>Unique ID of the custom group.</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>Unique ID of the custom group.</p>
                     * @param _groupId <p>Unique ID of the custom group.</p>
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
                     * 获取<p>Custom group name. If this field is not specified, the original value is retained.</p>
                     * @return GroupName <p>Custom group name. If this field is not specified, the original value is retained.</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>Custom group name. If this field is not specified, the original value is retained.</p>
                     * @param _groupName <p>Custom group name. If this field is not specified, the original value is retained.</p>
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
                     * 获取<p>Specifies how to update GroupItems.</p><p>Valid values:</p><ul><li>Replace: Replaces the entire original entry list with GroupItems.</li><li>Append: Appends GroupItems to the group entry list.</li><li>Remove: Removes entries whose Content and ItemType are the same as those in GroupItems from the original entry list. If a specified entry does not exist, it is ignored.</li></ul><p>Default value: Replace</p>
                     * @return GroupItemOperation <p>Specifies how to update GroupItems.</p><p>Valid values:</p><ul><li>Replace: Replaces the entire original entry list with GroupItems.</li><li>Append: Appends GroupItems to the group entry list.</li><li>Remove: Removes entries whose Content and ItemType are the same as those in GroupItems from the original entry list. If a specified entry does not exist, it is ignored.</li></ul><p>Default value: Replace</p>
                     * 
                     */
                    std::string GetGroupItemOperation() const;

                    /**
                     * 设置<p>Specifies how to update GroupItems.</p><p>Valid values:</p><ul><li>Replace: Replaces the entire original entry list with GroupItems.</li><li>Append: Appends GroupItems to the group entry list.</li><li>Remove: Removes entries whose Content and ItemType are the same as those in GroupItems from the original entry list. If a specified entry does not exist, it is ignored.</li></ul><p>Default value: Replace</p>
                     * @param _groupItemOperation <p>Specifies how to update GroupItems.</p><p>Valid values:</p><ul><li>Replace: Replaces the entire original entry list with GroupItems.</li><li>Append: Appends GroupItems to the group entry list.</li><li>Remove: Removes entries whose Content and ItemType are the same as those in GroupItems from the original entry list. If a specified entry does not exist, it is ignored.</li></ul><p>Default value: Replace</p>
                     * 
                     */
                    void SetGroupItemOperation(const std::string& _groupItemOperation);

                    /**
                     * 判断参数 GroupItemOperation 是否已赋值
                     * @return GroupItemOperation 是否已赋值
                     * 
                     */
                    bool GroupItemOperationHasBeenSet() const;

                    /**
                     * 获取<p>List of custom group entries. If this field is not specified, the original value is retained.</p>
                     * @return GroupItems <p>List of custom group entries. If this field is not specified, the original value is retained.</p>
                     * 
                     */
                    std::vector<CustomGroupItem> GetGroupItems() const;

                    /**
                     * 设置<p>List of custom group entries. If this field is not specified, the original value is retained.</p>
                     * @param _groupItems <p>List of custom group entries. If this field is not specified, the original value is retained.</p>
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
                     * <p>Unique ID of the custom group.</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Custom group name. If this field is not specified, the original value is retained.</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Specifies how to update GroupItems.</p><p>Valid values:</p><ul><li>Replace: Replaces the entire original entry list with GroupItems.</li><li>Append: Appends GroupItems to the group entry list.</li><li>Remove: Removes entries whose Content and ItemType are the same as those in GroupItems from the original entry list. If a specified entry does not exist, it is ignored.</li></ul><p>Default value: Replace</p>
                     */
                    std::string m_groupItemOperation;
                    bool m_groupItemOperationHasBeenSet;

                    /**
                     * <p>List of custom group entries. If this field is not specified, the original value is retained.</p>
                     */
                    std::vector<CustomGroupItem> m_groupItems;
                    bool m_groupItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMGROUPREQUEST_H_
