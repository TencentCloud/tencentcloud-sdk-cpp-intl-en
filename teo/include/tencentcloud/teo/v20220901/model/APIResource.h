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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * API resource.
                */
                class APIResource : public AbstractModel
                {
                public:
                    APIResource();
                    ~APIResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID.
                     * @return Id Resource ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource ID.
                     * @param _id Resource ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Resource name.
                     * @return Name Resource name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Resource name.
                     * @param _name Resource name.
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
                     * 获取List of API service IDs associated with the API resource.
                     * @return APIServiceIds List of API service IDs associated with the API resource.
                     * 
                     */
                    std::vector<std::string> GetAPIServiceIds() const;

                    /**
                     * 设置List of API service IDs associated with the API resource.
                     * @param _aPIServiceIds List of API service IDs associated with the API resource.
                     * 
                     */
                    void SetAPIServiceIds(const std::vector<std::string>& _aPIServiceIds);

                    /**
                     * 判断参数 APIServiceIds 是否已赋值
                     * @return APIServiceIds 是否已赋值
                     * 
                     */
                    bool APIServiceIdsHasBeenSet() const;

                    /**
                     * 获取Resource path.
                     * @return Path Resource path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Resource path.
                     * @param _path Resource path.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Request method list. Supports the following values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * @return Methods Request method list. Supports the following values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置Request method list. Supports the following values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * @param _methods Request method list. Supports the following values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取Specific content of the request content matching rule. It must comply with the expression syntax. For detailed specifications, see the product document.
                     * @return RequestConstraint Specific content of the request content matching rule. It must comply with the expression syntax. For detailed specifications, see the product document.
                     * 
                     */
                    std::string GetRequestConstraint() const;

                    /**
                     * 设置Specific content of the request content matching rule. It must comply with the expression syntax. For detailed specifications, see the product document.
                     * @param _requestConstraint Specific content of the request content matching rule. It must comply with the expression syntax. For detailed specifications, see the product document.
                     * 
                     */
                    void SetRequestConstraint(const std::string& _requestConstraint);

                    /**
                     * 判断参数 RequestConstraint 是否已赋值
                     * @return RequestConstraint 是否已赋值
                     * 
                     */
                    bool RequestConstraintHasBeenSet() const;

                private:

                    /**
                     * Resource ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Resource name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of API service IDs associated with the API resource.
                     */
                    std::vector<std::string> m_aPIServiceIds;
                    bool m_aPIServiceIdsHasBeenSet;

                    /**
                     * Resource path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Request method list. Supports the following values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * Specific content of the request content matching rule. It must comply with the expression syntax. For detailed specifications, see the product document.
                     */
                    std::string m_requestConstraint;
                    bool m_requestConstraintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_
