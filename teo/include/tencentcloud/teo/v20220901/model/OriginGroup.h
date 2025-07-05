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
                * Origin group information.
                */
                class OriginGroup : public AbstractModel
                {
                public:
                    OriginGroup();
                    ~OriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the origin group.
                     * @return GroupId The ID of the origin group.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置The ID of the origin group.
                     * @param _groupId The ID of the origin group.
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
                     * 获取The name of the origin group.
                     * @return Name The name of the origin group.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the origin group.
                     * @param _name The name of the origin group.
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
                     * 获取The origin group type. Values:
<li>`GENERAL`: General origin group</li>
<li>`HTTP`: HTTP-specific origin group</li>
                     * @return Type The origin group type. Values:
<li>`GENERAL`: General origin group</li>
<li>`HTTP`: HTTP-specific origin group</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The origin group type. Values:
<li>`GENERAL`: General origin group</li>
<li>`HTTP`: HTTP-specific origin group</li>
                     * @param _type The origin group type. Values:
<li>`GENERAL`: General origin group</li>
<li>`HTTP`: HTTP-specific origin group</li>
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
                     * 获取Details of the origin record.
                     * @return Records Details of the origin record.
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置Details of the origin record.
                     * @param _records Details of the origin record.
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
                     * 获取List of instances referencing this origin group.	
                     * @return References List of instances referencing this origin group.	
                     * 
                     */
                    std::vector<OriginGroupReference> GetReferences() const;

                    /**
                     * 设置List of instances referencing this origin group.	
                     * @param _references List of instances referencing this origin group.	
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
                     * 获取Creation time of the origin group.
                     * @return CreateTime Creation time of the origin group.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the origin group.
                     * @param _createTime Creation time of the origin group.
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
                     * 获取The update time of the origin group.
                     * @return UpdateTime The update time of the origin group.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time of the origin group.
                     * @param _updateTime The update time of the origin group.
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
                     * 获取Origin-pull host header
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return HostHeader Origin-pull host header
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置Origin-pull host header
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _hostHeader Origin-pull host header
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * The ID of the origin group.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The name of the origin group.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The origin group type. Values:
<li>`GENERAL`: General origin group</li>
<li>`HTTP`: HTTP-specific origin group</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Details of the origin record.
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * List of instances referencing this origin group.	
                     */
                    std::vector<OriginGroupReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Creation time of the origin group.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The update time of the origin group.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin-pull host header
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
