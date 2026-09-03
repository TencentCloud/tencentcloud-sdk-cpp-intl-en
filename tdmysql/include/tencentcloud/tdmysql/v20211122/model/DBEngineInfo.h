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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DBENGINEINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DBENGINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Database engine information
                */
                class DBEngineInfo : public AbstractModel
                {
                public:
                    DBEngineInfo();
                    ~DBEngineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Engine type</p>
                     * @return Type <p>Engine type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Engine type</p>
                     * @param _type <p>Engine type</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Engine version</p>
                     * @return Version <p>Engine version</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>Engine version</p>
                     * @param _version <p>Engine version</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>Engine name</p>
                     * @return Name <p>Engine name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Engine name</p>
                     * @param _name <p>Engine name</p>
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
                     * 获取<p>Engine description</p>
                     * @return Description <p>Engine description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Engine description</p>
                     * @param _description <p>Engine description</p>
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
                     * 获取<p>Whether it is the latest version</p>
                     * @return New <p>Whether it is the latest version</p>
                     * 
                     */
                    bool GetNew() const;

                    /**
                     * 设置<p>Whether it is the latest version</p>
                     * @param _new <p>Whether it is the latest version</p>
                     * 
                     */
                    void SetNew(const bool& _new);

                    /**
                     * 判断参数 New 是否已赋值
                     * @return New 是否已赋值
                     * 
                     */
                    bool NewHasBeenSet() const;

                    /**
                     * 获取<p>Supported compatible modes, separated by commas</p>
                     * @return SQLMode <p>Supported compatible modes, separated by commas</p>
                     * 
                     */
                    std::vector<std::string> GetSQLMode() const;

                    /**
                     * 设置<p>Supported compatible modes, separated by commas</p>
                     * @param _sQLMode <p>Supported compatible modes, separated by commas</p>
                     * 
                     */
                    void SetSQLMode(const std::vector<std::string>& _sQLMode);

                    /**
                     * 判断参数 SQLMode 是否已赋值
                     * @return SQLMode 是否已赋值
                     * 
                     */
                    bool SQLModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether parameter template is supported</p>
                     * @return IsSupportParamTemplate <p>Whether parameter template is supported</p>
                     * 
                     */
                    bool GetIsSupportParamTemplate() const;

                    /**
                     * 设置<p>Whether parameter template is supported</p>
                     * @param _isSupportParamTemplate <p>Whether parameter template is supported</p>
                     * 
                     */
                    void SetIsSupportParamTemplate(const bool& _isSupportParamTemplate);

                    /**
                     * 判断参数 IsSupportParamTemplate 是否已赋值
                     * @return IsSupportParamTemplate 是否已赋值
                     * 
                     */
                    bool IsSupportParamTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Whether Serverless mode is supported</p>
                     * @return IsSupportServerless <p>Whether Serverless mode is supported</p>
                     * 
                     */
                    bool GetIsSupportServerless() const;

                    /**
                     * 设置<p>Whether Serverless mode is supported</p>
                     * @param _isSupportServerless <p>Whether Serverless mode is supported</p>
                     * 
                     */
                    void SetIsSupportServerless(const bool& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                private:

                    /**
                     * <p>Engine type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Engine version</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Engine name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Engine description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether it is the latest version</p>
                     */
                    bool m_new;
                    bool m_newHasBeenSet;

                    /**
                     * <p>Supported compatible modes, separated by commas</p>
                     */
                    std::vector<std::string> m_sQLMode;
                    bool m_sQLModeHasBeenSet;

                    /**
                     * <p>Whether parameter template is supported</p>
                     */
                    bool m_isSupportParamTemplate;
                    bool m_isSupportParamTemplateHasBeenSet;

                    /**
                     * <p>Whether Serverless mode is supported</p>
                     */
                    bool m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DBENGINEINFO_H_
