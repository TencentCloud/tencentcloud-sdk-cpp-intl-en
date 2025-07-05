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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateProject request structure.
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the created project (required and up to 200 characters)
                     * @return Name Name of the created project (required and up to 200 characters)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the created project (required and up to 200 characters)
                     * @param _name Name of the created project (required and up to 200 characters)
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
                     * 获取Business system ID
                     * @return InstanceID Business system ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Business system ID
                     * @param _instanceID Business system ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Project sampling rate (greater than or equal to 0)
                     * @return Rate Project sampling rate (greater than or equal to 0)
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置Project sampling rate (greater than or equal to 0)
                     * @param _rate Project sampling rate (greater than or equal to 0)
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Whether to enable aggregation
                     * @return EnableURLGroup Whether to enable aggregation
                     * 
                     */
                    uint64_t GetEnableURLGroup() const;

                    /**
                     * 设置Whether to enable aggregation
                     * @param _enableURLGroup Whether to enable aggregation
                     * 
                     */
                    void SetEnableURLGroup(const uint64_t& _enableURLGroup);

                    /**
                     * 判断参数 EnableURLGroup 是否已赋值
                     * @return EnableURLGroup 是否已赋值
                     * 
                     */
                    bool EnableURLGroupHasBeenSet() const;

                    /**
                     * 获取Project type (valid values: "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * @return Type Project type (valid values: "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Project type (valid values: "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * @param _type Project type (valid values: "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
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
                     * 获取Repository address of the project (optional and up to 256 characters)
                     * @return Repo Repository address of the project (optional and up to 256 characters)
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置Repository address of the project (optional and up to 256 characters)
                     * @param _repo Repository address of the project (optional and up to 256 characters)
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取Webpage address of the project (optional and up to 256 characters)
                     * @return URL Webpage address of the project (optional and up to 256 characters)
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Webpage address of the project (optional and up to 256 characters)
                     * @param _uRL Webpage address of the project (optional and up to 256 characters)
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取Description of the created project (optional and up to 1,000 characters)
                     * @return Desc Description of the created project (optional and up to 1,000 characters)
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description of the created project (optional and up to 1,000 characters)
                     * @param _desc Description of the created project (optional and up to 1,000 characters)
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Name of the created project (required and up to 200 characters)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Business system ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Project sampling rate (greater than or equal to 0)
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Whether to enable aggregation
                     */
                    uint64_t m_enableURLGroup;
                    bool m_enableURLGroupHasBeenSet;

                    /**
                     * Project type (valid values: "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Repository address of the project (optional and up to 256 characters)
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * Webpage address of the project (optional and up to 256 characters)
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Description of the created project (optional and up to 1,000 characters)
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATEPROJECTREQUEST_H_
