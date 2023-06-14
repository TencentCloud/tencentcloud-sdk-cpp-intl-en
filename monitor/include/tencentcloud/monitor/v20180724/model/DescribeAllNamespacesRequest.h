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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAllNamespaces request structure.
                */
                class DescribeAllNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeAllNamespacesRequest();
                    ~DescribeAllNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter by use case. Currently, the only valid value is `ST_ALARM` (alarm type).
                     * @return SceneType Filter by use case. Currently, the only valid value is `ST_ALARM` (alarm type).
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置Filter by use case. Currently, the only valid value is `ST_ALARM` (alarm type).
                     * @param _sceneType Filter by use case. Currently, the only valid value is `ST_ALARM` (alarm type).
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取Value fixed at "monitor"
                     * @return Module Value fixed at "monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Value fixed at "monitor"
                     * @param _module Value fixed at "monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     * @return MonitorTypes Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     * 
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     * @param _monitorTypes Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     * 
                     */
                    void SetMonitorTypes(const std::vector<std::string>& _monitorTypes);

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     * 
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取Filter by namespace ID. If this parameter is left empty, all will be queried
                     * @return Ids Filter by namespace ID. If this parameter is left empty, all will be queried
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置Filter by namespace ID. If this parameter is left empty, all will be queried
                     * @param _ids Filter by namespace ID. If this parameter is left empty, all will be queried
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Filter by use case. Currently, the only valid value is `ST_ALARM` (alarm type).
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Value fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * Filter by namespace ID. If this parameter is left empty, all will be queried
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESREQUEST_H_
