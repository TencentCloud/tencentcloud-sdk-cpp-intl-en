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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATEINDEXREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATEINDEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateIndex request structure.
                */
                class CreateIndexRequest : public AbstractModel
                {
                public:
                    CreateIndexRequest();
                    ~CreateIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES cluster ID
                     * @return InstanceId ES cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES cluster ID
                     * @param _instanceId ES cluster ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Index type of the created index. auto: autonomous index; normal: general index
                     * @return IndexType Index type of the created index. auto: autonomous index; normal: general index
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Index type of the created index. auto: autonomous index; normal: general index
                     * @param _indexType Index type of the created index. auto: autonomous index; normal: general index
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取Index name of the created index
                     * @return IndexName Index name of the created index
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Index name of the created index
                     * @param _indexName Index name of the created index
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取[Required] JSON-formatted index metadata created, such as mappings and settings
                     * @return IndexMetaJson [Required] JSON-formatted index metadata created, such as mappings and settings
                     * 
                     */
                    std::string GetIndexMetaJson() const;

                    /**
                     * 设置[Required] JSON-formatted index metadata created, such as mappings and settings
                     * @param _indexMetaJson [Required] JSON-formatted index metadata created, such as mappings and settings
                     * 
                     */
                    void SetIndexMetaJson(const std::string& _indexMetaJson);

                    /**
                     * 判断参数 IndexMetaJson 是否已赋值
                     * @return IndexMetaJson 是否已赋值
                     * 
                     */
                    bool IndexMetaJsonHasBeenSet() const;

                    /**
                     * 获取Cluster access username.
                     * @return Username Cluster access username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Cluster access username.
                     * @param _username Cluster access username.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Cluster access password
                     * @return Password Cluster access password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Cluster access password
                     * @param _password Cluster access password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * ES cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Index type of the created index. auto: autonomous index; normal: general index
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * Index name of the created index
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * [Required] JSON-formatted index metadata created, such as mappings and settings
                     */
                    std::string m_indexMetaJson;
                    bool m_indexMetaJsonHasBeenSet;

                    /**
                     * Cluster access username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Cluster access password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATEINDEXREQUEST_H_
