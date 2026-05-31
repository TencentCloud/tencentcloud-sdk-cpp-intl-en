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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROLE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Role instance
                */
                class Role : public AbstractModel
                {
                public:
                    Role();
                    ~Role() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Role name.</p>
                     * @return RoleName <p>Role name.</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>Role name.</p>
                     * @param _roleName <p>Role name.</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Role token value.</p>
                     * @return Token <p>Role token value.</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>Role token value.</p>
                     * @param _token <p>Role token value.</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * @return PermType <p>Authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置<p>Authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * @param _permType <p>Authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取<p>Role type</p><p>Enumeration value:</p><ul><li>Temporary: Rotation key</li><li>Permanent: Permanent key</li></ul>
                     * @return TokenType <p>Role type</p><p>Enumeration value:</p><ul><li>Temporary: Rotation key</li><li>Permanent: Permanent key</li></ul>
                     * 
                     */
                    std::string GetTokenType() const;

                    /**
                     * 设置<p>Role type</p><p>Enumeration value:</p><ul><li>Temporary: Rotation key</li><li>Permanent: Permanent key</li></ul>
                     * @param _tokenType <p>Role type</p><p>Enumeration value:</p><ul><li>Temporary: Rotation key</li><li>Permanent: Permanent key</li></ul>
                     * 
                     */
                    void SetTokenType(const std::string& _tokenType);

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     * 
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取<p>SSM unique ID</p>
                     * @return SecretName <p>SSM unique ID</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>SSM unique ID</p>
                     * @param _secretName <p>SSM unique ID</p>
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>Rotation cycle</p><p>Unit: day</p>
                     * @return RotateFreq <p>Rotation cycle</p><p>Unit: day</p>
                     * 
                     */
                    uint64_t GetRotateFreq() const;

                    /**
                     * 设置<p>Rotation cycle</p><p>Unit: day</p>
                     * @param _rotateFreq <p>Rotation cycle</p><p>Unit: day</p>
                     * 
                     */
                    void SetRotateFreq(const uint64_t& _rotateFreq);

                    /**
                     * 判断参数 RotateFreq 是否已赋值
                     * @return RotateFreq 是否已赋值
                     * 
                     */
                    bool RotateFreqHasBeenSet() const;

                private:

                    /**
                     * <p>Role name.</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Role token value.</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * <p>Role type</p><p>Enumeration value:</p><ul><li>Temporary: Rotation key</li><li>Permanent: Permanent key</li></ul>
                     */
                    std::string m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * <p>SSM unique ID</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>Rotation cycle</p><p>Unit: day</p>
                     */
                    uint64_t m_rotateFreq;
                    bool m_rotateFreqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROLE_H_
