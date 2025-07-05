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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGHISTORY_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ConfigHistory1
                */
                class ConfigHistory : public AbstractModel
                {
                public:
                    ConfigHistory();
                    ~ConfigHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
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
                     * 获取Instance name.
                     * @return InstanceId Instance name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceId Instance name.
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
                     * 获取Creation time.


                     * @return CreatedAt Creation time.


                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.


                     * @param _createdAt Creation time.


                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
                     * @param _updatedAt Update time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取dn/cn
                     * @return NodeType dn/cn
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置dn/cn
                     * @param _nodeType dn/cn
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Parameter name.
                     * @return ParamName Parameter name.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name.
                     * @param _paramName Parameter name.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取New parameter value.
                     * @return ParamNewValue New parameter value.
                     * 
                     */
                    std::string GetParamNewValue() const;

                    /**
                     * 设置New parameter value.
                     * @param _paramNewValue New parameter value.
                     * 
                     */
                    void SetParamNewValue(const std::string& _paramNewValue);

                    /**
                     * 判断参数 ParamNewValue 是否已赋值
                     * @return ParamNewValue 是否已赋值
                     * 
                     */
                    bool ParamNewValueHasBeenSet() const;

                    /**
                     * 获取Old parameter value.
                     * @return ParamOldValue Old parameter value.
                     * 
                     */
                    std::string GetParamOldValue() const;

                    /**
                     * 设置Old parameter value.
                     * @param _paramOldValue Old parameter value.
                     * 
                     */
                    void SetParamOldValue(const std::string& _paramOldValue);

                    /**
                     * 判断参数 ParamOldValue 是否已赋值
                     * @return ParamOldValue 是否已赋值
                     * 
                     */
                    bool ParamOldValueHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: doing and success.
                     * @return Status Status. Valid values: doing and success.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Valid values: doing and success.
                     * @param _status Status. Valid values: doing and success.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Creation time.


                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * dn/cn
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * New parameter value.
                     */
                    std::string m_paramNewValue;
                    bool m_paramNewValueHasBeenSet;

                    /**
                     * Old parameter value.
                     */
                    std::string m_paramOldValue;
                    bool m_paramOldValueHasBeenSet;

                    /**
                     * Status. Valid values: doing and success.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGHISTORY_H_
