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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEALIASREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEALIASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RoutingConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateAlias request structure.
                */
                class UpdateAliasRequest : public AbstractModel
                {
                public:
                    UpdateAliasRequest();
                    ~UpdateAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param FunctionName Function name
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Alias name
                     * @return Name Alias name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alias name
                     * @param Name Alias name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Master version of alias
                     * @return FunctionVersion Master version of alias
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置Master version of alias
                     * @param FunctionVersion Master version of alias
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Function namespace
                     * @param Namespace Function namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Routing information of alias, which is required if you need to specify an additional version for the alias.
                     * @return RoutingConfig Routing information of alias, which is required if you need to specify an additional version for the alias.
                     */
                    RoutingConfig GetRoutingConfig() const;

                    /**
                     * 设置Routing information of alias, which is required if you need to specify an additional version for the alias.
                     * @param RoutingConfig Routing information of alias, which is required if you need to specify an additional version for the alias.
                     */
                    void SetRoutingConfig(const RoutingConfig& _routingConfig);

                    /**
                     * 判断参数 RoutingConfig 是否已赋值
                     * @return RoutingConfig 是否已赋值
                     */
                    bool RoutingConfigHasBeenSet() const;

                    /**
                     * 获取Alias description
                     * @return Description Alias description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Alias description
                     * @param Description Alias description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Alias name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Master version of alias
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Routing information of alias, which is required if you need to specify an additional version for the alias.
                     */
                    RoutingConfig m_routingConfig;
                    bool m_routingConfigHasBeenSet;

                    /**
                     * Alias description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEALIASREQUEST_H_
