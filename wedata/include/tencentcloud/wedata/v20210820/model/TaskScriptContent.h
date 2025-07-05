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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKSCRIPTCONTENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKSCRIPTCONTENT_H_

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
                * Task execution script
                */
                class TaskScriptContent : public AbstractModel
                {
                public:
                    TaskScriptContent();
                    ~TaskScriptContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Script content Base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScriptContent Script content Base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Script content Base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scriptContent Script content Base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                private:

                    /**
                     * Script content Base64 encoded
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKSCRIPTCONTENT_H_
