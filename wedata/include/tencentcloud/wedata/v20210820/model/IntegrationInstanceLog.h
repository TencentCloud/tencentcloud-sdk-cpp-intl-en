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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONINSTANCELOG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONINSTANCELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance log information
                */
                class IntegrationInstanceLog : public AbstractModel
                {
                public:
                    IntegrationInstanceLog();
                    ~IntegrationInstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task log information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LogInfo Task log information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLogInfo() const;

                    /**
                     * 设置Task log information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _logInfo Task log information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLogInfo(const std::string& _logInfo);

                    /**
                     * 判断参数 LogInfo 是否已赋值
                     * @return LogInfo 是否已赋值
                     * 
                     */
                    bool LogInfoHasBeenSet() const;

                private:

                    /**
                     * Task log information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_logInfo;
                    bool m_logInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONINSTANCELOG_H_
