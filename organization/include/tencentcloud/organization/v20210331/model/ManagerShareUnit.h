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
                     * 获取<p>Shared unit ID.</p>.
                     * @return UnitId <p>Shared unit ID.</p>.
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置<p>Shared unit ID.</p>.
                     * @param _unitId <p>Shared unit ID.</p>.
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
                     * 获取<P>Shared unit name.</p>.
                     * @return Name <P>Shared unit name.</p>.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<P>Shared unit name.</p>.
                     * @param _name <P>Shared unit name.</p>.
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
                     * 获取<p>Shared unit administrator Uin.</p>.
                     * @return Uin <p>Shared unit administrator Uin.</p>.
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置<p>Shared unit administrator Uin.</p>.
                     * @param _uin <p>Shared unit administrator Uin.</p>.
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
                     * 获取<p>Shared unit administrator OwnerUin.</p>.
                     * @return OwnerUin <p>Shared unit administrator OwnerUin.</p>.
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置<p>Shared unit administrator OwnerUin.</p>.
                     * @param _ownerUin <p>Shared unit administrator OwnerUin.</p>.
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
                     * 获取<P>Shared unit region.</p>.
                     * @return Area <P>Shared unit region.</p>.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<P>Shared unit region.</p>.
                     * @param _area <P>Shared unit region.</p>.
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
                     * 获取<P>Description.</P>.
                     * @return Description <P>Description.</P>.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<P>Description.</P>.
                     * @param _description <P>Description.</P>.
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
                     * 获取<P>Creation time.</p>.
                     * @return CreateTime <P>Creation time.</p>.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<P>Creation time.</p>.
                     * @param _createTime <P>Creation time.</p>.
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
                     * 获取<P>The number of resources in a shared unit.</p>.
                     * @return ShareResourceNum <P>The number of resources in a shared unit.</p>.
                     * 
                     */
                    int64_t GetShareResourceNum() const;

                    /**
                     * 设置<P>The number of resources in a shared unit.</p>.
                     * @param _shareResourceNum <P>The number of resources in a shared unit.</p>.
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
                     * 获取<P>The number of members in a shared unit.</p>.
                     * @return ShareMemberNum <P>The number of members in a shared unit.</p>.
                     * 
                     */
                    int64_t GetShareMemberNum() const;

                    /**
                     * 设置<P>The number of members in a shared unit.</p>.
                     * @param _shareMemberNum <P>The number of members in a shared unit.</p>.
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
                     * 获取<P>Sharing scope. valid values: 1: only sharing within a group organization is allowed; 2: sharing with any account is allowed.</p>.
                     * @return ShareScope <P>Sharing scope. valid values: 1: only sharing within a group organization is allowed; 2: sharing with any account is allowed.</p>.
                     * 
                     */
                    uint64_t GetShareScope() const;

                    /**
                     * 设置<P>Sharing scope. valid values: 1: only sharing within a group organization is allowed; 2: sharing with any account is allowed.</p>.
                     * @param _shareScope <P>Sharing scope. valid values: 1: only sharing within a group organization is allowed; 2: sharing with any account is allowed.</p>.
                     * 
                     */
                    void SetShareScope(const uint64_t& _shareScope);

                    /**
                     * 判断参数 ShareScope 是否已赋值
                     * @return ShareScope 是否已赋值
                     * 
                     */
                    bool ShareScopeHasBeenSet() const;

                    /**
                     * 获取<P>The number of departments in a shared unit.</p>.
                     * @return ShareNodeNum <P>The number of departments in a shared unit.</p>.
                     * 
                     */
                    int64_t GetShareNodeNum() const;

                    /**
                     * 设置<P>The number of departments in a shared unit.</p>.
                     * @param _shareNodeNum <P>The number of departments in a shared unit.</p>.
                     * 
                     */
                    void SetShareNodeNum(const int64_t& _shareNodeNum);

                    /**
                     * 判断参数 ShareNodeNum 是否已赋值
                     * @return ShareNodeNum 是否已赋值
                     * 
                     */
                    bool ShareNodeNumHasBeenSet() const;

                private:

                    /**
                     * <p>Shared unit ID.</p>.
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * <P>Shared unit name.</p>.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Shared unit administrator Uin.</p>.
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Shared unit administrator OwnerUin.</p>.
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <P>Shared unit region.</p>.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <P>Description.</P>.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <P>Creation time.</p>.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <P>The number of resources in a shared unit.</p>.
                     */
                    int64_t m_shareResourceNum;
                    bool m_shareResourceNumHasBeenSet;

                    /**
                     * <P>The number of members in a shared unit.</p>.
                     */
                    int64_t m_shareMemberNum;
                    bool m_shareMemberNumHasBeenSet;

                    /**
                     * <P>Sharing scope. valid values: 1: only sharing within a group organization is allowed; 2: sharing with any account is allowed.</p>.
                     */
                    uint64_t m_shareScope;
                    bool m_shareScopeHasBeenSet;

                    /**
                     * <P>The number of departments in a shared unit.</p>.
                     */
                    int64_t m_shareNodeNum;
                    bool m_shareNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MANAGERSHAREUNIT_H_
