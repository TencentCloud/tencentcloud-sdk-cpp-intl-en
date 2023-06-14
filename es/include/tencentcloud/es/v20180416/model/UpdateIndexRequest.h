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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINDEXREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINDEXREQUEST_H_

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
                * UpdateIndex request structure.
                */
                class UpdateIndexRequest : public AbstractModel
                {
                public:
                    UpdateIndexRequest();
                    ~UpdateIndexRequest() = default;
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
                     * 获取Type of the index to update. `auto`: Automated; `normal`: General.
                     * @return IndexType Type of the index to update. `auto`: Automated; `normal`: General.
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Type of the index to update. `auto`: Automated; `normal`: General.
                     * @param _indexType Type of the index to update. `auto`: Automated; `normal`: General.
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
                     * 获取Name of the index to update
                     * @return IndexName Name of the index to update
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Name of the index to update
                     * @param _indexName Name of the index to update
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
                     * 获取JSON-formatted index metadata to update, such as `mappings` and `settings`.
                     * @return UpdateMetaJson JSON-formatted index metadata to update, such as `mappings` and `settings`.
                     * 
                     */
                    std::string GetUpdateMetaJson() const;

                    /**
                     * 设置JSON-formatted index metadata to update, such as `mappings` and `settings`.
                     * @param _updateMetaJson JSON-formatted index metadata to update, such as `mappings` and `settings`.
                     * 
                     */
                    void SetUpdateMetaJson(const std::string& _updateMetaJson);

                    /**
                     * 判断参数 UpdateMetaJson 是否已赋值
                     * @return UpdateMetaJson 是否已赋值
                     * 
                     */
                    bool UpdateMetaJsonHasBeenSet() const;

                    /**
                     * 获取Username for cluster access
                     * @return Username Username for cluster access
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username for cluster access
                     * @param _username Username for cluster access
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
                     * 获取Password for cluster access
                     * @return Password Password for cluster access
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password for cluster access
                     * @param _password Password for cluster access
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
                     * 获取Whether to roll over the backup index
                     * @return RolloverBackingIndex Whether to roll over the backup index
                     * 
                     */
                    bool GetRolloverBackingIndex() const;

                    /**
                     * 设置Whether to roll over the backup index
                     * @param _rolloverBackingIndex Whether to roll over the backup index
                     * 
                     */
                    void SetRolloverBackingIndex(const bool& _rolloverBackingIndex);

                    /**
                     * 判断参数 RolloverBackingIndex 是否已赋值
                     * @return RolloverBackingIndex 是否已赋值
                     * 
                     */
                    bool RolloverBackingIndexHasBeenSet() const;

                private:

                    /**
                     * ES cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Type of the index to update. `auto`: Automated; `normal`: General.
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * Name of the index to update
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * JSON-formatted index metadata to update, such as `mappings` and `settings`.
                     */
                    std::string m_updateMetaJson;
                    bool m_updateMetaJsonHasBeenSet;

                    /**
                     * Username for cluster access
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Password for cluster access
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to roll over the backup index
                     */
                    bool m_rolloverBackingIndex;
                    bool m_rolloverBackingIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINDEXREQUEST_H_
