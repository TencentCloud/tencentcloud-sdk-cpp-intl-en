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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SPACE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Spatial information
                */
                class Space : public AbstractModel
                {
                public:
                    Space();
                    ~Space() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Space id</p>
                     * @return SpaceId <p>Space id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space id</p>
                     * @param _spaceId <p>Space id</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Space name</p>
                     * @return Name <p>Space name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Space name</p>
                     * @param _name <p>Space name</p>
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
                     * 获取<p>Space description.</p>
                     * @return Description <p>Space description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Space description.</p>
                     * @param _description <p>Space description.</p>
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
                     * 获取<p>Space permissions</p>
                     * @return PermissionIdList <p>Space permissions</p>
                     * 
                     */
                    std::vector<std::string> GetPermissionIdList() const;

                    /**
                     * 设置<p>Space permissions</p>
                     * @param _permissionIdList <p>Space permissions</p>
                     * 
                     */
                    void SetPermissionIdList(const std::vector<std::string>& _permissionIdList);

                    /**
                     * 判断参数 PermissionIdList 是否已赋值
                     * @return PermissionIdList 是否已赋值
                     * 
                     */
                    bool PermissionIdListHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p><p>Parameter format: timestamp in seconds</p>
                     * @return CreateTime <p>Creation time.</p><p>Parameter format: timestamp in seconds</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p><p>Parameter format: timestamp in seconds</p>
                     * @param _createTime <p>Creation time.</p><p>Parameter format: timestamp in seconds</p>
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
                     * 获取<p>Update time</p><p>Parameter format: timestamp</p>
                     * @return UpdateTime <p>Update time</p><p>Parameter format: timestamp</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p><p>Parameter format: timestamp</p>
                     * @param _updateTime <p>Update time</p><p>Parameter format: timestamp</p>
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
                     * <p>Space id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Space name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Space description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Space permissions</p>
                     */
                    std::vector<std::string> m_permissionIdList;
                    bool m_permissionIdListHasBeenSet;

                    /**
                     * <p>Creation time.</p><p>Parameter format: timestamp in seconds</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time</p><p>Parameter format: timestamp</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SPACE_H_
