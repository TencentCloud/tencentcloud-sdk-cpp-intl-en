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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABTESTCONFIG_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABTESTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Canary project configuration
                */
                class ABTestConfig : public AbstractModel
                {
                public:
                    ABTestConfig();
                    ~ABTestConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Canary project name
                     * @return ProjectName Canary project name
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Canary project name
                     * @param ProjectName Canary project name
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Valid values: `true` (in canary upgrade); `false` (not in canary upgrade).
                     * @return Status Valid values: `true` (in canary upgrade); `false` (not in canary upgrade).
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Valid values: `true` (in canary upgrade); `false` (not in canary upgrade).
                     * @param Status Valid values: `true` (in canary upgrade); `false` (not in canary upgrade).
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Canary project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Valid values: `true` (in canary upgrade); `false` (not in canary upgrade).
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABTESTCONFIG_H_
