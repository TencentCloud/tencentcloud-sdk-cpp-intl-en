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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYCOMPLIANCEGROUPDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYCOMPLIANCEGROUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceCategoryRelation.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyComplianceGroupDetail response structure.
                */
                class DescribeDspmIdentifyComplianceGroupDetailResponse : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyComplianceGroupDetailResponse();
                    ~DescribeDspmIdentifyComplianceGroupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Identification template ID</p>
                     * @return Id <p>Identification template ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Recognition template name.</p>
                     * @return Name <p>Recognition template name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return Type <p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @return Status <p>Status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Associated level group ID</p>
                     * @return LevelGroupId <p>Associated level group ID</p>
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>None</p>
                     * @return Detail <p>None</p>
                     * 
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>Associated level group name</p>
                     * @return LevelGroupName <p>Associated level group name</p>
                     * 
                     */
                    std::string GetLevelGroupName() const;

                    /**
                     * 判断参数 LevelGroupName 是否已赋值
                     * @return LevelGroupName 是否已赋值
                     * 
                     */
                    bool LevelGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Modification time.</p>
                     * @return ModifyTime <p>Modification time.</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Identification template ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Recognition template name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Associated level group ID</p>
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * <p>None</p>
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>Associated level group name</p>
                     */
                    std::string m_levelGroupName;
                    bool m_levelGroupNameHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Modification time.</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYCOMPLIANCEGROUPDETAILRESPONSE_H_
