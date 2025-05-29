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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaConfig.h>
#include <tencentcloud/lke/v20231130/model/SummaryConfig.h>
#include <tencentcloud/lke/v20231130/model/ClassifyConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Application configuration.
                */
                class AppConfig : public AbstractModel
                {
                public:
                    AppConfig();
                    ~AppConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Knowledge Q&A management application configuration
                     * @return KnowledgeQa Knowledge Q&A management application configuration
                     * 
                     */
                    KnowledgeQaConfig GetKnowledgeQa() const;

                    /**
                     * 设置Knowledge Q&A management application configuration
                     * @param _knowledgeQa Knowledge Q&A management application configuration
                     * 
                     */
                    void SetKnowledgeQa(const KnowledgeQaConfig& _knowledgeQa);

                    /**
                     * 判断参数 KnowledgeQa 是否已赋值
                     * @return KnowledgeQa 是否已赋值
                     * 
                     */
                    bool KnowledgeQaHasBeenSet() const;

                    /**
                     * 获取Knowledge summary application configuration.
                     * @return Summary Knowledge summary application configuration.
                     * 
                     */
                    SummaryConfig GetSummary() const;

                    /**
                     * 设置Knowledge summary application configuration.
                     * @param _summary Knowledge summary application configuration.
                     * 
                     */
                    void SetSummary(const SummaryConfig& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Label extraction application configuration.
                     * @return Classify Label extraction application configuration.
                     * 
                     */
                    ClassifyConfig GetClassify() const;

                    /**
                     * 设置Label extraction application configuration.
                     * @param _classify Label extraction application configuration.
                     * 
                     */
                    void SetClassify(const ClassifyConfig& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                private:

                    /**
                     * Knowledge Q&A management application configuration
                     */
                    KnowledgeQaConfig m_knowledgeQa;
                    bool m_knowledgeQaHasBeenSet;

                    /**
                     * Knowledge summary application configuration.
                     */
                    SummaryConfig m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Label extraction application configuration.
                     */
                    ClassifyConfig m_classify;
                    bool m_classifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPCONFIG_H_
