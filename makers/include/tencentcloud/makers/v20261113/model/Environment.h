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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/EnvironmentEnvVar.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * Environment.
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Environment identifier. It cannot be changed after creation.</p>
                     * @return Slug <p>Environment identifier. It cannot be changed after creation.</p>
                     * 
                     */
                    std::string GetSlug() const;

                    /**
                     * 设置<p>Environment identifier. It cannot be changed after creation.</p>
                     * @param _slug <p>Environment identifier. It cannot be changed after creation.</p>
                     * 
                     */
                    void SetSlug(const std::string& _slug);

                    /**
                     * 判断参数 Slug 是否已赋值
                     * @return Slug 是否已赋值
                     * 
                     */
                    bool SlugHasBeenSet() const;

                    /**
                     * 获取<p>Environment name.</p>
                     * @return Name <p>Environment name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Environment name.</p>
                     * @param _name <p>Environment name.</p>
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
                     * 获取<p>Production,Preview,Custom</p>
                     * @return Type <p>Production,Preview,Custom</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Production,Preview,Custom</p>
                     * @param _type <p>Production,Preview,Custom</p>
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
                     * 获取<p>Associate a branch. Wildcards are supported.</p>
                     * @return Branches <p>Associate a branch. Wildcards are supported.</p>
                     * 
                     */
                    std::vector<std::string> GetBranches() const;

                    /**
                     * 设置<p>Associate a branch. Wildcards are supported.</p>
                     * @param _branches <p>Associate a branch. Wildcards are supported.</p>
                     * 
                     */
                    void SetBranches(const std::vector<std::string>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to deploy automatically. Production is always true</p>
                     * @return AutoDeploy <p>Whether to deploy automatically. Production is always true</p>
                     * 
                     */
                    bool GetAutoDeploy() const;

                    /**
                     * 设置<p>Whether to deploy automatically. Production is always true</p>
                     * @param _autoDeploy <p>Whether to deploy automatically. Production is always true</p>
                     * 
                     */
                    void SetAutoDeploy(const bool& _autoDeploy);

                    /**
                     * 判断参数 AutoDeploy 是否已赋值
                     * @return AutoDeploy 是否已赋值
                     * 
                     */
                    bool AutoDeployHasBeenSet() const;

                    /**
                     * 获取<p>Bound custom domain name</p>
                     * @return CustomDomains <p>Bound custom domain name</p>
                     * 
                     */
                    std::vector<std::string> GetCustomDomains() const;

                    /**
                     * 设置<p>Bound custom domain name</p>
                     * @param _customDomains <p>Bound custom domain name</p>
                     * 
                     */
                    void SetCustomDomains(const std::vector<std::string>& _customDomains);

                    /**
                     * 判断参数 CustomDomains 是否已赋值
                     * @return CustomDomains 是否已赋值
                     * 
                     */
                    bool CustomDomainsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable.</p>
                     * @return EnvVars <p>Environment variable.</p>
                     * 
                     */
                    std::vector<EnvironmentEnvVar> GetEnvVars() const;

                    /**
                     * 设置<p>Environment variable.</p>
                     * @param _envVars <p>Environment variable.</p>
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvironmentEnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreatedOn <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createdOn <p>Creation time.</p>
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return ModifiedOn <p>Update time.</p>
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _modifiedOn <p>Update time.</p>
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * <p>Environment identifier. It cannot be changed after creation.</p>
                     */
                    std::string m_slug;
                    bool m_slugHasBeenSet;

                    /**
                     * <p>Environment name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Production,Preview,Custom</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Associate a branch. Wildcards are supported.</p>
                     */
                    std::vector<std::string> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * <p>Whether to deploy automatically. Production is always true</p>
                     */
                    bool m_autoDeploy;
                    bool m_autoDeployHasBeenSet;

                    /**
                     * <p>Bound custom domain name</p>
                     */
                    std::vector<std::string> m_customDomains;
                    bool m_customDomainsHasBeenSet;

                    /**
                     * <p>Environment variable.</p>
                     */
                    std::vector<EnvironmentEnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENT_H_
