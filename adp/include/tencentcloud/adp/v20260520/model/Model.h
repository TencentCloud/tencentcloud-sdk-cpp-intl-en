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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelBadge.h>
#include <tencentcloud/adp/v20260520/model/ModelDeveloperBasic.h>
#include <tencentcloud/adp/v20260520/model/ModelLimit.h>
#include <tencentcloud/adp/v20260520/model/ModelBasic.h>
#include <tencentcloud/adp/v20260520/model/ModelParameter.h>
#include <tencentcloud/adp/v20260520/model/ModelProperty.h>
#include <tencentcloud/adp/v20260520/model/ModelProviderBasic.h>
#include <tencentcloud/adp/v20260520/model/ModelStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * <p>Model complete information</p>
                */
                class Model : public AbstractModel
                {
                public:
                    Model();
                    ~Model() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Model badge list</p>
                     * @return BadgeList <p>Model badge list</p>
                     * 
                     */
                    std::vector<ModelBadge> GetBadgeList() const;

                    /**
                     * 设置<p>Model badge list</p>
                     * @param _badgeList <p>Model badge list</p>
                     * 
                     */
                    void SetBadgeList(const std::vector<ModelBadge>& _badgeList);

                    /**
                     * 判断参数 BadgeList 是否已赋值
                     * @return BadgeList 是否已赋值
                     * 
                     */
                    bool BadgeListHasBeenSet() const;

                    /**
                     * 获取<p>Model author information</p>
                     * @return DeveloperInfo <p>Model author information</p>
                     * 
                     */
                    ModelDeveloperBasic GetDeveloperInfo() const;

                    /**
                     * 设置<p>Model author information</p>
                     * @param _developerInfo <p>Model author information</p>
                     * 
                     */
                    void SetDeveloperInfo(const ModelDeveloperBasic& _developerInfo);

                    /**
                     * 判断参数 DeveloperInfo 是否已赋值
                     * @return DeveloperInfo 是否已赋值
                     * 
                     */
                    bool DeveloperInfoHasBeenSet() const;

                    /**
                     * 获取<p>Model restrictive information</p>
                     * @return LimitInfo <p>Model restrictive information</p>
                     * 
                     */
                    ModelLimit GetLimitInfo() const;

                    /**
                     * 设置<p>Model restrictive information</p>
                     * @param _limitInfo <p>Model restrictive information</p>
                     * 
                     */
                    void SetLimitInfo(const ModelLimit& _limitInfo);

                    /**
                     * 判断参数 LimitInfo 是否已赋值
                     * @return LimitInfo 是否已赋值
                     * 
                     */
                    bool LimitInfoHasBeenSet() const;

                    /**
                     * 获取<p>Model basic information</p>
                     * @return ModelBasic <p>Model basic information</p>
                     * 
                     */
                    ModelBasic GetModelBasic() const;

                    /**
                     * 设置<p>Model basic information</p>
                     * @param _modelBasic <p>Model basic information</p>
                     * 
                     */
                    void SetModelBasic(const ModelBasic& _modelBasic);

                    /**
                     * 判断参数 ModelBasic 是否已赋值
                     * @return ModelBasic 是否已赋值
                     * 
                     */
                    bool ModelBasicHasBeenSet() const;

                    /**
                     * 获取<p>Model hyperparameter configuration</p>
                     * @return ParameterList <p>Model hyperparameter configuration</p>
                     * 
                     */
                    std::vector<ModelParameter> GetParameterList() const;

                    /**
                     * 设置<p>Model hyperparameter configuration</p>
                     * @param _parameterList <p>Model hyperparameter configuration</p>
                     * 
                     */
                    void SetParameterList(const std::vector<ModelParameter>& _parameterList);

                    /**
                     * 判断参数 ParameterList 是否已赋值
                     * @return ParameterList 是否已赋值
                     * 
                     */
                    bool ParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Model attribute configuration</p>
                     * @return PropertyList <p>Model attribute configuration</p>
                     * 
                     */
                    std::vector<ModelProperty> GetPropertyList() const;

                    /**
                     * 设置<p>Model attribute configuration</p>
                     * @param _propertyList <p>Model attribute configuration</p>
                     * 
                     */
                    void SetPropertyList(const std::vector<ModelProperty>& _propertyList);

                    /**
                     * 判断参数 PropertyList 是否已赋值
                     * @return PropertyList 是否已赋值
                     * 
                     */
                    bool PropertyListHasBeenSet() const;

                    /**
                     * 获取<p>Model provider info</p>
                     * @return ProviderInfo <p>Model provider info</p>
                     * 
                     */
                    ModelProviderBasic GetProviderInfo() const;

                    /**
                     * 设置<p>Model provider info</p>
                     * @param _providerInfo <p>Model provider info</p>
                     * 
                     */
                    void SetProviderInfo(const ModelProviderBasic& _providerInfo);

                    /**
                     * 判断参数 ProviderInfo 是否已赋值
                     * @return ProviderInfo 是否已赋值
                     * 
                     */
                    bool ProviderInfoHasBeenSet() const;

                    /**
                     * 获取<p>Model status information</p>
                     * @return StatusInfo <p>Model status information</p>
                     * 
                     */
                    ModelStatus GetStatusInfo() const;

                    /**
                     * 设置<p>Model status information</p>
                     * @param _statusInfo <p>Model status information</p>
                     * 
                     */
                    void SetStatusInfo(const ModelStatus& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取<p>Model tag list</p>
                     * @return TagList <p>Model tag list</p>
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置<p>Model tag list</p>
                     * @param _tagList <p>Model tag list</p>
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * <p>Model badge list</p>
                     */
                    std::vector<ModelBadge> m_badgeList;
                    bool m_badgeListHasBeenSet;

                    /**
                     * <p>Model author information</p>
                     */
                    ModelDeveloperBasic m_developerInfo;
                    bool m_developerInfoHasBeenSet;

                    /**
                     * <p>Model restrictive information</p>
                     */
                    ModelLimit m_limitInfo;
                    bool m_limitInfoHasBeenSet;

                    /**
                     * <p>Model basic information</p>
                     */
                    ModelBasic m_modelBasic;
                    bool m_modelBasicHasBeenSet;

                    /**
                     * <p>Model hyperparameter configuration</p>
                     */
                    std::vector<ModelParameter> m_parameterList;
                    bool m_parameterListHasBeenSet;

                    /**
                     * <p>Model attribute configuration</p>
                     */
                    std::vector<ModelProperty> m_propertyList;
                    bool m_propertyListHasBeenSet;

                    /**
                     * <p>Model provider info</p>
                     */
                    ModelProviderBasic m_providerInfo;
                    bool m_providerInfoHasBeenSet;

                    /**
                     * <p>Model status information</p>
                     */
                    ModelStatus m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * <p>Model tag list</p>
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_
