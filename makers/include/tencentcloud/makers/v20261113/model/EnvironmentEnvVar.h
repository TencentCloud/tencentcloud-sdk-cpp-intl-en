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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENTENVVAR_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENTENVVAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * Variable in the environment.
                */
                class EnvironmentEnvVar : public AbstractModel
                {
                public:
                    EnvironmentEnvVar();
                    ~EnvironmentEnvVar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Variable ID</p>
                     * @return Id <p>Variable ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Variable ID</p>
                     * @param _id <p>Variable ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Variable name</p>
                     * @return Key <p>Variable name</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>Variable name</p>
                     * @param _key <p>Variable name</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>Variable value</p>
                     * @return Value <p>Variable value</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Variable value</p>
                     * @param _value <p>Variable value</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Comment <p>Remarks.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _comment <p>Remarks.</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>Effective environment slug</p>
                     * @return Env <p>Effective environment slug</p>
                     * 
                     */
                    std::vector<std::string> GetEnv() const;

                    /**
                     * 设置<p>Effective environment slug</p>
                     * @param _env <p>Effective environment slug</p>
                     * 
                     */
                    void SetEnv(const std::vector<std::string>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * <p>Variable ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Variable name</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Variable value</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Effective environment slug</p>
                     */
                    std::vector<std::string> m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVIRONMENTENVVAR_H_
