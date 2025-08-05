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
                     * 获取Specifies the resource ID.
                     * @return Id Specifies the resource ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Specifies the resource ID.
                     * @param _id Specifies the resource ID.
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
                     * 获取Specifies the resource name.
                     * @return Name Specifies the resource name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the resource name.
                     * @param _name Specifies the resource name.
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
                     * 获取Specifies the API service ID list associated with the API resource.
                     * @return APIServiceIds Specifies the API service ID list associated with the API resource.
                     * 
                     */
                    std::vector<std::string> GetAPIServiceIds() const;

                    /**
                     * 设置Specifies the API service ID list associated with the API resource.
                     * @param _aPIServiceIds Specifies the API service ID list associated with the API resource.
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
                     * 获取Specifies the resource path.
                     * @return Path Specifies the resource path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Specifies the resource path.
                     * @param _path Specifies the resource path.
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
                     * 获取Request method list. valid values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * @return Methods Request method list. valid values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置Request method list. valid values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     * @param _methods Request method list. valid values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
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
                     * 获取Specifies the specific content of the request content match rule, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     * @return RequestConstraint Specifies the specific content of the request content match rule, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     * 
                     */
                    std::string GetRequestConstraint() const;

                    /**
                     * 设置Specifies the specific content of the request content match rule, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     * @param _requestConstraint Specifies the specific content of the request content match rule, which must comply with the expression grammar. please refer to the product document for detailed requirements.
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
                     * Specifies the resource ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the resource name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the API service ID list associated with the API resource.
                     */
                    std::vector<std::string> m_aPIServiceIds;
                    bool m_aPIServiceIdsHasBeenSet;

                    /**
                     * Specifies the resource path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Request method list. valid values: GET, POST, PUT, HEAD, PATCH, OPTIONS, DELETE.
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * Specifies the specific content of the request content match rule, which must comply with the expression grammar. please refer to the product document for detailed requirements.
                     */
                    std::string m_requestConstraint;
                    bool m_requestConstraintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APIRESOURCE_H_
