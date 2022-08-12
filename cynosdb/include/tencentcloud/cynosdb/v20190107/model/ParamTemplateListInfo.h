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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMTEMPLATELISTINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMTEMPLATELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Parameter template information
                */
                class ParamTemplateListInfo : public AbstractModel
                {
                public:
                    ParamTemplateListInfo();
                    ~ParamTemplateListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter template ID
                     * @return Id Parameter template ID
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Parameter template ID
                     * @param Id Parameter template ID
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Parameter template name
                     * @return TemplateName Parameter template name
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Parameter template name
                     * @param TemplateName Parameter template name
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Parameter template description
                     * @return TemplateDescription Parameter template description
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置Parameter template description
                     * @param TemplateDescription Parameter template description
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取Engine version
                     * @return EngineVersion Engine version
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Engine version
                     * @param EngineVersion Engine version
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                private:

                    /**
                     * Parameter template ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Parameter template name
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Parameter template description
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * Engine version
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMTEMPLATELISTINFO_H_
