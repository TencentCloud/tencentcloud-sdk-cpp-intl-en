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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DELETEINDEXREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DELETEINDEXREQUEST_H_

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
                * DeleteIndex request structure.
                */
                class DeleteIndexRequest : public AbstractModel
                {
                public:
                    DeleteIndexRequest();
                    ~DeleteIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ES cluster ID</p>
                     * @return InstanceId <p>ES cluster ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES cluster ID</p>
                     * @param _instanceId <p>ES cluster ID</p>
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
                     * 获取<p>Deleted index type. auto: autonomous index; normal: general index</p>
                     * @return IndexType <p>Deleted index type. auto: autonomous index; normal: general index</p>
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置<p>Deleted index type. auto: autonomous index; normal: general index</p>
                     * @param _indexType <p>Deleted index type. auto: autonomous index; normal: general index</p>
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
                     * 获取<p>Name of the deleted index</p>
                     * @return IndexName <p>Name of the deleted index</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>Name of the deleted index</p>
                     * @param _indexName <p>Name of the deleted index</p>
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
                     * 获取<p>Cluster access username.</p>
                     * @return Username <p>Cluster access username.</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Cluster access username.</p>
                     * @param _username <p>Cluster access username.</p>
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
                     * 获取<p>Cluster access password</p>
                     * @return Password <p>Cluster access password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Cluster access password</p>
                     * @param _password <p>Cluster access password</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Backing index name</p>
                     * @return BackingIndexName <p>Backing index name</p>
                     * 
                     */
                    std::string GetBackingIndexName() const;

                    /**
                     * 设置<p>Backing index name</p>
                     * @param _backingIndexName <p>Backing index name</p>
                     * 
                     */
                    void SetBackingIndexName(const std::string& _backingIndexName);

                    /**
                     * 判断参数 BackingIndexName 是否已赋值
                     * @return BackingIndexName 是否已赋值
                     * 
                     */
                    bool BackingIndexNameHasBeenSet() const;

                    /**
                     * 获取<p>Index life cycle</p>
                     * @return IndexPhrase <p>Index life cycle</p>
                     * 
                     */
                    std::string GetIndexPhrase() const;

                    /**
                     * 设置<p>Index life cycle</p>
                     * @param _indexPhrase <p>Index life cycle</p>
                     * 
                     */
                    void SetIndexPhrase(const std::string& _indexPhrase);

                    /**
                     * 判断参数 IndexPhrase 是否已赋值
                     * @return IndexPhrase 是否已赋值
                     * 
                     */
                    bool IndexPhraseHasBeenSet() const;

                private:

                    /**
                     * <p>ES cluster ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Deleted index type. auto: autonomous index; normal: general index</p>
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * <p>Name of the deleted index</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>Cluster access username.</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Cluster access password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Backing index name</p>
                     */
                    std::string m_backingIndexName;
                    bool m_backingIndexNameHasBeenSet;

                    /**
                     * <p>Index life cycle</p>
                     */
                    std::string m_indexPhrase;
                    bool m_indexPhraseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DELETEINDEXREQUEST_H_
