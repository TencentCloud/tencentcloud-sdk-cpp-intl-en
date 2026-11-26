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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginRecord.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin server group information
                */
                class OriginGroup : public AbstractModel
                {
                public:
                    OriginGroup();
                    ~OriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server group ID.
                     * @return GroupId Origin server group ID.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Origin server group ID.
                     * @param _groupId Origin server group ID.
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
                     * 获取Origin server group name.
                     * @return Name Origin server group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Origin server group name.
                     * @param _name Origin server group name.
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
                     * 获取Origin server group type. Valid values:
<li>GENERAL: general origin group;</li>
<li>HTTP: HTTP-specific origin group.</li>
                     * @return Type Origin server group type. Valid values:
<li>GENERAL: general origin group;</li>
<li>HTTP: HTTP-specific origin group.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin server group type. Valid values:
<li>GENERAL: general origin group;</li>
<li>HTTP: HTTP-specific origin group.</li>
                     * @param _type Origin server group type. Valid values:
<li>GENERAL: general origin group;</li>
<li>HTTP: HTTP-specific origin group.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Origin server record information.
                     * @return Records Origin server record information.
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置Origin server record information.
                     * @param _records Origin server record information.
                     * 
                     */
                    void SetRecords(const std::vector<OriginRecord>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取List of instances that reference the origin group.	
                     * @return References List of instances that reference the origin group.	
                     * 
                     */
                    std::vector<OriginGroupReference> GetReferences() const;

                    /**
                     * 设置List of instances that reference the origin group.	
                     * @param _references List of instances that reference the origin group.	
                     * 
                     */
                    void SetReferences(const std::vector<OriginGroupReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Origin group creation time.
                     * @return CreateTime Origin group creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Origin group creation time.
                     * @param _createTime Origin group creation time.
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
                     * 获取Origin-pull group update time.
                     * @return UpdateTime Origin-pull group update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Origin-pull group update time.
                     * @param _updateTime Origin-pull group update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Origin-pull Host Header.
                     * @return HostHeader Origin-pull Host Header.
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置Origin-pull Host Header.
                     * @param _hostHeader Origin-pull Host Header.
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * Origin server group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Origin server group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Origin server group type. Valid values:
<li>GENERAL: general origin group;</li>
<li>HTTP: HTTP-specific origin group.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin server record information.
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * List of instances that reference the origin group.	
                     */
                    std::vector<OriginGroupReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Origin group creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Origin-pull group update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin-pull Host Header.
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
