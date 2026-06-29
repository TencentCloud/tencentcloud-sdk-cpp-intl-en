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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_GLOSSARYITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_GLOSSARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Termbase detail
                */
                class GlossaryItem : public AbstractModel
                {
                public:
                    GlossaryItem();
                    ~GlossaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Termbase ID.
                     * @return GlossaryId Termbase ID.
                     * 
                     */
                    std::string GetGlossaryId() const;

                    /**
                     * 设置Termbase ID.
                     * @param _glossaryId Termbase ID.
                     * 
                     */
                    void SetGlossaryId(const std::string& _glossaryId);

                    /**
                     * 判断参数 GlossaryId 是否已赋值
                     * @return GlossaryId 是否已赋值
                     * 
                     */
                    bool GlossaryIdHasBeenSet() const;

                    /**
                     * 获取Terminology repository name.
                     * @return Name Terminology repository name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Terminology repository name.
                     * @param _name Terminology repository name.
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
                     * 获取Repository description.
                     * @return Description Repository description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Repository description.
                     * @param _description Repository description.
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
                     * 获取Source language code.
                     * @return Source Source language code.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source language code.
                     * @param _source Source language code.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Target language code.
                     * @return Target Target language code.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target language code.
                     * @param _target Target language code.
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedTime Update time.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Update time.
                     * @param _updatedTime Update time.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * Termbase ID.
                     */
                    std::string m_glossaryId;
                    bool m_glossaryIdHasBeenSet;

                    /**
                     * Terminology repository name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Repository description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Source language code.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Target language code.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_GLOSSARYITEM_H_
