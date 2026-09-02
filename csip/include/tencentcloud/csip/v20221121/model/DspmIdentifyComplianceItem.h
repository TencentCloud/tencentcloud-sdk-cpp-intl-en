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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm classification and grading template information list
                */
                class DspmIdentifyComplianceItem : public AbstractModel
                {
                public:
                    DspmIdentifyComplianceItem();
                    ~DspmIdentifyComplianceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Recognition template ID.</p>
                     * @return Id <p>Recognition template ID.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Recognition template ID.</p>
                     * @param _id <p>Recognition template ID.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

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
                     * 设置<p>Recognition template name.</p>
                     * @param _name <p>Recognition template name.</p>
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
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Enablement status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @return Status <p>Enablement status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Enablement status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * @param _status <p>Enablement status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return Type <p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @param _type <p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
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
                     * 获取<p>Application status</p><p>Enumeration values:</p><ul><li>0: Not applied</li><li>1: In application</li></ul>
                     * @return ApplyStatus <p>Application status</p><p>Enumeration values:</p><ul><li>0: Not applied</li><li>1: In application</li></ul>
                     * 
                     */
                    uint64_t GetApplyStatus() const;

                    /**
                     * 设置<p>Application status</p><p>Enumeration values:</p><ul><li>0: Not applied</li><li>1: In application</li></ul>
                     * @param _applyStatus <p>Application status</p><p>Enumeration values:</p><ul><li>0: Not applied</li><li>1: In application</li></ul>
                     * 
                     */
                    void SetApplyStatus(const uint64_t& _applyStatus);

                    /**
                     * 判断参数 ApplyStatus 是否已赋值
                     * @return ApplyStatus 是否已赋值
                     * 
                     */
                    bool ApplyStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Recognition template ID.</p>
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
                     * <p>Enablement status</p><p>Enumeration values:</p><ul><li>0: Disabled</li><li>1: Enabled</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Template type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Application status</p><p>Enumeration values:</p><ul><li>0: Not applied</li><li>1: In application</li></ul>
                     */
                    uint64_t m_applyStatus;
                    bool m_applyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCOMPLIANCEITEM_H_
