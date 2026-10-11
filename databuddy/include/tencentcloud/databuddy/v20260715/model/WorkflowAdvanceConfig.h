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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWADVANCECONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWADVANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workflow advanced setting.
                */
                class WorkflowAdvanceConfig : public AbstractModel
                {
                public:
                    WorkflowAdvanceConfig();
                    ~WorkflowAdvanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queue mode. ON (default) and OFF.
                     * @return QueuingMode Queue mode. ON (default) and OFF.
                     * 
                     */
                    std::string GetQueuingMode() const;

                    /**
                     * 设置Queue mode. ON (default) and OFF.
                     * @param _queuingMode Queue mode. ON (default) and OFF.
                     * 
                     */
                    void SetQueuingMode(const std::string& _queuingMode);

                    /**
                     * 判断参数 QueuingMode 是否已赋值
                     * @return QueuingMode 是否已赋值
                     * 
                     */
                    bool QueuingModeHasBeenSet() const;

                    /**
                     * 获取	
The default value is 1.

When QueuingMode is ON, the MaxConcurrentNum setting takes effect. Input only integers larger than 0. Invalid input is automatically converted to 1.
                     * @return MaxConcurrentNum 	
The default value is 1.

When QueuingMode is ON, the MaxConcurrentNum setting takes effect. Input only integers larger than 0. Invalid input is automatically converted to 1.
                     * 
                     */
                    int64_t GetMaxConcurrentNum() const;

                    /**
                     * 设置	
The default value is 1.

When QueuingMode is ON, the MaxConcurrentNum setting takes effect. Input only integers larger than 0. Invalid input is automatically converted to 1.
                     * @param _maxConcurrentNum 	
The default value is 1.

When QueuingMode is ON, the MaxConcurrentNum setting takes effect. Input only integers larger than 0. Invalid input is automatically converted to 1.
                     * 
                     */
                    void SetMaxConcurrentNum(const int64_t& _maxConcurrentNum);

                    /**
                     * 判断参数 MaxConcurrentNum 是否已赋值
                     * @return MaxConcurrentNum 是否已赋值
                     * 
                     */
                    bool MaxConcurrentNumHasBeenSet() const;

                private:

                    /**
                     * Queue mode. ON (default) and OFF.
                     */
                    std::string m_queuingMode;
                    bool m_queuingModeHasBeenSet;

                    /**
                     * 	
The default value is 1.

When QueuingMode is ON, the MaxConcurrentNum setting takes effect. Input only integers larger than 0. Invalid input is automatically converted to 1.
                     */
                    int64_t m_maxConcurrentNum;
                    bool m_maxConcurrentNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWADVANCECONFIG_H_
