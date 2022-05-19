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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CONTENTREVIEWTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PornConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TerrorismConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/PoliticalConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/ProhibitedConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/UserDefineConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Details of a content audit template
                */
                class ContentReviewTemplateItem : public AbstractModel
                {
                public:
                    ContentReviewTemplateItem();
                    ~ContentReviewTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of a content audit template.
                     * @return Definition Unique ID of a content audit template.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of a content audit template.
                     * @param Definition Unique ID of a content audit template.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Name of a content audit template. Length limit: 64 characters.
                     * @return Name Name of a content audit template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a content audit template. Length limit: 64 characters.
                     * @param Name Name of a content audit template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of a content audit template. Length limit: 256 characters.
                     * @return Comment Description of a content audit template. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of a content audit template. Length limit: 256 characters.
                     * @param Comment Description of a content audit template. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Porn information detection control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PornConfigure Porn information detection control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PornConfigureInfo GetPornConfigure() const;

                    /**
                     * 设置Porn information detection control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PornConfigure Porn information detection control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPornConfigure(const PornConfigureInfo& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TerrorismConfigure The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    TerrorismConfigureInfo GetTerrorismConfigure() const;

                    /**
                     * 设置The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param TerrorismConfigure The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PoliticalConfigure The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    PoliticalConfigureInfo GetPoliticalConfigure() const;

                    /**
                     * 设置The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PoliticalConfigure The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedConfigureInfo GetProhibitedConfigure() const;

                    /**
                     * 设置Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProhibitedConfigure Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取Custom content audit control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserDefineConfigure Custom content audit control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineConfigureInfo GetUserDefineConfigure() const;

                    /**
                     * 设置Custom content audit control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserDefineConfigure Custom content audit control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The template type. Valid values:
* Preset
* Custom
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Type The template type. Valid values:
* Preset
* Custom
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The template type. Valid values:
* Preset
* Custom
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Type The template type. Valid values:
* Preset
* Custom
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a content audit template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of a content audit template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of a content audit template. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Porn information detection control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PornConfigureInfo m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    TerrorismConfigureInfo m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * The parameters for detecting sensitive information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    PoliticalConfigureInfo m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * Control parameter of prohibited information detection. Prohibited information includes:
<li>Abusive;</li>
<li>Drug-related.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ProhibitedConfigureInfo m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * Custom content audit control parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    UserDefineConfigureInfo m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The template type. Valid values:
* Preset
* Custom
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
