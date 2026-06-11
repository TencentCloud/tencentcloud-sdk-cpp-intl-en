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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifySecLogJoinObjects request structure.
                */
                class ModifySecLogJoinObjectsRequest : public AbstractModel
                {
                public:
                    ModifySecLogJoinObjectsRequest();
                    ~ModifySecLogJoinObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log type
Container bash: container_bash
Container startup: container_launch
K8s API: k8s_api
                     * @return LogType Log type
Container bash: container_bash
Container startup: container_launch
K8s API: k8s_api
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type
Container bash: container_bash
Container startup: container_launch
K8s API: k8s_api
                     * @param _logType Log type
Container bash: container_bash
Container startup: container_launch
K8s API: k8s_api
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Bound list
                     * @return BindList Bound list
                     * 
                     */
                    std::vector<std::string> GetBindList() const;

                    /**
                     * 设置Bound list
                     * @param _bindList Bound list
                     * 
                     */
                    void SetBindList(const std::vector<std::string>& _bindList);

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     * 
                     */
                    bool BindListHasBeenSet() const;

                    /**
                     * 获取List of assets to be unbound. When the node scope involves all nodes, this parameter indicates the list of assets to be excluded.
                     * @return UnBindList List of assets to be unbound. When the node scope involves all nodes, this parameter indicates the list of assets to be excluded.
                     * 
                     */
                    std::vector<std::string> GetUnBindList() const;

                    /**
                     * 设置List of assets to be unbound. When the node scope involves all nodes, this parameter indicates the list of assets to be excluded.
                     * @param _unBindList List of assets to be unbound. When the node scope involves all nodes, this parameter indicates the list of assets to be excluded.
                     * 
                     */
                    void SetUnBindList(const std::vector<std::string>& _unBindList);

                    /**
                     * 判断参数 UnBindList 是否已赋值
                     * @return UnBindList 是否已赋值
                     * 
                     */
                    bool UnBindListHasBeenSet() const;

                    /**
                     * 获取Node type.
`NORMAL`: General node (default)
`SUPER`: Super node

                     * @return NodeType Node type.
`NORMAL`: General node (default)
`SUPER`: Super node

                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
`NORMAL`: General node (default)
`SUPER`: Super node

                     * @param _nodeType Node type.
`NORMAL`: General node (default)
`SUPER`: Super node

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
                     * 获取Log node scope type. 0: specified; 1: all.
                     * @return RangeType Log node scope type. 0: specified; 1: all.
                     * 
                     */
                    int64_t GetRangeType() const;

                    /**
                     * 设置Log node scope type. 0: specified; 1: all.
                     * @param _rangeType Log node scope type. 0: specified; 1: all.
                     * 
                     */
                    void SetRangeType(const int64_t& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取Whether new assets are accessed automatically. This parameter is valid only when the node scope involves all nodes.
                     * @return AutoJoin Whether new assets are accessed automatically. This parameter is valid only when the node scope involves all nodes.
                     * 
                     */
                    bool GetAutoJoin() const;

                    /**
                     * 设置Whether new assets are accessed automatically. This parameter is valid only when the node scope involves all nodes.
                     * @param _autoJoin Whether new assets are accessed automatically. This parameter is valid only when the node scope involves all nodes.
                     * 
                     */
                    void SetAutoJoin(const bool& _autoJoin);

                    /**
                     * 判断参数 AutoJoin 是否已赋值
                     * @return AutoJoin 是否已赋值
                     * 
                     */
                    bool AutoJoinHasBeenSet() const;

                private:

                    /**
                     * Log type
Container bash: container_bash
Container startup: container_launch
K8s API: k8s_api
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Bound list
                     */
                    std::vector<std::string> m_bindList;
                    bool m_bindListHasBeenSet;

                    /**
                     * List of assets to be unbound. When the node scope involves all nodes, this parameter indicates the list of assets to be excluded.
                     */
                    std::vector<std::string> m_unBindList;
                    bool m_unBindListHasBeenSet;

                    /**
                     * Node type.
`NORMAL`: General node (default)
`SUPER`: Super node

                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Log node scope type. 0: specified; 1: all.
                     */
                    int64_t m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Whether new assets are accessed automatically. This parameter is valid only when the node scope involves all nodes.
                     */
                    bool m_autoJoin;
                    bool m_autoJoinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_
