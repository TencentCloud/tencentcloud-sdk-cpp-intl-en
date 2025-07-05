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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_NODECONFIGPARAMS_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_NODECONFIGPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ConfigParams.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Node parameter
                */
                class NodeConfigParams : public AbstractModel
                {
                public:
                    NodeConfigParams();
                    ~NodeConfigParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
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
                     * 获取Parameter.
                     * @return ConfigParams Parameter.
                     * 
                     */
                    std::vector<ConfigParams> GetConfigParams() const;

                    /**
                     * 设置Parameter.
                     * @param _configParams Parameter.
                     * 
                     */
                    void SetConfigParams(const std::vector<ConfigParams>& _configParams);

                    /**
                     * 判断参数 ConfigParams 是否已赋值
                     * @return ConfigParams 是否已赋值
                     * 
                     */
                    bool ConfigParamsHasBeenSet() const;

                private:

                    /**
                     * Node type.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Parameter.
                     */
                    std::vector<ConfigParams> m_configParams;
                    bool m_configParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_NODECONFIGPARAMS_H_
