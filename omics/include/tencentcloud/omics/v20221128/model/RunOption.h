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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Application running option
                */
                class RunOption : public AbstractModel
                {
                public:
                    RunOption();
                    ~RunOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation failure mode. Valid values:
- ContinueWhilePossible
- NoNewCalls
                     * @return FailureMode Operation failure mode. Valid values:
- ContinueWhilePossible
- NoNewCalls
                     * 
                     */
                    std::string GetFailureMode() const;

                    /**
                     * 设置Operation failure mode. Valid values:
- ContinueWhilePossible
- NoNewCalls
                     * @param _failureMode Operation failure mode. Valid values:
- ContinueWhilePossible
- NoNewCalls
                     * 
                     */
                    void SetFailureMode(const std::string& _failureMode);

                    /**
                     * 判断参数 FailureMode 是否已赋值
                     * @return FailureMode 是否已赋值
                     * 
                     */
                    bool FailureModeHasBeenSet() const;

                    /**
                     * 获取Whether to use the Call-Caching feature.
                     * @return UseCallCache Whether to use the Call-Caching feature.
                     * 
                     */
                    bool GetUseCallCache() const;

                    /**
                     * 设置Whether to use the Call-Caching feature.
                     * @param _useCallCache Whether to use the Call-Caching feature.
                     * 
                     */
                    void SetUseCallCache(const bool& _useCallCache);

                    /**
                     * 判断参数 UseCallCache 是否已赋值
                     * @return UseCallCache 是否已赋值
                     * 
                     */
                    bool UseCallCacheHasBeenSet() const;

                    /**
                     * 获取Whether to use the error suspension feature.
                     * @return UseErrorOnHold Whether to use the error suspension feature.
                     * 
                     */
                    bool GetUseErrorOnHold() const;

                    /**
                     * 设置Whether to use the error suspension feature.
                     * @param _useErrorOnHold Whether to use the error suspension feature.
                     * 
                     */
                    void SetUseErrorOnHold(const bool& _useErrorOnHold);

                    /**
                     * 判断参数 UseErrorOnHold 是否已赋值
                     * @return UseErrorOnHold 是否已赋值
                     * 
                     */
                    bool UseErrorOnHoldHasBeenSet() const;

                    /**
                     * 获取Output archive COS path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinalWorkflowOutputsDir Output archive COS path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinalWorkflowOutputsDir() const;

                    /**
                     * 设置Output archive COS path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _finalWorkflowOutputsDir Output archive COS path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFinalWorkflowOutputsDir(const std::string& _finalWorkflowOutputsDir);

                    /**
                     * 判断参数 FinalWorkflowOutputsDir 是否已赋值
                     * @return FinalWorkflowOutputsDir 是否已赋值
                     * 
                     */
                    bool FinalWorkflowOutputsDirHasBeenSet() const;

                    /**
                     * 获取Whether to use the relative directory archive output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UseRelativeOutputPaths Whether to use the relative directory archive output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetUseRelativeOutputPaths() const;

                    /**
                     * 设置Whether to use the relative directory archive output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _useRelativeOutputPaths Whether to use the relative directory archive output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUseRelativeOutputPaths(const bool& _useRelativeOutputPaths);

                    /**
                     * 判断参数 UseRelativeOutputPaths 是否已赋值
                     * @return UseRelativeOutputPaths 是否已赋值
                     * 
                     */
                    bool UseRelativeOutputPathsHasBeenSet() const;

                private:

                    /**
                     * Operation failure mode. Valid values:
- ContinueWhilePossible
- NoNewCalls
                     */
                    std::string m_failureMode;
                    bool m_failureModeHasBeenSet;

                    /**
                     * Whether to use the Call-Caching feature.
                     */
                    bool m_useCallCache;
                    bool m_useCallCacheHasBeenSet;

                    /**
                     * Whether to use the error suspension feature.
                     */
                    bool m_useErrorOnHold;
                    bool m_useErrorOnHoldHasBeenSet;

                    /**
                     * Output archive COS path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finalWorkflowOutputsDir;
                    bool m_finalWorkflowOutputsDirHasBeenSet;

                    /**
                     * Whether to use the relative directory archive output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_useRelativeOutputPaths;
                    bool m_useRelativeOutputPathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNOPTION_H_
