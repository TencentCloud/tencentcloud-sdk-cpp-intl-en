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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CLASSIFYCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CLASSIFYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AppModel.h>
#include <tencentcloud/lke/v20231130/model/ClassifyLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Label extraction configuration.
                */
                class ClassifyConfig : public AbstractModel
                {
                public:
                    ClassifyConfig();
                    ~ClassifyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model configuration.
                     * @return Model Model configuration.
                     * 
                     */
                    AppModel GetModel() const;

                    /**
                     * 设置Model configuration.
                     * @param _model Model configuration.
                     * 
                     */
                    void SetModel(const AppModel& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Label list.
                     * @return Labels Label list.
                     * 
                     */
                    std::vector<ClassifyLabel> GetLabels() const;

                    /**
                     * 设置Label list.
                     * @param _labels Label list.
                     * 
                     */
                    void SetLabels(const std::vector<ClassifyLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Welcome words, within 200 characters.
                     * @return Greeting Welcome words, within 200 characters.
                     * 
                     */
                    std::string GetGreeting() const;

                    /**
                     * 设置Welcome words, within 200 characters.
                     * @param _greeting Welcome words, within 200 characters.
                     * 
                     */
                    void SetGreeting(const std::string& _greeting);

                    /**
                     * 判断参数 Greeting 是否已赋值
                     * @return Greeting 是否已赋值
                     * 
                     */
                    bool GreetingHasBeenSet() const;

                private:

                    /**
                     * Model configuration.
                     */
                    AppModel m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Label list.
                     */
                    std::vector<ClassifyLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Welcome words, within 200 characters.
                     */
                    std::string m_greeting;
                    bool m_greetingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CLASSIFYCONFIG_H_
