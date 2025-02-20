/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                * Content identifier. This feature is only available to the allowlist.
                */
                class ContentIdentifier : public AbstractModel
                {
                public:
                    ContentIdentifier();
                    ~ContentIdentifier() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content identifier id.
                     * @return ContentId Content identifier id.
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置Content identifier id.
                     * @param _contentId Content identifier id.
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
                     * 获取Count of citations by the rule engine.
                     * @return ReferenceCount Count of citations by the rule engine.
                     * 
                     */
                    int64_t GetReferenceCount() const;

                    /**
                     * 设置Count of citations by the rule engine.
                     * @param _referenceCount Count of citations by the rule engine.
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
                     * 获取Bound package id.
                     * @return PlanId Bound package id.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Bound package id.
                     * @param _planId Bound package id.
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
                     * 获取Bound tags.
                     * @return Tags Bound tags.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags.
                     * @param _tags Bound tags.
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
                     * 获取Content identifier status. valid values:.
<Li>`Active`: activated</li>.
<Li>`Deleted`: deleted</li>.
                     * @return Status Content identifier status. valid values:.
<Li>`Active`: activated</li>.
<Li>`Deleted`: deleted</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Content identifier status. valid values:.
<Li>`Active`: activated</li>.
<Li>`Deleted`: deleted</li>.
                     * @param _status Content identifier status. valid values:.
<Li>`Active`: activated</li>.
<Li>`Deleted`: deleted</li>.
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
                     * 获取Creation time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     * @return CreatedOn Creation time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     * @param _createdOn Creation time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
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
                     * 获取Latest update time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     * @return ModifiedOn Latest update time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Latest update time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     * @param _modifiedOn Latest update time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
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
                     * 获取Deletion time, which is empty when the status is not `deleted`. the time format follows the iso 8601 standard and is represented in coordinated universal time (utc).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return DeletedOn Deletion time, which is empty when the status is not `deleted`. the time format follows the iso 8601 standard and is represented in coordinated universal time (utc).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetDeletedOn() const;

                    /**
                     * 设置Deletion time, which is empty when the status is not `deleted`. the time format follows the iso 8601 standard and is represented in coordinated universal time (utc).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _deletedOn Deletion time, which is empty when the status is not `deleted`. the time format follows the iso 8601 standard and is represented in coordinated universal time (utc).
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * Content identifier id.
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * Content identifier description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Count of citations by the rule engine.
                     */
                    int64_t m_referenceCount;
                    bool m_referenceCountHasBeenSet;

                    /**
                     * Bound package id.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Bound tags.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Content identifier status. valid values:.
<Li>`Active`: activated</li>.
<Li>`Deleted`: deleted</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Latest update time, which adopts coordinated universal time (utc) and follows the date and time format of the iso 8601 standard.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * Deletion time, which is empty when the status is not `deleted`. the time format follows the iso 8601 standard and is represented in coordinated universal time (utc).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_deletedOn;
                    bool m_deletedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_
