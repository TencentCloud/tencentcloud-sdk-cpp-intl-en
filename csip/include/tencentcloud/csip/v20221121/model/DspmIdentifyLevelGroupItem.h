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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYLEVELGROUPITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYLEVELGROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyLevelItem.h>
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
                * dspm data identification classification group list item
                */
                class DspmIdentifyLevelGroupItem : public AbstractModel
                {
                public:
                    DspmIdentifyLevelGroupItem();
                    ~DspmIdentifyLevelGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Level group id</p>
                     * @return Id <p>Level group id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Level group id</p>
                     * @param _id <p>Level group id</p>
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
                     * 获取<p>Level group name</p>
                     * @return Name <p>Level group name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Level group name</p>
                     * @param _name <p>Level group name</p>
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
                     * 获取<p>Level group description</p>
                     * @return Description <p>Level group description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Level group description</p>
                     * @param _description <p>Level group description</p>
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
                     * 获取<p>Level group type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return Type <p>Level group type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>Level group type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @param _type <p>Level group type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
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
                     * 获取<p>Level information</p>
                     * @return LevelItems <p>Level information</p>
                     * 
                     */
                    std::vector<DspmIdentifyLevelItem> GetLevelItems() const;

                    /**
                     * 设置<p>Level information</p>
                     * @param _levelItems <p>Level information</p>
                     * 
                     */
                    void SetLevelItems(const std::vector<DspmIdentifyLevelItem>& _levelItems);

                    /**
                     * 判断参数 LevelItems 是否已赋值
                     * @return LevelItems 是否已赋值
                     * 
                     */
                    bool LevelItemsHasBeenSet() const;

                    /**
                     * 获取<p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return UpdateTime <p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _updateTime <p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
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
                     * <p>Level group id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Level group name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Level group description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Level group type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Level information</p>
                     */
                    std::vector<DspmIdentifyLevelItem> m_levelItems;
                    bool m_levelItemsHasBeenSet;

                    /**
                     * <p>Update time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYLEVELGROUPITEM_H_
