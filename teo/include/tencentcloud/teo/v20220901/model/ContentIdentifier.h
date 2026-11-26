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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Content identifier. The feature is open only in the allowlist.
                */
                class ContentIdentifier : public AbstractModel
                {
                public:
                    ContentIdentifier();
                    ~ContentIdentifier() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content identifier ID.
                     * @return ContentId Content identifier ID.
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置Content identifier ID.
                     * @param _contentId Content identifier ID.
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取Content identifier description.
                     * @return Description Content identifier description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Content identifier description.
                     * @param _description Content identifier description.
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
                     * 获取Number of times referenced by the rule engine.
                     * @return ReferenceCount Number of times referenced by the rule engine.
                     * 
                     */
                    int64_t GetReferenceCount() const;

                    /**
                     * 设置Number of times referenced by the rule engine.
                     * @param _referenceCount Number of times referenced by the rule engine.
                     * 
                     */
                    void SetReferenceCount(const int64_t& _referenceCount);

                    /**
                     * 判断参数 ReferenceCount 是否已赋值
                     * @return ReferenceCount 是否已赋值
                     * 
                     */
                    bool ReferenceCountHasBeenSet() const;

                    /**
                     * 获取Bound package ID.
                     * @return PlanId Bound package ID.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Bound package ID.
                     * @param _planId Bound package ID.
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Bound tag.
                     * @return Tags Bound tag.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tag.
                     * @param _tags Bound tag.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Content identifier status. Valid values:
<li> active: effective; </li>
<li> deleted: Deleted.</li>
                     * @return Status Content identifier status. Valid values:
<li> active: effective; </li>
<li> deleted: Deleted.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Content identifier status. Valid values:
<li> active: effective; </li>
<li> deleted: Deleted.</li>
                     * @param _status Content identifier status. Valid values:
<li> active: effective; </li>
<li> deleted: Deleted.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return CreatedOn Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _createdOn Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Latest update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return ModifiedOn Latest update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Latest update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _modifiedOn Latest update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取Deletion time. It is empty when the status is not "deleted". The time is in Coordinated Universal Time (UTC), following the ISO 8601 date and time format.
                     * @return DeletedOn Deletion time. It is empty when the status is not "deleted". The time is in Coordinated Universal Time (UTC), following the ISO 8601 date and time format.
                     * 
                     */
                    std::string GetDeletedOn() const;

                    /**
                     * 设置Deletion time. It is empty when the status is not "deleted". The time is in Coordinated Universal Time (UTC), following the ISO 8601 date and time format.
                     * @param _deletedOn Deletion time. It is empty when the status is not "deleted". The time is in Coordinated Universal Time (UTC), following the ISO 8601 date and time format.
                     * 
                     */
                    void SetDeletedOn(const std::string& _deletedOn);

                    /**
                     * 判断参数 DeletedOn 是否已赋值
                     * @return DeletedOn 是否已赋值
                     * 
                     */
                    bool DeletedOnHasBeenSet() const;

                private:

                    /**
                     * Content identifier ID.
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * Content identifier description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of times referenced by the rule engine.
                     */
                    int64_t m_referenceCount;
                    bool m_referenceCountHasBeenSet;

                    /**
                     * Bound package ID.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Bound tag.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Content identifier status. Valid values:
<li> active: effective; </li>
<li> deleted: Deleted.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Latest update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * Deletion time. It is empty when the status is not "deleted". The time is in Coordinated Universal Time (UTC), following the ISO 8601 date and time format.
                     */
                    std::string m_deletedOn;
                    bool m_deletedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_
