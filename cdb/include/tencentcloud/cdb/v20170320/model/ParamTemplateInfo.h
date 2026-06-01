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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PARAMTEMPLATEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PARAMTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Parameter template information
                */
                class ParamTemplateInfo : public AbstractModel
                {
                public:
                    ParamTemplateInfo();
                    ~ParamTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取parameter template ID
                     * @return TemplateId parameter template ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置parameter template ID
                     * @param _templateId parameter template ID
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Parameter template name
                     * @return Name Parameter template name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter template name
                     * @param _name Parameter template name
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
                     * 获取Parameter template description
                     * @return Description Parameter template description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Parameter template description
                     * @param _description Parameter template description
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
                     * 获取Instance engine version. Values: 5.5, 5.6, 5.7, and 8.0.
                     * @return EngineVersion Instance engine version. Values: 5.5, 5.6, 5.7, and 8.0.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Instance engine version. Values: 5.5, 5.6, 5.7, and 8.0.
                     * @param _engineVersion Instance engine version. Values: 5.5, 5.6, 5.7, and 8.0.
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Parameter template type. Valid values: HIGH_STABILITY, HIGH_PERFORMANCE.
                     * @return TemplateType Parameter template type. Valid values: HIGH_STABILITY, HIGH_PERFORMANCE.
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置Parameter template type. Valid values: HIGH_STABILITY, HIGH_PERFORMANCE.
                     * @param _templateType Parameter template type. Valid values: HIGH_STABILITY, HIGH_PERFORMANCE.
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取Parameter template engine, values: InnoDB, RocksDB.
                     * @return EngineType Parameter template engine, values: InnoDB, RocksDB.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Parameter template engine, values: InnoDB, RocksDB.
                     * @param _engineType Parameter template engine, values: InnoDB, RocksDB.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * parameter template ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Parameter template name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter template description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Instance engine version. Values: 5.5, 5.6, 5.7, and 8.0.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Parameter template type. Valid values: HIGH_STABILITY, HIGH_PERFORMANCE.
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * Parameter template engine, values: InnoDB, RocksDB.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PARAMTEMPLATEINFO_H_
