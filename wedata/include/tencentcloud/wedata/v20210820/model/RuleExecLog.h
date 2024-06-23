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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECLOG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECLOG_H_

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
                * Rule Execution Log
                */
                class RuleExecLog : public AbstractModel
                {
                public:
                    RuleExecLog();
                    ~RuleExecLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Completion Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Finished Completion Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetFinished() const;

                    /**
                     * 设置Completion Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _finished Completion Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFinished(const bool& _finished);

                    /**
                     * 判断参数 Finished 是否已赋值
                     * @return Finished 是否已赋值
                     * 
                     */
                    bool FinishedHasBeenSet() const;

                    /**
                     * 获取ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Log ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _log ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                private:

                    /**
                     * Completion Status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_finished;
                    bool m_finishedHasBeenSet;

                    /**
                     * ContentNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECLOG_H_
