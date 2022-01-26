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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MONITORTYPENAMESPACE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MONITORTYPENAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Policy type
                */
                class MonitorTypeNamespace : public AbstractModel
                {
                public:
                    MonitorTypeNamespace();
                    ~MonitorTypeNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Monitor type
                     * @return MonitorType Monitor type
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置Monitor type
                     * @param MonitorType Monitor type
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Policy type value
                     * @return Namespace Policy type value
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Policy type value
                     * @param Namespace Policy type value
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * Monitor type
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Policy type value
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MONITORTYPENAMESPACE_H_
