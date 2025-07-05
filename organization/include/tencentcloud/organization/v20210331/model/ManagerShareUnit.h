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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Details of my shared unit list
                */
                class ManagerShareUnit : public AbstractModel
                {
                public:
                    ManagerShareUnit();
                    ~ManagerShareUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared unit ID.
                     * @return UnitId Shared unit ID.
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置Shared unit ID.
                     * @param _unitId Shared unit ID.
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取Shared unit name.
                     * @return Name Shared unit name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Shared unit name.
                     * @param _name Shared unit name.
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
                     * 获取Shared unit administrator UIN.
                     * @return Uin Shared unit administrator UIN.
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置Shared unit administrator UIN.
                     * @param _uin Shared unit administrator UIN.
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Shared unit administrator OwnerUin.
                     * @return OwnerUin Shared unit administrator OwnerUin.
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置Shared unit administrator OwnerUin.
                     * @param _ownerUin Shared unit administrator OwnerUin.
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Shared unit region.
                     * @return Area Shared unit region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Shared unit region.
                     * @param _area Shared unit region.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Description.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The number of resources in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShareResourceNum The number of resources in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShareResourceNum() const;

                    /**
                     * 设置The number of resources in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shareResourceNum The number of resources in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShareResourceNum(const int64_t& _shareResourceNum);

                    /**
                     * 判断参数 ShareResourceNum 是否已赋值
                     * @return ShareResourceNum 是否已赋值
                     * 
                     */
                    bool ShareResourceNumHasBeenSet() const;

                    /**
                     * 获取The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShareMemberNum The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShareMemberNum() const;

                    /**
                     * 设置The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shareMemberNum The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShareMemberNum(const int64_t& _shareMemberNum);

                    /**
                     * 判断参数 ShareMemberNum 是否已赋值
                     * @return ShareMemberNum 是否已赋值
                     * 
                     */
                    bool ShareMemberNumHasBeenSet() const;

                    /**
                     * 获取Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShareScope Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetShareScope() const;

                    /**
                     * 设置Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shareScope Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShareScope(const uint64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                private:

                    /**
                     * Shared unit ID.
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * Shared unit name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Shared unit administrator UIN.
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Shared unit administrator OwnerUin.
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Shared unit region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Description.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The number of resources in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shareResourceNum;
                    bool m_shareResourceNumHasBeenSet;

                    /**
                     * The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shareMemberNum;
                    bool m_shareMemberNumHasBeenSet;

                    /**
                     * Sharing scope. Valid values: 1: Only sharing within a group organization is allowed; 2: Sharing with any account is allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_
