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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEPARAMETERTEMPLATEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEPARAMETERTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateParameterTemplate request structure.
                */
                class CreateParameterTemplateRequest : public AbstractModel
                {
                public:
                    CreateParameterTemplateRequest();
                    ~CreateParameterTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * @return TemplateName Template name, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * @param _templateName Template name, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取The major database version number, such as 11, 12, 13.
                     * @return DBMajorVersion The major database version number, such as 11, 12, 13.
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置The major database version number, such as 11, 12, 13.
                     * @param _dBMajorVersion The major database version number, such as 11, 12, 13.
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取Database engine, such as postgresql, mssql_compatible.
                     * @return DBEngine Database engine, such as postgresql, mssql_compatible.
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置Database engine, such as postgresql, mssql_compatible.
                     * @param _dBEngine Database engine, such as postgresql, mssql_compatible.
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取Parameter template description, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * @return TemplateDescription Parameter template description, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置Parameter template description, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * @param _templateDescription Parameter template description, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                private:

                    /**
                     * Template name, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * The major database version number, such as 11, 12, 13.
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * Database engine, such as postgresql, mssql_compatible.
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * Parameter template description, which can contain 1-60 letters, digits, and symbols (-_./()[]()+=:@).
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEPARAMETERTEMPLATEREQUEST_H_
