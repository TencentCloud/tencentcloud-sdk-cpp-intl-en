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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTIONCONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Action parameters in the action group
                */
                class TaskGroupActionConfig : public AbstractModel
                {
                public:
                    TaskGroupActionConfig();
                    ~TaskGroupActionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order of this action in the action group. The entire order starts from 1. If this parameter is left blank or set to an invalid value, the action whose parameters need to be modified in the template cannot be matched.
                     * @return TaskGroupActionOrder Order of this action in the action group. The entire order starts from 1. If this parameter is left blank or set to an invalid value, the action whose parameters need to be modified in the template cannot be matched.
                     * 
                     */
                    uint64_t GetTaskGroupActionOrder() const;

                    /**
                     * 设置Order of this action in the action group. The entire order starts from 1. If this parameter is left blank or set to an invalid value, the action whose parameters need to be modified in the template cannot be matched.
                     * @param _taskGroupActionOrder Order of this action in the action group. The entire order starts from 1. If this parameter is left blank or set to an invalid value, the action whose parameters need to be modified in the template cannot be matched.
                     * 
                     */
                    void SetTaskGroupActionOrder(const uint64_t& _taskGroupActionOrder);

                    /**
                     * 判断参数 TaskGroupActionOrder 是否已赋值
                     * @return TaskGroupActionOrder 是否已赋值
                     * 
                     */
                    bool TaskGroupActionOrderHasBeenSet() const;

                    /**
                     * 获取General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * @return TaskGroupActionGeneralConfiguration General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * 
                     */
                    std::string GetTaskGroupActionGeneralConfiguration() const;

                    /**
                     * 设置General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * @param _taskGroupActionGeneralConfiguration General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * 
                     */
                    void SetTaskGroupActionGeneralConfiguration(const std::string& _taskGroupActionGeneralConfiguration);

                    /**
                     * 判断参数 TaskGroupActionGeneralConfiguration 是否已赋值
                     * @return TaskGroupActionGeneralConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionGeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取Custom action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * @return TaskGroupActionCustomConfiguration Custom action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * 
                     */
                    std::string GetTaskGroupActionCustomConfiguration() const;

                    /**
                     * 设置Custom action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * @param _taskGroupActionCustomConfiguration Custom action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     * 
                     */
                    void SetTaskGroupActionCustomConfiguration(const std::string& _taskGroupActionCustomConfiguration);

                    /**
                     * 判断参数 TaskGroupActionCustomConfiguration 是否已赋值
                     * @return TaskGroupActionCustomConfiguration 是否已赋值
                     * 
                     */
                    bool TaskGroupActionCustomConfigurationHasBeenSet() const;

                private:

                    /**
                     * Order of this action in the action group. The entire order starts from 1. If this parameter is left blank or set to an invalid value, the action whose parameters need to be modified in the template cannot be matched.
                     */
                    uint64_t m_taskGroupActionOrder;
                    bool m_taskGroupActionOrderHasBeenSet;

                    /**
                     * General action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     */
                    std::string m_taskGroupActionGeneralConfiguration;
                    bool m_taskGroupActionGeneralConfigurationHasBeenSet;

                    /**
                     * Custom action parameters, which need to be passed in after JSON serialization. The parameters can be obtained by using the template details query API. If this field is left blank, action parameters in the template are used by default.
                     */
                    std::string m_taskGroupActionCustomConfiguration;
                    bool m_taskGroupActionCustomConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPACTIONCONFIG_H_
