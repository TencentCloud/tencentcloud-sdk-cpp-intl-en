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
                     * 获取List of QUuids of bound servers
                     * @return BindList List of QUuids of bound servers
                     * 
                     */
                    std::vector<std::string> GetBindList() const;

                    /**
                     * 设置List of QUuids of bound servers
                     * @param _bindList List of QUuids of bound servers
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
                     * 获取List of QUuids of servers to be unbound
                     * @return UnBindList List of QUuids of servers to be unbound
                     * 
                     */
                    std::vector<std::string> GetUnBindList() const;

                    /**
                     * 设置List of QUuids of servers to be unbound
                     * @param _unBindList List of QUuids of servers to be unbound
                     * 
                     */
                    void SetUnBindList(const std::vector<std::string>& _unBindList);

                    /**
                     * 判断参数 UnBindList 是否已赋值
                     * @return UnBindList 是否已赋值
                     * 
                     */
                    bool UnBindListHasBeenSet() const;

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
                     * List of QUuids of bound servers
                     */
                    std::vector<std::string> m_bindList;
                    bool m_bindListHasBeenSet;

                    /**
                     * List of QUuids of servers to be unbound
                     */
                    std::vector<std::string> m_unBindList;
                    bool m_unBindListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_
