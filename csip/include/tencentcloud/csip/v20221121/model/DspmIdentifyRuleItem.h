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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyRefComplianceInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm categorized and classified data item list item
                */
                class DspmIdentifyRuleItem : public AbstractModel
                {
                public:
                    DspmIdentifyRuleItem();
                    ~DspmIdentifyRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Data item id</p>
                     * @return Id <p>Data item id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Data item id</p>
                     * @param _id <p>Data item id</p>
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
                     * 获取<p>Data item name.</p>
                     * @return Name <p>Data item name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Data item name.</p>
                     * @param _name <p>Data item name.</p>
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
                     * 获取<p>Data item description.</p>
                     * @return Description <p>Data item description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Data item description.</p>
                     * @param _description <p>Data item description.</p>
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
                     * 获取<p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * @return Status <p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     * @param _status <p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul>
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
                     * 获取<p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return Type <p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @param _type <p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
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
                     * 获取<p>Structure rule configuration status</p>
                     * @return StructuredStatus <p>Structure rule configuration status</p>
                     * 
                     */
                    bool GetStructuredStatus() const;

                    /**
                     * 设置<p>Structure rule configuration status</p>
                     * @param _structuredStatus <p>Structure rule configuration status</p>
                     * 
                     */
                    void SetStructuredStatus(const bool& _structuredStatus);

                    /**
                     * 判断参数 StructuredStatus 是否已赋值
                     * @return StructuredStatus 是否已赋值
                     * 
                     */
                    bool StructuredStatusHasBeenSet() const;

                    /**
                     * 获取<p>Unstructured rule configuration status</p>
                     * @return UnStructuredStatus <p>Unstructured rule configuration status</p>
                     * 
                     */
                    bool GetUnStructuredStatus() const;

                    /**
                     * 设置<p>Unstructured rule configuration status</p>
                     * @param _unStructuredStatus <p>Unstructured rule configuration status</p>
                     * 
                     */
                    void SetUnStructuredStatus(const bool& _unStructuredStatus);

                    /**
                     * 判断参数 UnStructuredStatus 是否已赋值
                     * @return UnStructuredStatus 是否已赋值
                     * 
                     */
                    bool UnStructuredStatusHasBeenSet() const;

                    /**
                     * 获取<p>Associated identification template information</p>
                     * @return ComplianceRelations <p>Associated identification template information</p>
                     * 
                     */
                    std::vector<DspmIdentifyRefComplianceInfo> GetComplianceRelations() const;

                    /**
                     * 设置<p>Associated identification template information</p>
                     * @param _complianceRelations <p>Associated identification template information</p>
                     * 
                     */
                    void SetComplianceRelations(const std::vector<DspmIdentifyRefComplianceInfo>& _complianceRelations);

                    /**
                     * 判断参数 ComplianceRelations 是否已赋值
                     * @return ComplianceRelations 是否已赋值
                     * 
                     */
                    bool ComplianceRelationsHasBeenSet() const;

                private:

                    /**
                     * <p>Data item id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Data item name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Data item description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Structure rule configuration status</p>
                     */
                    bool m_structuredStatus;
                    bool m_structuredStatusHasBeenSet;

                    /**
                     * <p>Unstructured rule configuration status</p>
                     */
                    bool m_unStructuredStatus;
                    bool m_unStructuredStatusHasBeenSet;

                    /**
                     * <p>Associated identification template information</p>
                     */
                    std::vector<DspmIdentifyRefComplianceInfo> m_complianceRelations;
                    bool m_complianceRelationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULEITEM_H_
