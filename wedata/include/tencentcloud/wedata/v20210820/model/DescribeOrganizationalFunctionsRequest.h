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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEORGANIZATIONALFUNCTIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEORGANIZATIONALFUNCTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeOrganizationalFunctions request structure.
                */
                class DescribeOrganizationalFunctionsRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationalFunctionsRequest();
                    ~DescribeOrganizationalFunctionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scenario Type: Development, In Use
                     * @return Type Scenario Type: Development, In Use
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Scenario Type: Development, In Use
                     * @param _type Scenario Type: Development, In Use
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
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Function Name
                     * @return Name Function Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Function Name
                     * @param _name Function Name
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
                     * 获取Display Name
                     * @return DisplayName Display Name
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Display Name
                     * @param _displayName Display Name
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Standard Mode Development Environment: DEV
Standard Mode Production Environment: PROD
Simple Mode: ALL

                     * @return EnvType Standard Mode Development Environment: DEV
Standard Mode Production Environment: PROD
Simple Mode: ALL

                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Standard Mode Development Environment: DEV
Standard Mode Production Environment: PROD
Simple Mode: ALL

                     * @param _envType Standard Mode Development Environment: DEV
Standard Mode Production Environment: PROD
Simple Mode: ALL

                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                private:

                    /**
                     * Scenario Type: Development, In Use
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Function Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Display Name
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Standard Mode Development Environment: DEV
Standard Mode Production Environment: PROD
Simple Mode: ALL

                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEORGANIZATIONALFUNCTIONSREQUEST_H_
